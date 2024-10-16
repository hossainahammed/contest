#include<stdio.h>

int main()
{
    int n,x,y;
    scanf("%d",&n);
    if(n%3==0)  printf("Equilateral\n");
    else
    {
        y=(n%3);
        x=n/3;
        if(x*2 > x+y)  printf("Isosceles\n");
        else printf("Invalid\n");
    }
    return 0;
}
