/* prog0702.c */

#include <stdio.h>
#include <stdlib.h>

struct ZIP {
    int code;
    char name[256];
};

#define NUM_OF_ZIP 124060
struct ZIP  zip_data[NUM_OF_ZIP];

#define HASH_SIZE 190979
int  hash_table[HASH_SIZE];

#define HASH_COFF 67

int hash(int key)
{
    return (key * HASH_COFF) % HASH_SIZE;
}

void add_zip_hash(int key, int no)
{
    hash_table[no] = hash(key);
}

int search_zip_hash(int key)
{
    for (int i = 0; i < NUM_OF_ZIP; i++) {
        if (hash_table[i] == hash(key)) {
            return i;
        }
    }
}

void make_zip_hash_table()
{
    int i;

    for(i=0; i<HASH_SIZE; i++)
        hash_table[i] = -1;

    for(i=0; i<NUM_OF_ZIP; i++)
        add_zip_hash(zip_data[i].code, i);
}

void read_zip_file(void)
{
    int i;
    FILE *fp = fopen("ken.txt", "r");
    if (fp == NULL) {
      printf("ファイルが開けません\n");
      exit(1);
    }
    for( i=0 ; i<NUM_OF_ZIP ; i++ ){
        fscanf(fp, "%d%s", &zip_data[i].code, zip_data[i].name);
    }
    fclose(fp);
}

int main(void)
{
    int zip, found;

    read_zip_file();

    make_zip_hash_table();

    printf("Input zip:");
    scanf("%d", &zip);

    found = search_zip_hash(zip);
    if( found >= 0 ){
        printf("%d: %s\n", zip_data[found].code, zip_data[found].name);
    } else {
        printf("Not found\n");
    }

    return 0;
}
