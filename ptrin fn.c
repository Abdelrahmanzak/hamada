#include <stdio.h>
int sum;
int main (){
int a=10;
int b=5;
int *result;
result=add(&a,&b);
printf("sum=%d",*result);

}
int* add (int *x,int *y){

sum = *x + *y;

return &sum;
}
