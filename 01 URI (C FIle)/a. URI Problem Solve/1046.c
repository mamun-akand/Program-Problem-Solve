#include<stdio.h>

int main(){

    int start, end, duration;
    scanf("%d %d", &start, &end);

    if(end <= start){
        duration = (24 + end) - start;
        printf("O JOGO DUROU %d HORA(S)\n", duration);

    }

    else {
        duration = end - start;
        printf("O JOGO DUROU %d HORA(S)\n", duration);
    }

    return 0;
}
