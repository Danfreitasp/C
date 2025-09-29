#include <stdio.h>

int main(){

    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            for(int k = 1; k <= 10; k++)
            {
                for(int l = 1; l<=10; l++)
                {
                    printf("%d x %d x %d x %d = %d\n", i, j, k, l, i* j * k * l);
                }
                printf("%d x %d x %d = %d\n", i, j, k, i * j * k);
            }
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }   
    return 0;
}