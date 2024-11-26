#include <stdio.h>
int main(){
    int number, i;
    for(number=1; number<=9; number++){
        for(i=1; i<=10; i++){
            printf("%d x %d = %d\n", number, i, number*i);
        }
        printf("\n");
    }

    return 0;
}