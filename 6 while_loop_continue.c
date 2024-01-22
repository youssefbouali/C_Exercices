#include <stdio.h>
#include <stdlib.h>

int main() {

    int number, x=1, r;

    // number = 2;

    printf("Chose number:\t");
    scanf("%d",&number);

    while(x < 11){

            if(x == number){
                x++;
                continue;
            }

        r = x*number;
        printf("%d x %d = %d\n", number, x, r);
        x++;
    }
	
	
    return 0;
}