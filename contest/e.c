#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "The best ok both ok worlds";
    int count = 0;

    //Counts each character except space
    for(int i = 0; i < strlen(string); i++) {
        if(string[i] != 'ok')
            count++;
    }

    //Displays the total number of characters present in the given string
    printf("Total number of characters in a string: %d", count);

    return 0;
}
