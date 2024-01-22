#include <stdio.h>
#include <stdlib.h>

#include <string.h> //to use string functions such as strcat()

void createFile();// prototyping


void createFile(){

    FILE *fp;
    char buff[1025];
    char filename[25];
    int check = 1;

    while(check){
        printf("Enter the name of the file:\t");
        gets(filename);

        if(strlen(filename) > 20 || strlen(filename) < 3){// check filename length
            printf("\nThe name of the file must be between 3 and 20 characters.\n");
            check = 1;
            continue;
        }
            check = 0;
    }

    strcat(filename,".txt");//add file extention txt

    fp = fopen(filename,"w+");

    if(fp == NULL){
        puts("\nThere has been an error creating your!\n");
        exit(1);
    }

    printf("\nA new file named %s was created successfully.\n",filename);
    printf("Enter your text:\n");
    gets(buff);
    fputs(buff,fp);
    printf("Text has been added successfully to %s",filename);

    fclose(fp);

}