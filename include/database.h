#ifndef CACHIX_DATABASE_H
#define CACHIX_DATABASE_H

typedef struct
{
    int key_count;
} Database;

Database *database_create(void);
void database_destroy(Database *db);

#endif