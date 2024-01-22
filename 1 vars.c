#include <stdio.h>
#include <stdlib.h>

#define Pi 3.14

const float Pi = 3.14;

int main() {


	
    // printf("Hello world!\r\nfrom language '%s', he is build in %.3f, %o", "C", 23.512345, 15); // this is comment
    // printf("Le code octal pour %d est: %o /n", 16, 16); // this is comment

    int x, y;
    float z;
    x = 10;
    y = 15;
    z = 17.5;
    printf("x = %d \ny = %d \nz = %.1f", x, y, z);

    char w[] = "wsoum";
    printf("last name is %s", w);

    float r = 4, s;
    s = r*r*Pi;
    printf("s is %.2f", s);

    char j[6] = "Lun\0di";
    printf("jour est %s", j);

    int x = 10, y = 2, z;
    z = x+y;
    printf("%d", z);

    int n = 10;
    n += 2;
    printf("%d", n);


    int x = 10, y = 11, r;
    r = !(x < y && y > 100)? 1 : 0;
    printf("%d", r);

    int x = 100;
    printf("%d\n", x);
    x++;
    printf("%d", x);

    /*
    this is comment
    */
    return 0;
}