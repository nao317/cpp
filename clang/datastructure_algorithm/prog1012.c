/* prog1012.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ZIP {
    int code;       /* 郵便番号 */
    char *name;     /* 住所（漢字） */
    char *roman;    /* 住所（ローマ字） */
};

#define NUM_OF_ZIP 124117
struct ZIP *zip_data;

void read_zip_file(void)
{
    int i;
    char s[256];
    FILE *fp = fopen("ken2.txt", "r");
    if( fp == NULL ){
        printf( "ken2.txt が開けません¥n");
        exit(-1);
    }
    /* 郵便番号の件数分の struct ZIP のメモリーを確保する */
    zip_data = (struct ZIP *)malloc(sizeof(struct ZIP) * NUM_OF_ZIP);
    /* 郵便番号の件数分のデータを読み込む */
    for(i=0 ; i<NUM_OF_ZIP ; i++ ) {
        /* ファイルから郵便番号を読み込む */
        fscanf(fp, "%d", &zip_data[i].code);
        /* ファイルから住所（漢字）を読み込む */
        fscanf(fp, "%s", s);
        /* 読み込んだ文字列をコピーするためのメモリーを確保する */
        zip_data[i].name = (char *)malloc(strlen(s)+1);
        /* 文字列をコピーする */
        strcpy(zip_data[i].name, s);
        /* ファイルから住所（ローマ字）を読み込む */
        fscanf(fp, "%s", s);
        /* 読み込んだ文字列をコピーするためのメモリーを確保する */
        zip_data[i].roman = (char *)malloc(strlen(s)+1);
        /* 文字列をコピーする */
        strcpy(zip_data[i].roman, s);
    }
    fclose( fp );
}

void find_zip_by_key(FILE *fp, char *key)
{
    int i;

    /* 郵便番号の件数分の線形探索（部分一致）を行う */
    for (i=0; i<NUM_OF_ZIP; ++i) {
        /* 住所（漢字）と key が部分一致していたら表示する */
        if (strstr(zip_data[i].name, key) != NULL) {
            fprintf(fp, "%d %s\n", zip_data[i].code, zip_data[i].name);
        }


        /* 住所（ローマ字）と key が部分一致していたら表示する */
        if (strstr(zip_data[i].roman, key) != NULL) {
            fprintf(fp, "%d %s\n", zip_data[i].code, zip_data[i].roman);
        }


    }
}

int main(int argc, char *argv[])
{
    FILE *fp;
    read_zip_file();
    if (argc == 1) {
        /* 実行コマンド名と使い方を表示する */
        printf("Usage: %s keyword [outputfile]\n", argv[0]);
    } else if (argc == 2) {
        /* １つめの引数をキーワードとして探索して画面に表示する */
        find_zip_by_key(stdout, argv[1]);
    } else {
        /* 書き込み用に２つめの引数をファイル名として開く */
        fp = fopen(argv[2], "w");
        /* １つめの引数をキーワードとして探索してファイルに書き込む */
        if (fp != NULL) find_zip_by_key(fp, argv[1]);
        /* ファイルを閉じる */
        fclose(fp);
    }
        
    return 0;
}