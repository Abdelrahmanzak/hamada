#include <stdio.h>
int main(){

int x[3];
for(int i=0;i<3;i++){
printf("enter the value of x\n");
scanf("%d",&x[i]);
}
for(int i=0;i<3;i++){
printf("before calling edit x =%d\n",x[i]);
}
edit (x);
for(int i=0;i<3;i++){
printf("before calling edit x =%d\n",x[i]);
}
}
void edit (int x[3]){
for(int i=0;i<3;i++){
x[i]++;
}
}
