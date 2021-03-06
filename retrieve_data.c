#include <mysql/mysql.h>
#include <stdio.h>
#include <stdlib.h>

void finish_with_error(MYSQL *con)
{
    fprintf(stderr, "%s\n", mysql_error(con));
    mysql_close(con);
    exit(1);
}
int main(int argc, char **argv)
{
    MYSQL *con = mysql_init(NULL);

    if (con == NULL)
    {
        fprintf(stderr, "mysql_init() failed\n");
        exit(1);
    }
    if (mysql_real_connect(con, "localhost", "root", "", "testdb", 0, NULL, 0) == NULL)
    {
        finish_with_error(con);
    }
    // Shows all rows from the cars table
    if (mysql_query(con, "SELECT * FROM cars"))
    {
        finish_with_error(con);
    }
    // Query retrieves all data from the cars the cars table
    MYSQL_RES *result = mysql_store_result(con);

    if (result == NULL)
    {
        finish_with_error(con);
    }
    // The MYSQL_RES is a structure for holding a result set
    int num_fields = mysql_num_fields(result);

    MYSQL_ROW row;

    while ((row = mysql_fetch_row(result)))
    {
        for (int i = 0; i < num_fields; i++)
        {
            printf("%s ", row[i] ? row[i] : "NULL");
        }
        printf("\n");
    }
    // Fetch the rows and print them to the screen
    mysql_free_result(result);
    mysql_close(con);
    exit(0);
}