#include <stdio.h>
#include "database.h"


int main(void)
{
    printf("Cachix starting...\n");
    
    Database *db = database_create();
    
    if (db == NULL)
    {
        printf("Failed to create database\n");
        return 1;
    }
    
    printf("Database created\n");
    printf("Key Count: %d\n", db->key_count);
    
    database_destroy(db);
    
    printf("Database destroyed\n");
    
    return 0;
}