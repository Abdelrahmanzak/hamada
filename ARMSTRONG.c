#include <stdio.h>
#include <math.h>
int main ()
{
    int x=0,count=0,sum=0;
    printf("Enter a number ");
    scanf("%d", &x);
    int x1=x;
    int x2=x;
    int x3=x;
    while(x!=0) //ba3ed el digiiitsssssss
    {
        x=x/10;
        count++;
    }
     for(int j=1;j<=count;j++)
    {
        x1=x2%10;
        sum= sum+ pow(x1,count);
        x2=x2/10;
    }
    if(x3==sum)
        printf("\nArmstrong number is %d\n", x3);
    else
        printf("\nNot an Armstrong number\n");
}
