#include <stdio.h>
#include <ctype.h>

int main(){
   /* int n;
    printf("Nechtali arr kerak ");
    scanf("%d", &n);
    int arr[n];

    FILE *ptr = fopen("manfiy.txt", "w");
    FILE *ptr2 = fopen("musbat.txt", "w");
    printf("Arrga qiymat kiriting ");
    for(int x=0; x<n; x++){
        scanf("%d", &arr[x]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            fprintf(ptr2, "%d", arr[i]);

        }else(fprintf(ptr, "%d", arr[i]));
    }*/

    //------------------------------------------

    char pte[100];
    scanf("%[^/n]", &pte);

    FILE *ptr = fopen("Katta.txt", "w");
    FILE *ptr2 = fopen("Kichik.txt", "w");

    for(int i=0; pte[i]; i++){
        if(pte[i]=>65 || pte[i]=<90){
            fprintf(ptr, "%c", pte[i]);
        }else if(pte[i]>=97 || pte[i]<=122){
            fprintf(ptr2, "%c", pte{[i]})
        }
    }

}