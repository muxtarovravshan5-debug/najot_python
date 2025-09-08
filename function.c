#include <stdio.h>

/*void juft(int N){
    scanf("%d", &N);
    for(int i=0; i<=N; i++){
        if(i%2==0){
            printf("%d\n", i);
        }
    }
}

int main(){
    int natija;
    juft(natija);
}*/

/*void toq(int N){
    scanf("%d", &N);
    for(int i=0; i<=N; i++){
        if(i%2!=0){
            printf("%d\n", i);
        }
    }
}

int main(){
    int natija;
    toq(natija);
}*/

int main(){
    int a, natija;
    float b;
    puts("Butun son kiriting");
    scanf("%d", &a);
    puts("Kasr son kiriting");
    scanf("%c", &b);
    natija=a*b;

    printf("%c", natija);
}