#include <stdio.h>
#include <ctype.h>

int main(){
    char arr[256];
    printf("matn kiriting ");
    scanf("%[^\n]", &arr);

    for(int i=0; arr[i]; i++){
        if(isalpha(arr[i])){
            int c = tolower(arr[i]);
            if(c=='a' || c=='e' || c=='o' || c=='i' || c=='u'){
                arr[i]='+';
            }else if((c=='o' ) && arr[i+1] == '\''){
                arr[i]='+';
                for(int j= i+1; arr[j]!='\0'; j++){
                    arr[j]=arr[j+1];
                }
            }
        
            
        }
    }
    printf("natija %s\n", arr);
    return 0;
}