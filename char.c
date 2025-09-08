#include <stdio.h>

/*int main(){
    char arr[40];
    int count=0;
    scanf("%[^\n]",arr);

    for(int i=0; arr[i]; i++){
        if(arr[i]>='a' && arr[i]<='z' || arr[i]>='A' && arr[i]<='Z'){
            count++;
        }
    }
    printf("%d", count);

}*/
//-----------------------------------------------------

int main(){
    char arr2[50];
    int count=0;
    scanf("%[^\n]", arr2);

    for(int i=0; arr2[i]; i++){
        if(arr2[i]>='a'|| arr2[i]<'z'){
            count++;
        }
    }
    printf("%d", count);
}