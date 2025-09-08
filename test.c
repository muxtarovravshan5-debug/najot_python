//1-masala

#include <stdio.h>

int main(){
    /*int arr[6][6];
    int sum=0;

    for(int i=0;i<6; i++){
        for(int x=0; x<6; x++){
            printf("Arrga qiymat kiriting %d %d ", i, x);
            scanf("%d", &arr[i][x]);
        }
    }

    for(int i=0; i<6; i++){
        sum+=arr[i][i];
        sum+=arr[i][6-1-i];
    }

    printf("Yigindi=%d ", sum);
    return 0;*/
 
    //---------------------------------------------------------

    /*int arr[8];

    printf("Kamayish tartibida sonlar kiriting ");
    for(int i=0; i<8; i++){
        scanf("%d", &arr[i]);
    }

    for(int x=0; x<8; x++){
        if(arr[x]!=arr[x-1] && arr[x]!= arr[x+1]){
            printf("%d", arr[x]);
        }
    }*/

    //----------------------------------------------------------

    int teskari3(int n){
        if(n<10){
            printf("%d", n);
            return 0;
        }

    teskari3(n / 10);

    printf("%d", n%10);

}

    int main(){
        int num;
        printf("son kiriting");
        scanf("%d", &num);

        if(num==0){
            printf("0");
        }else if(num < 0){
            printf("- ");
            num=-num;
            teskari3(num);
        }else(
            teskari3(num)
        );
    }

    return 0;

}

