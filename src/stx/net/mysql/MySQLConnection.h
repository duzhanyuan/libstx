/**
 * This file is part of the "libstx" project
 *   Copyright (c) 2014 Paul Asmuth, Google Inc.
 *
 * libstx is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License v3.0. You should have received a
 * copy of the GNU General Public License along with this program. If not, see
 * <http://www.gnu.org/licenses/>.
 */
#ifndef _STX_SQL_MYSQLCONNECTION_H
#define _STX_SQL_MYSQLCONNECTION_H
#include <memory>
#include <stx/uri.h>
#include <stx/exception.h>
#include <stx/protobuf/MessageSchema.h>
#include <functional>
#ifdef STX_ENABLE_MYSQL
#include <mysql.h>
#endif

namespace stx {
namespace mysql {

class MySQLConnection {
public:

  /**
   * Creates a new mysql connection and tries to connect to the provided URI
   * May throw an exception
   *
   * Example URIs:
   *    mysql://localhost/test_database?user=root
   *    mysql://somehost:3306/my_database?user=my_user&password=my_secret
   *
   * @param URI the mysql:// URI
   * @returns a new MySQLConnection
   */
  static std::unique_ptr<MySQLConnection> openConnection(const stx::URI& uri);

  /**
   * Creates a new mysql connection and tries to connect
   * May throw an exception
   *
   * @returns a new MySQLConnection
   */
  static std::unique_ptr<MySQLConnection> openConnection(
      const std::string& host,
      unsigned int port,
      const std::string& database,
      const std::string& username,
      const std::string& password);

  /**
   * Create a new mysql connection
   */
  MySQLConnection();

  /**
   * Destroy a mysql connection. Closes the connection
   */
  ~MySQLConnection();

  /**
   * Connect to a mysql server on the specified URI. May throw an exception
   *
   * Example URIs:
   *    mysql://localhost/test_database?user=root
   *    mysql://somehost:3306/my_database?user=my_user&password=my_secret
   *
   * @param URI the mysql:// URI
   * @returns a new MySQLConnection
   */
  void connect(const stx::URI& uri);

  /**
   * Connect to a mysql server. May throw an exception
   *
   * @param host the mysql server hostname
   * @param port the mysql server port
   * @param database the mysql database to open or empty string
   * @param username the mysql user username or empty string
   * @param password the mysq user password or empty string
   * @returns a new MySQLConnection
   */
  void connect(
      const std::string& host,
      unsigned int port,
      const std::string& database,
      const std::string& username,
      const std::string& password);

  /**
   * Returns a list of all column names for the provided table name. May
   * throw an exception (This does the equivalent to a DESCRIBE TABLE)
   *
   * @param table_name the name of the table do describe
   * @returns a list of all columns names of the table
   */
  std::vector<std::string> describeTable(const std::string& table_name);

  /**
   * Returns a MessageSchema for the provided table name. May throw an
   * exception (This does the equivalent to a DESCRIBE TABLE)
   *
   * @param table_name the name of the table do describe
   * @returns a list of all columns names of the table
   */
  RefPtr<msg::MessageSchema> getTableSchema(const std::string& table_name);

  /**
   * Execute a mysql query. The mysql query string must not include a terminal
   * semicolon.
   *
   * The provided row callback will be called for every row in the result set.
   * The row callback must return a boolean value; if it returns true it will
   * be called again for the next row in the result set (if a next row exists),
   * if it returns false it will not be called again and the remainder of the
   * result set will be discarded.
   *
   * This method may throw an exception.
   *
   * @param query the mysql query string without a terminal semicolon
   * @param row_callback the callback that should be called for every result row
   */
  void executeQuery(
      const std::string& query,
      std::function<bool (const std::vector<std::string>&)> row_callback);

  /**
   * Execute a mysql query. The mysql query string must not include a terminal
   * semicolon.
   *
   * The provided row callback will be called for every row in the result set.
   * The row callback must return a boolean value; if it returns true it will
   * be called again for the next row in the result set (if a next row exists),
   * if it returns false it will not be called again and the remainder of the
   * result set will be discarded.
   *
   * This method may throw an exception.
   *
   * @param query the mysql query string without a terminal semicolon
   * @param row_callback the callback that should be called for every result row
   */
  std::list<std::vector<std::string>> executeQuery(const std::string& query);

protected:
#ifdef STX_ENABLE_MYSQL
   MYSQL* mysql_;
#else
   void* mysql_;
#endif
};

}
}
#endif
