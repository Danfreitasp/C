#include <stdio.h>
int main(){

    for (int i = 5; i > 0; i--){
        printf("%d\n", i);
    }

    for (float numero = 0; numero <= 6; numero += 1.5){
        printf("%.2f\n", numero);
    }
    return 0;
}