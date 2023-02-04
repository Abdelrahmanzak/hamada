#include <stdio.h>
int main(){
int n,z;
int *ptr;
printf("enter number ");
scanf("%d",&n);
ptr=&n;

//if((n==0)||(n==1)){
//printf("prime no =1");
z=prime(&n);
if (z==1){
    printf("prime");

}
else if (z==0){
    printf("not prime");
}

}



int prime (int *ptr){
int n,i;
int p=0;
ptr=&n;
for(i=2;i<=*ptr ;i++){
    if(*ptr%i==0){
   p=1;
    break;
    }
}
if(p==0){
        return 1;
    //printf("prime number");
}
else
    return 0;
}

