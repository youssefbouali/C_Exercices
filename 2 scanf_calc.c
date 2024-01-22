#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, y;
    char m;
    printf("enter la valeur de x: \t");
    scanf("%d", &x);
    printf("enter la valeur de m: \t");
    scanf("%s", &m);
    printf("enter la valeur de y: \t");
    scanf("%d", &y);

    //printf("x+y = %d\n\n", x+y);
    //        main();

    if(m == "+"){
            printf("x+y = %d\n\n", x+y);
            main();
    }

         else {
            printf("error.\n");
            main();

    }
	
	
    return 0;
}