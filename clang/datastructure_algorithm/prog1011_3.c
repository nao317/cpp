/* prog1011.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i;
    FILE *fp;
    fp = fopen("args.txt", "w");
    if (fp != NULL) {
        fprintf(fp, "argc: %d\n", argc);
        for (i=0; i<argc; ++i) {
            fprintf(fp, "argv[%d]: %s\n", i, argv[i]);
        }
    }
    fclose(fp);
        
    return 0;
}
