#include <cstring>
#include <opencv2/core/mat.hpp>
#include <opencv2/opencv.hpp>
#include "crud.h"

sqlite3 *myDataBase;
char *zErrMsg = 0;
int rc;
char *sql;
char buffer[100];

static int callBack(void *NotUsed, int argc, char **argv, char **azColName) {
    int i;
    for (i = 0; i < argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}

int readDataBase(const char *databasePath) //If doesn't exist, creates one.
{
    rc = sqlite3_open(databasePath, &myDataBase);

    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(myDataBase));
        return (0);
    } else {
        fprintf(stderr, "Opened database successfully\n");
    }
    return 0;
}

int createRecord(std::string databasePath, std::string path)
{

    cv::Mat img = cv::imread(path);

  /*  if(img)
        std::cout << "Couldn't reach file." << std::endl; */

    unsigned long long int x = databasePath.length();
    char char_database_path[x + 1];
    strcpy(char_database_path, databasePath.c_str());

    unsigned long long int y = path.length();
    char char_path[y + 1];
    strcpy(char_path, path.c_str());

    rc = sqlite3_open(char_database_path, &myDataBase);

    sprintf(buffer, R"(INSERT INTO Pictures VALUES("%s", DATETIME(), "%d", "%d");)", char_path, img.cols, img.rows);

    rc = sqlite3_exec(myDataBase, buffer, callBack, 0, &zErrMsg);

    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
        return 1;
    } else {
        fprintf(stdout, "Records created successfully\n");
        return 0;
    }
}

/*Create the four basic functions we need for working with databases.

create: adds one or more record(s) to the table,
select: returns a set of record(s),
update: update or modify a record,
delete: removes one or more record.
Create a separate cpp and hpp file for these functions.

Note, we might have to overload these functions. */