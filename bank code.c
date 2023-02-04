#include <stdio.h>
int main (){
 //   int a,b;
    char x;
    char z;
    int y;
    char yes='y';
    char no='n';
    char username1='a';
    char username2='b';
    int pass1=1234;
    int pass2=5678;
    printf("please enter ur username\n");
    scanf("%c",&x);
    printf("please enter ur password\n");
    scanf("%d",&y);
    if((username1==x)&&(pass1==y)){
        printf("your balance is 5000 egp\n");
        printf("draw y/n?\n");
        scanf(" %c",&z);
        if (z==yes){
            printf("drawing complete");
        }
        else if (z==no){
           printf("thank you");
        }
    }
    else if ((username2==x)&&(pass2==y)){
        printf("your balance is 10000 egp\n");
        printf("draw y/n?\n");
        scanf(" %c",&z);
        if (z==yes){
            printf("drawing complete");
        }
        else if (z==no){
           printf("thank you");
        }
    }
    else {
        printf("wrong pass or username");
    }

}

