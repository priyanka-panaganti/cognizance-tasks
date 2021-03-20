#include <stdio.h>

int main()
{
  // declaring integers x and n as position of elephant and friend
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
