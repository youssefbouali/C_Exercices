#include <stdio.h>
#include <stdlib.h>

int main() {

    int color;
    printf("chose a color:\n0 OR 1:Red\n2:Green\n3:Blue\n");
    scanf("%d", &color);
    switch(color){

         case 0:
         case 1:
            printf("You have chosen the red color\n");
        break;

         case 2:{
            printf("You have chosen the Green color\n");
            }
        break;

         case 3:{
            printf("You have chosen the Blue color\n");
            }
        break;
         default:
            printf("Please, chose a color between 1 and 3.\n");
            main();
        break;

    }
	
	
    return 0;
}