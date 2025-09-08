void Print2dArr(int qator, int ustun, int arr[qator][ustun]){
    for(int i=0; i<qator; i++){
        for(int x=0; x<ustun; x++){
            printf("%d ", arr[i][x]);
        }
        puts("");
    }
}

void Rand2dArr(int q, int u, int arr[q][u]){
    for(int i=0; i<q; i++){
        for(int x=0; x<u; x++){
            arr[i][x] = rand()%10;
        }
    }
}

int Sum2dArr(int q, int u, int arr[q][u]){
    int sum=0;
    for(int i=0; i<q; i++){
        for(int x=0; x<u; x++){
            sum += arr[i][x];
        }
    }
    return sum;
}
