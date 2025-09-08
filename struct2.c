#include <stdio.h>
#include <string.h>

struct Student{
    char name[50];
    char surname[50];
    int age;
    float salary;
}

int main(){
    struct Student st1;
    struct Student st2;
    struct Student st3;
    struct Student st4;
    struct Student st5;

     printf("Ism: ");
     scanf("%s", st1.name)
     printf("Familiya: ");
     scanf("%s", st1.surname)
     printf("Yosh: ");
     scanf("%d", st1.age)
     printf("Maosh: ");
     scanf("%f", st1.salary);

     printf("Ism: ");
     scanf("%s", st2.name)
     printf("Familiya: ");
     scanf("%s", st2.surname)
     printf("Yosh: ");
     scanf("%d", st2.age)
     printf("Maosh: ");
     scanf("%f", st2.salary);

      printf("Ism: ");
     scanf("%s", st3.name)
     printf("Familiya: ");
     scanf("%s", st3.surname)
     printf("Yosh: ");
     scanf("%d", st3.age)
     printf("Maosh: ");
     scanf("%f", st3.salary);

      printf("Ism: ");
     scanf("%s", st4.name)
     printf("Familiya: ");
     scanf("%s", st4.surname)
     printf("Yosh: ");
     scanf("%d", st4.age)
     printf("Maosh: ");
     scanf("%f", st4.salary);

      printf("Ism: ");
     scanf("%s", st5.name)
     printf("Familiya: ");
     scanf("%s", st5.surname)
     printf("Yosh: ");
     scanf("%d", st5.age)
     printf("Maosh: ");
     scanf("%f", st5.salary);
     
     if(strlen(st1.name)>=5 && st1.name[0]=='A'){
     printf("Ism: ", st1.name);
     printf("Familiya: ", st1.surname);
     printf("Yosh: ", st1.age);
     printf("Maosh: " st1.salary);
     }

      if(strlen(st2.name)>=5 && st2.name[0]=='A'){
     printf("Ism: ", st2.name);
     printf("Familiya: ", st2.surname);
     printf("Yosh: ", st2.age);
     printf("Maosh: " st2.salary);
     }

      if(strlen(st3.name)>=5 && st3.name[0]=='A'){
     printf("Ism: ", st3.name);
     printf("Familiya: ", st3.surname);
     printf("Yosh: ", st3.age);
     printf("Maosh: " st3.salary);
     }

      if(strlen(st4.name)>=5 && st4.name[0]=='A'){
     printf("Ism: ", st4.name);
     printf("Familiya: ", st4.surname);
     printf("Yosh: ", st4.age);
     printf("Maosh: " st4.salary);
     }

      if(strlen(st5.name)>=5 && st5.name[0]=='A'){
     printf("Ism: ", st5.name);
     printf("Familiya: ", st5.surname);
     printf("Yosh: ", st5.age);
     printf("Maosh: " st5.salary);
     }
}
