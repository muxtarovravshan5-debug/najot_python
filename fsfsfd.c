#include <stdio.h>

    int teskari3(int n){
        if(n/10 != 0){
            teskari3(n/10);
        }
    printf("%d ", n%10);

}

    int main(){
        int num;
        printf("Raqam kiriting ");
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

        return 0;
    }