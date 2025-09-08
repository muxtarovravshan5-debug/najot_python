#include <stdio.h>

struct bola{
    char name[50];
    int age;
};

/*int main(){
    struct bola st1;
    struct bola st2;
    struct bola st3;

    printf("1-bola, Ismingizni kiritng ");
    scanf("%s", st1.name);
    printf("1-bola, Yoshingizni kiriting ");
    scanf("%d", &st1.age);
     printf("2-bola, Ismingizni kiritng ");
    scanf("%s", st2.name);
    printf("2-bola, Yoshingizni kiriting ");
    scanf("%d", &st2.age);
     printf("3-bola, Ismingizni kiritng ");
    scanf("%s", st3.name);
    printf("3-bola, Yoshingizni kiriting ");
    scanf("%d", &st3.age);

    if(st1.age>=13 && st1.age<=18){
        printf("Ismingiz %s\n", st1.name);
        printf("Yoshingiz %d\n", st1.age);
    }

    if(st2.age>=13 && st2.age<=18){
        printf("Ismingiz %s\n", st2.name);
        printf("Yoshingiz %d\n", st2.age);
    }

    if(st3.age>=13 && st3.age<=18){
        printf("Ismingiz %s\n", st3.name);
        printf("Yoshingiz %d\n", st3.age);
    }


}*/

int main(){
    struct bola st1;
    struct  bola st2;
    struct  bola st3;

    printf("1-bola, Ismingizni kiritng ");
    scanf("%s", st1.name);
    printf("1-bola, Yoshingizni kiriting ");
    scanf("%d", &st1.age);
     printf("2-bola, Ismingizni kiritng ");
    scanf("%s", st2.name);
    printf("2-bola, Yoshingizni kiriting ");
    scanf("%d", &st2.age);
     printf("3-bola, Ismingizni kiritng ");
    scanf("%s", st3.name);
    printf("3-bola, Yoshingizni kiriting ");
    scanf("%d", &st3.age);

    if(st1.age>st2.age){
        printf("%s eng kattasi", st1.name);
    }else if(st2.age>st3.age){
        printf("%s eng kattasi", st2.name);
    }else(printf("%s eng kattasi", st3.name));
}