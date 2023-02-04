#include <stdio.h>
/*void add (void){
int num_1=0;
int num_2=0;
int sum=0;
printf("please enter first number");
scanf("%d",&num_1);
printf("please enter second number");
scanf("%d",&num_2);
sum=num_1+num_2;
printf("result is%d",sum);
}*/
//int factorial (void);

int main()
{
    int n;
    printf("please enter no=");
    scanf("%d",&n);
    printf("result is =%d",factorial(n));
}

int factorial (int n)
{
    int fact=1;
    int i;
    for (i=1;i<n;i++)
    {
    fact =fact*i;
    }
    return fact ;
    //printf("Result is %d",fact);
}
