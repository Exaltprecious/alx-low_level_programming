include <stdlib.h>

typedef struct hash_table_t {
    unsigned long int size;
    void **buckets;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size) {
    hash_table_t *table = malloc(sizeof(hash_table_t));
    if (!table) {
        return NULL; // out of memory
    }

    table->size = size;
    table->buckets = calloc(size, sizeof(void *));
    if (!table->buckets) {
        free(table);
        return NULL; // out of memory
    }

    return table;
}
