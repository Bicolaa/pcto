#include <stdio.h>

int main ()

{
    int a;
    int b;
    int c;
scanf(" %d %d %d", &a, &b, &c);
if(a == b)
{
    printf("ïl triangolo è isoscele");
} 
if(a == b && b == c)
{
    printf("ïl triangolo è equilatero");
} 
else if(a! = b && b! = c && c! = a)
{
    printf("ïl triangolo è scaleno");
}  
}