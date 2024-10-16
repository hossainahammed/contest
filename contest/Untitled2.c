#include <stdio.h>
#include <math.h>

int reverse(int num);
int isNum(int num);



int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    if(isNum(num) == 1)
    {
        printf("%d is the number.\n", num);
    }
    else
    {
        printf("%d is NOT The number.\n", num);
    }

    return 0;
}

int isNum(int num)
{
    if(num == reverse(num))
    {
        return 1;
    }

    return 0;
}

int reverse(int num)
{
    int digit = (int)log10(num);

    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reverse(num/10));
}

