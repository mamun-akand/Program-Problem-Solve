#include<stdio.h>

int main(){

    int ara1[5][5] = {{1, 2, 3, 4, 5}, {10, 20, 30, 40, 50}, {100, 200, 300, 400, 500},
    {1000, 2000, 3000, 4000, 5000}, {10000, 20000, 30000, 40000, 50000}};

    int ara2[5][5], i, j;

    for(i=0 ; i<5 ; i++){
        for(j=0 ; j<5 ; j++){
            printf("%d\t", ara1[i][j]);
        }
        printf("\n");
    }

    for(i=0 ; i<5 ; i++){
        for(j=0 ; j<5 ; j++){
            ara2[j][i] = ara1[i][j];
        }
    }

    printf("\n");

    for(i=0 ; i<5 ; i++){
        for(j=0 ; j<5 ; j++){
            printf("%d\t", ara2[i][j]);
        }
        printf("\n");
    }

    return 0;

}
