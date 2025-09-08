#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char a[50]="";
    scanf("%s", &a);

    FILE *ptr = fopen("juft.txt", "w");
    FILE *ptr2 = fopen("toq.txt", "w");

    if(strlen(a)%2==0){
        fprintf(ptr, "%s", a);
    }else(fprintf(ptr2, "%s", a));
}