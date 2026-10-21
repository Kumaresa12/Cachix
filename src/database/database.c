#include "database.h"

#include <stdio.h>
#include <stdlib.h>

Database *database_create(void)
{
    Database *db = malloc(sizeof(Database));
    
    if (db == NULL)
    {
        return NULL;
    }
    
    db->key_count = 0;
    
    return db;
}

void database_destroy(Database *db)
{
    free(db);
}