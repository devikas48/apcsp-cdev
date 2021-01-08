#include<stdio.h>

int main()
{

int a = 545;
 
printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));

char b = 'd';

printf("char b value: %c and size: %lu bytes\n", b, sizeof(b));

float c = 1.245;

printf("float c value: %f and size: %lu bytes\n", c, sizeof(c));

double d = 12.45;

printf("double d value: %f and size: %lu bytes\n", d, sizeof(d)); 

short int e = 8;

printf("short e value: %d and size: %lu bytes\n", e, sizeof(e));

unsigned int f = 289;

printf("unsigned f value: %d and size: %lu bytes\n", f, sizeof(f));

}
