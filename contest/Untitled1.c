#include<stdio.h>
int main()
{
    int n,m,ar[24];
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i = 0;i<n;i++)
    {
        for(int i =0;i<m;i++)
            {
            scanf("%d",&ar[i]);
            }
    }
    for(int i =0;i<n;i++)
    {
        for(int i =0;i<m;i++)
        {
        printf("%d",ar[i]);
        }
    }
    return 0;
}
