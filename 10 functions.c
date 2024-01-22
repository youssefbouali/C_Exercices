#include <stdio.h>
#include <stdlib.h>

void richestPeople(int, char[], float);
int somme(int a, int b);

void division(int a, int b);
int verifier(int b);

int main() {

    richestPeople(1, "Elon Musk", 115);
    richestPeople(2, "Warren Buffet", 75.6);
    richestPeople(3, "Jeff Bezos", 72.8);

    printf("Resultat est: %d", somme(4, 9));

    division(10, 3);
	
	
    return 0;
}



void richestPeople(int rank, char name[], float netWorth){

    printf("#%d\t", rank);
    printf("%s\t", name);
    printf("%.1f Billion Dollars\n", netWorth);
    // printf("\a");
    return;
}



int somme(int a, int b){

    return a+b;
}



void division(int a, int b){
    if(verifier(b) == 0){

        printf("Attention! Division sur 0.");
    } else {
        printf("La division de %d sur %d = %.2f", a, b , (float)a/b);
    }

    return;
}

int verifier(int b){
    if(b==0){
        return 0;
    } else {
        return 1;
    }
}