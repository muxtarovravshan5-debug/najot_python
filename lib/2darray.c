#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "lib.h"


int main(){
    srand(time(NULL));
    int n, m;
    printf("Qatorlarni soni: ");
    scanf("%d", &n);
    printf("Ustunlar soni: ");
    scanf("%d", &m);

    int arr[n][m];

    Rand2dArr(&n,m);

    Print2dArr(&n,m);

}