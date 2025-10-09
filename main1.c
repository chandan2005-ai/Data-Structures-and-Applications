#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0,digit;
    printf("Read the number: ");
    scanf("%d",&num);
    while(num>0){
        digit=num%10;
    sum+=digit;
    num/=10;
    }
    printf("Sum of all digits: %d",sum);
    return 0;
}
