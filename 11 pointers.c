#include <stdio.h>
#include <stdlib.h>

int main() {

// declare * Pointer
// & Get Pointer
// * Get Value

    int age;
    int *ptr;

    age = 18;
    ptr = &age;

    printf("La valeur de variable age est: %d \n", age);
    printf("L'adresse de variable age est: %u \n", &age);
    printf("\n ------------------------------------ \n");
    printf("La valeur de variable pointeur est: %d \n", *ptr);
    printf("L'adresse de variable pointeur est: %u \n", ptr);


    // printf("L'adresse de variable pointeur est: %d \n", ptr);
    // printf("L'adresse de variable pointeur est: %x \n", ptr);
    // printf("L'adresse de variable pointeur est: %p \n", ptr);

    printf("La valeur de variable age est: %d, %u \n", age, age);


    int ages[] = {17, 20, 26};

    int *ptr;

    ptr = ages; //premier element

    printf("premier valeur %d \n", *ptr);

    ptr++;

    printf("deuxieme valeur %d \n", *ptr);

    ptr++;

    printf("troisieme valeur %d \n", *ptr);

    ptr--;

    printf("s valeur %d \n", *ptr);


    int val = 1322;

    printf("affichage de val sous forme de int: %d\n", val);
    printf("affichage de val sous forme de char: %d", (char)val);


    int ages[] = {12,15,14,25,30};
    int *ptr = ages;

    int i, numElements = sizeof(ages)/sizeof(int);

    for(i=0;i<numElements;i++){
        printf("L'adresse %p contient la valeur %d\n", ptr, *ptr);
        ptr++;

    }



    //int tableau[10];

    int *tableauDynamique = malloc(10*sizeof(int));

    tableauDynamique[0] = 8;

    tableauDynamique[9] = 45;

    printf("Le nombre est: %d", tableauDynamique[0]);


    int x, i=0;

    printf("Enter la taille du tableau: ");
    scanf("%d", &x);

    int *tableauDynamique = malloc(x*sizeof(int));

    for(i=0; i<x;i++){

        printf("Enter le Nombre %d: ", i+1);
        scanf("%d", &tableauDynamique[i]);
    }

    for(i=0; i<x;i++){

        printf("\n%d", tableauDynamique[i]);
    }

    free(tableauDynamique);



// malloc No initialisation Noncontignous allocation
// calloc initialize Contignous allocation
// realloc resize memory data Dispersé (mrowna

    int *A = malloc(sizeof(int));
    int *B = calloc(1,sizeof(int));

    printf("the address of pointer A: %d and the value : %d \n", A, *A);
    printf("the address of pointer B: %d and the value : %d \n", B, *B);

    int *C = realloc(B, 2*sizeof(int));
    printf("the address of pointer C: %d and the value : %d \n", C, *C);
	
	
    return 0;
}