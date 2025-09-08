#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void remove2(int n, int uzunlik){
    srand(time(NULL));

    for(int i=0; i<x; i++){
        arr[i]=rand()%10;
        printf("%d", arr[i]);
    }
    printf("Qaysi indexni ochirish kerak ");
    scanf("%d", &n);
     for(int i=0; i<x; i++){
        printf("%d", arr[i]);
    }
       for(int i=n; i<uzunlik-1; i++){
        int c = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = c;
    }
    n--;
    arr = realloc(arr, n*4);
}

int main(){
    int n;
    scanf("%d", &n);
    int *arr=malloc(n*4);
    remove2(arr);

}