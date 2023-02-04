#include <stdio.h>
int main (){
int x;
int ones=0,zero=0;
printf("please enter the number ");
scanf("%d",&x);
for (int i=0;i<8;i++){
    if(x&1)
        ones++;
    else
        zero++;
    x=x>>1;
}
printf("no of zeros=%d\n",zero);
printf("no of ones=%d",ones);
}
//n=n&(n<<1);
