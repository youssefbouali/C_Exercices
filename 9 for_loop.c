#include <stdio.h>
#include <stdlib.h>

void somme();

void caree(int);

int main() {

    int i, a;

    printf("Enter un nombre:");
    scanf("%d", &a);

    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n", a, i, a*i);
    }



    printf("Hello World!\n");

    somme();


    caree(5);
    caree(9);
    caree(10);
	
	
    return 0;
}

void somme(){
    printf("La somme de 1 et 2 est 3");
    return;
}