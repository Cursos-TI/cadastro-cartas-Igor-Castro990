#include <stdio.h>

int main(){
    int numeroNormal = 2147483647; // Valor maximo da int
    long long int numeroGrande = 2147483647;

    printf("Número regular (int): %d\n", numeroNormal);
    printf("Número Grande (long int): %lld\n", numeroGrande);

    numeroGrande = 2147483648; // Valor maior que o maximo de int
    printf("Número grande atualizado (long int): %lld\n", numeroGrande);

    return 0;


}