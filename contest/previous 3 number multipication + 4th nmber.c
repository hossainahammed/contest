#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    for(int i=3;i<n;i++){
        arr[i]=arr[i-1]*arr[i-2]*arr[i-3];
    }
    printf("%d\n",arr[n-1]);
    return 0;
}
