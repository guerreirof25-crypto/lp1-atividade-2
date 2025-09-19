#include<stdio.h>

int main(void){
    int temperatura;
    int soma=0;
    char temps[50];
    int acimadamedia=0;
    for(int i=0;i<50;i++){
        printf("digite a temperatura: ");
        scanf("%d",&temperatura);
        if(temperatura > 100 || temperatura <-100){
            printf("digite um valor válido, ");
            i--;
            continue;
        }
        temps[i]=temperatura;
        soma += temps[i];
    }
    float media = soma/50.0;
    for(int j=0;j<50;j++){
        if(temps[j]>media){
            acimadamedia++;
        }
    }
    printf("a quantidade de temperaturas acima da média é: %d\n", acimadamedia);
    return 0;
}
