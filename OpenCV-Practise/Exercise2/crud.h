#ifndef OCV_TEST_CRUD_H
#define OCV_TEST_CRUD_H
#include <sqlite3/sqlite3.h>
#include <iostream>


static int callBack(void *NotUsed, int argc, char **argv, char **azColName);
int readDataBase(const char* databasePath);
int createRecord(std::string databasePath, std::string path);

#endif //OCV_TEST_CRUD_H
