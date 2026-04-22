#include <stdio.h>

int main(){
    double numeroPreciso = 3.141592653589793;
    long double numeroMuitopreciso = 3.141592653589793238463;

    printf("Número preciso (double): %.15f\n", numeroPreciso);
    printf("Número muito preciso (long double): %.21Lf\n", numeroMuitopreciso);

    return 0;


}