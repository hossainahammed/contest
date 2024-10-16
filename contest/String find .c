#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main() {
   char s1[MAX_SIZE]; //= "Beauty is in the eye of the beholder";
   char s2[MAX_SIZE] ;//= "the";

   int n,m,times = 0;
    printf("Enter any string: ");
    gets(s1);
    printf("Enter any word to search: ");
    gets(s2);
   int len = strlen(s2);      // contains the length of search string

   while(s1[n] != '\0') {

      if(s1[n] == s2[m]) {     // if first character of search string matches

         // keep on searching

         while(s1[n] == s2[m]  && s1[n] !='\0') {
            n++;
            m++;
         }

         // if we sequence of characters matching with the length of searched string
         if(m == len && (s1[n] == ' ' || s1[n] == '\0')) {

            // BINGO!! we find our search string.
            times++;
         }
      } else {            // if first character of search string DOES NOT match
         while(s1[n] != ' ') {        // Skip to next word
            n++;
            if(s1[n] == '\0')
            break;
         }
      }

      n++;
      m=0;  // reset the counter to start from first character of the search string.
   }

   if(times > 0) {
      printf("'%s' appears %d time(s)\n", s2, times);
   } else {
      printf("'%s' does not appear in the sentence.\n", s2);
   }

   return 0;
}
