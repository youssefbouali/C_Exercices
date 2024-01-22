#include <stdio.h>
#include <stdlib.h>

#include "filesfunc.h"

int main() {

    FILE *fp;

    fp = fopen("Hello.txt","w");

    char tel[12];

    if(fp == NULL){
        printf("There has been an error!");
        exit(1);
    }

    printf("Your number \n");

    scanf("%s", tel);

    // fprintf(fp,"Hello world!");
    fprintf(fp,"%s",tel);

    fclose(fp);



    FILE *fp;

    fp = fopen("Hello.txt","r");

    char buff[255];

    if(fp == NULL){
        printf("There has been an error!");
        exit(1);
    }

    while(!feof(fp)){

        fscanf(fp,"%s",buff);
        printf("%s ",buff);

    }

    fclose(fp);



    FILE *fp;

    fp = fopen("Hello.txt","a");

    char buff[255];

    if(fp == NULL){
        printf("There has been an error!");
        exit(1);
    }

    printf("What do you wanna add?\n");
    scanf("%[^\n]s", buff);
    fprintf(fp,"\n%s", buff);

    fclose(fp);



    FILE *fp;

    fp = fopen("Hello2.txt","w+");

    char buff[255];

    if(fp == NULL){
        puts("There has been an error!");
        exit(1);
    }

    fputs("Hello",fp);
    fputs(" students",fp);

    // fseek(fp,6,SEEK_SET);
    // fputs("my students",fp);
    fseek(fp,-8,SEEK_END);
    fputs("trainees.",fp);

    fclose(fp);



    createFile();
	
	
    return 0;
}