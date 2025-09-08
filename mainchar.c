#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*int main(){
    char son_top[50]=" ";
    scanf("%[^\n]", son_top);
    for(int i=0; son_top[i];i++){
        if(isdigit(son_top[i])){
            printf("*");
        }else(printf("%c", son_top[i]));
    }


}*/

int main(){
     char harf_top[50]=" ";
    scanf("%[^\n]", harf_top);

    for(int i=0; harf_top[i]; i++){
        if(islower(harf_top[i])){
            harf_top[i]-31;
            printf("%c", harf_top[i]);

    }
    for(int x=0; harf_top[x]; x++){
         if(isupper(harf_top[i])){
            harf_top[i]+32;
            printf("%c", harf_top[i]);
        }
}

    }
}