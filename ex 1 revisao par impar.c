#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int num;

    printf("Digite um numero interiro:");
    scanf("%d", &num);

    if(num%2 == 0){
        printf("O número %d é par!\n", num);
    } else {
        printf("O número %d é impar!\n", num);
}

    return 0;
}
