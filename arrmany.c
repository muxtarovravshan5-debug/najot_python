#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, sum=0;
    printf("Nechtali arr kerak ");
    scanf("%d", &n);
    int *arr = malloc(n*4);

    for(int i=0; i<n; i++){
        printf("Arrga qiymat kiriting ");
        scanf("%d", &arr[i]);
        
    }

 printf("Kopaytma-%d", sum);
}