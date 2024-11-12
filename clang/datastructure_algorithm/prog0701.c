/* prog0701.c */

#include <stdio.h>
#include <stdlib.h>

struct ZIP {
    int code;
    char name[256];
};

#define NUM_OF_ZIP 124060
struct ZIP  zip_data[NUM_OF_ZIP];

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

int zip_linear_search(int key)
{
    int i;
    for( i=0 ; i<NUM_OF_ZIP ; i++ ){
        if( zip_data[i].code == key )
            return i;
    }
    return -1;
}

int main(void)
{
    int zip, found;
    read_zip_file();

    printf("Input zip:");
    scanf("%d", &zip);

    found = zip_linear_search(zip);
    if( found >= 0 ){
        printf("%d: %s\n", zip, zip_data[found].name);
    } else {
        printf("Not found\n");
    }
    return 0;
}
