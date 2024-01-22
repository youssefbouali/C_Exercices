#include <stdio.h>
#include <stdlib.h>

int main() {

    int PIN;
    printf("Enter your PIN Code:\t");
    scanf("%d", &PIN);

    if(PIN == 1234){
        printf("Unlocked!\n");
    } else if(PIN == 1234){
        printf("Unlocked!\n");
    } else if(PIN < 1000){
        printf("The PIN code must be greater than 999.\n");
        main();
    } else if(PIN > 9999){
        printf("The PIN code must be less than 10000.\n");
        main();
    } else {
        printf("Please verify your PIN code.\n");
        main();
    }
	
	
    return 0;
}