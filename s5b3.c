#include <stdio.h>
int main(){
    int number, sum;
    do{
        printf("nhap so nguyen duong: ");
        scanf("%d",&number);
    }while(number<=0);
    while(number>=1){
        sum=sum+number;
        number=number-1;
    }
    printf("tong cac so tu 1 den so vua nhap la %d", sum);
    return 0;
}