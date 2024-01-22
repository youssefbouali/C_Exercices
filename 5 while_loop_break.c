#include <stdio.h>
#include <stdlib.h>

int main() {

    int PIN, i=1;

    printf("Enter Your PIN:\t");

    scanf("%d",&PIN);

    while(PIN != 1234){

        i++;

        if(i > 3){

            printf("Your Sim Card is locked!\n");
            break;
        }

        printf("PIN incorrect!\n");

        printf("Enter Your PIN:\t");

        scanf("%d",&PIN);

    }
	
	
    return 0;
}