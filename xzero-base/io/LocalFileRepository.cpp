#include <xzero-base/io/LocalFileRepository.h>
#include <xzero-base/io/LocalFile.h>
#include <xzero-base/io/FileUtil.h>
#include <xzero-base/MimeTypes.h>

namespace xzero {

LocalFileRepository::LocalFileRepository(MimeTypes& mt,
                                                 const std::string& basedir,
                                                 bool etagMtime,
                                                 bool etagSize,
                                                 bool etagInode)
    : mimetypes_(mt),
      basedir_(FileUtil::realpath(basedir)),
      etagConsiderMTime_(etagMtime),
      etagConsiderSize_(etagSize),
      etagConsiderINode_(etagInode) {
}

std::shared_ptr<File> LocalFileRepository::getFile(
    const std::string& requestPath,
    const std::string& docroot) {

  std::string path = basedir_ + docroot + requestPath;

  return std::shared_ptr<File>(new LocalFile(
        *this, path, mimetypes_.getMimeType(requestPath)));
}

void LocalFileRepository::listFiles(
    std::function<bool(const std::string&)> callback) {
  FileUtil::ls(basedir_,
               [&](const std::string& filename) -> bool {
                  return callback(FileUtil::joinPaths(basedir_, filename));
               });
}

void LocalFileRepository::deleteAllFiles() {
  FileUtil::ls(basedir_,
               [&](const std::string& filename) -> bool {
                  FileUtil::rm(FileUtil::joinPaths(basedir_, filename));
                  return true;
               });
}

int LocalFileRepository::createTempFile(std::string* filename) {
  if (basedir_.empty() || basedir_ == "/")
    return FileUtil::createTempFileAt(FileUtil::tempDirectory(), filename);
  else
    return FileUtil::createTempFileAt(basedir_, filename);
}

void LocalFileRepository::configureETag(bool mtime, bool size, bool inode) {
  etagConsiderMTime_ = mtime;
  etagConsiderSize_ = size;
  etagConsiderINode_ = inode;
}

}  // namespace xzero
