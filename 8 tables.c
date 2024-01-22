#include <stdio.h>
#include <stdlib.h>

int main() {

    char mot[8] = "Maghreb";

    printf("Le mot est %s \n", mot);
    printf("Le mot cinq est %c \n", mot[5]);
    mot[5] = 'i';
    printf("Le mot cinq est %c \n", mot[5]);


    char semaine[3][9] = {
        {"Lindi"},
        {"Mardi"},
        {"Mercredi"},
    };

    printf("%s\n", semaine[1]);
    printf("%c\n", semaine[1][3]);


    int i;

    char semaine[7][9] = {
        {"Lundi"},
        {"Mardi"},
        {"Mercredi"},
        {"Jeudi"},
        {"Vendredi"},
        {"Samedi"},
        {"Dimanche"},
    };

    for(i=0;i<=6;i++){
        printf("%s\n", semaine[i]);
    }
	
	
    return 0;
}