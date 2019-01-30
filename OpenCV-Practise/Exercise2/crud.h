#ifndef OCV_TEST_CRUD_H
#define OCV_TEST_CRUD_H
#include <sqlite3/sqlite3.h>
#include <iostream>


static int callBack(void *NotUsed, int argc, char **argv, char **azColName);
int readDataBase(const char* databasePath);
int createRecord(std::string databasePath, std::string path);
int deleteRecord(std::string databasePath, std::string userCmdAfterWhere);
int updateRecord(std::string databasePath, std::string userCmdAfterSet);
int selectRecords(std::string databasePath, std::string chooseRecord);

#endif //OCV_TEST_CRUD_H
