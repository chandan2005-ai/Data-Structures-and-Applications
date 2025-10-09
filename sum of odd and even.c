#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[10],sumO=0,sume=0,i;
    printf("Read array size: ");
    scanf("%d",&n);
    printf("Read element size: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            sume+=a[i];
        else
            sumO+=a[i];
    }
    printf("Sum of Odd : %d",sumO);
    printf("\nSum of Even : %d",sume);
    return 0;
}
