#include <stdio.h>
int main (){
    int x;
    int y;
   while(1){
    printf("please enter number\n");
    scanf("%d",&x);
    y=(x/2)*2;
    if (y==x){
        printf("The Number is odd=0\n");
        printf("The Number is even=1\n");
    }
    else {
        printf("The Number is odd=1\n");
        printf("The Number is even=0\n");
    }
   }

}
