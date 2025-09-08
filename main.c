#include <stdio.h>

int main(){
    /*int arr[5][5];
    int sum=0;

    printf("Sonlarni kiriting  ");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("arr[%d][%d] ", i, j);

            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<5; i++){
        sum+=arr[i][i];
        if(i!=4-1);
        sum+=arr[i][4-i];
    }


    printf("%d", sum);*/

    int arr[10];

    printf("Saralangan tartibda 10 ta son kiriting ");

    for(int i=0; i<10; i++){
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nUnikal sonlar\n");

    for(int i=0; i<10; i++){
        if((i=0 && arr[i] != arr[i+1]) || (i==9 && arr[i] != arr[i-1]) || (i>0 && i<9 && arr[i] != arr[i-1] && arr[i] != arr[i+1])){
            printf("%d ", arr[i]);
        }
    }
}

