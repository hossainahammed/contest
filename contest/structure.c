#include <stdio.h>
struct scientist{
    char name[10];
    float age;
    int pub;
} sntst1, sntst2;

int main(){
     fgets(sntst1.name, sizeof(sntst1.name), stdin);
      fgets(sntst2.name, sizeof(sntst2.name), stdin);
   // scanf("%s %s", sntst1.name, sntst2.name);
    scanf("%f %f", &sntst1.age, &sntst2.age);
    scanf("%d %d", &sntst1.pub, &sntst2.pub);

    printf("First Scientist Name = %s\n", sntst1.name);
    printf("First Scientist Age  = %1f\n", sntst1.age);
    printf("First Scientist No.of Pub = %d\n", sntst1.pub);
    printf("\nSecond Scientist Name = %s\n", sntst2.name);
    printf("Second Scientist Age = %1f\n", sntst2.age);
    printf("Second Scientist No.of Pub = %d\n", sntst2.pub);
return 0;
}
