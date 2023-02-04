#include <stdio.h>
int main (){

 printf("enter value of x=\n");

    int x;
    int y;
    scanf(" %d",&x);
    printf("enter value of y=\n");
    scanf(" %d",&y);
    swap(x,y);


}
void swap (int x,int y){


    printf("before swapping\n value of x=%d\ty=%d\n",x,y);

    x=x+y;
    y=x-y;
    x=x-y;

    printf("after swapping\n value of x=%d\ty=%d",x,y);

}
