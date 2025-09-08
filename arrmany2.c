#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int main(){
    int n, juft=0, toq=0;
    scanf("%d", &n);

    int *arr=malloc(n*4);

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i]%2==0){
            juft++;
        }else(toq++);
    }
    printf("%d-Juftlar soni\n%d-Toqlar soni", juft, toq);
}*/

int main(){
    int n;
    scanf("%d", &n);
    int *arr=malloc(n*4);
    int *arr2=malloc(2*4);

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            arr2[0]+=arr[i];
        }else(arr2[1]+=arr[i]);
    }
    printf("%d\n", arr2[0]);
    printf("%d", arr2[1]);
}