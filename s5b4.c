#include <stdio.h>
int main(){
    int number, i=1;
    do{
        printf("nhap mot so nguyen duong tu 1-10: ");
        scanf("%d",&number);
    }while(number<=0 || number>10);
    while(i>0 && i<=10){
        printf("%d x %d = %d\n", number, i, number*i);
        i=i+1;
    }

    return 0;
}