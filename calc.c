#include <stdio.h>

int main(){
    int x;
    int y;
    int z;
    float add,sub,divid,multi;
while (1){
    printf("\nplease enter value of X\n");
    scanf("%d",&x);
    printf("please enter value of y\n");
    scanf("%d",&y);
    printf("please enter mathematics operation \n");
    printf(" 1 for add \n 2 for sub \n 3 for division \n 4 for multi \n 5 for exit  \n");
    scanf("%d",&z);

    if (z==1){
        add=x+y;
        printf("equal =%f",add);
    }
    else if (z==2){
        sub=x-y;
         printf("equal =%f",sub);
    }
    else if (z==3){
        divid=(float)x/y;
         printf("equal =%f",divid);
    }
    else if (z==4){
        multi=x*y;
         printf("equal =%f",multi);
    }
    else if (z==5){
        break;
    }
    else {
        printf("wrong choice");
    }
    }
}
