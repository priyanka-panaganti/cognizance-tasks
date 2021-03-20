#include <stdio.h>

int main()
{
    int x,n;
    int steps=0;
    scanf( "%d" , & x);
    if (x<=5)
    {
    n=1;
    }
    else 
    
    if (x % 5 == 0)
    {
        n= x/5 ;
    }
    else
    {
        n=x/5 + 1;
    }
    printf ("%d", n);
}
