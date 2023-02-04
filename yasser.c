#include<stdio.h>
int main (){
int x=5;
func(&x);
printf("%d",x);
}

int func(int *y)
{
    *y=3;
}
