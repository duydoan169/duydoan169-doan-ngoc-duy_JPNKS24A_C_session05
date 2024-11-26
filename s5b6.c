#include <stdio.h>
int main(){
    int number1, number2, option;
    printf("nhap 2 so nguyen: ");
    scanf("%d %d", &number1, &number2);
    printf("1. Tong 2 so\n");
    printf("2. Hieu 2 so\n");
    printf("3. Tich 2 so\n");
    printf("4. Thuong 2 so\n");
    printf("5. Thoat\n");
    printf("lua chon cua ban: ");
    scanf("%d", &option);
    if(option==1)
        printf("%d + %d = %d", number1, number2, number1+number2);
    if(option==2)
        printf("%d - %d = %d", number1, number2, number1-number2);
    if(option==3)
        printf("%d x %d = %d", number1, number2, number1*number2);
    if(option==4)
        printf("%d / %d = %.1f", number1, number2, (float)number1/(float)number2);
    if(option==5)
        printf("");
    return 0;
}