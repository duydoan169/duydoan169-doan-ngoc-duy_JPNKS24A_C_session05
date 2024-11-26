#include <stdio.h>
int main(){
    int number, numberOG=16;
    do{
        printf("nhap so: ");
        scanf("%d",&number);
    }while(number != numberOG);
    return 0;
}