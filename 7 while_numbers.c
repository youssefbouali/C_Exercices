#include <stdio.h>
#include <stdlib.h>

int main() {

    int number, x=1, r, m;

    printf("Number:\t");
    scanf("%d",&number);

    printf("Last Number:\t");
    scanf("%d",&m);

    while(x < m){
        r = x*number;
        printf("%d x %d = %d\n", number, x, r);
        x++;
    }
	
	
	
	
	
	
	
	

    int x2=1, number2=1, r2, d=0;


    printf("Enter Your num:\t");

    scanf("%d",&number2);

    if(number2 < 0 || number2 > 11){
         number2=1;
         d=1;
    }

    while(number2 < 11){


        r = x2*number2;
        printf("%d x %d = %d\n", x2, number2, r);


        x2++;

    if(x2 == 11){

        if(d == 1){

        printf("\n\n\n");
        number2++;
        x2=1;


        } else {
            break;
        }

    }

    }
	
	
    return 0;
}