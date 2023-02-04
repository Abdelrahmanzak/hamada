#include <stdio.h>
int main (){
int x;
int swap;
printf("please enter size of array");
scanf("%d",&x);
int arr[x];
for(int i=0;i<x;i++){
//printf("enter value of %d",i);
scanf("%d",&arr[i]);

}
for(int i=0;i<x;i++){
printf(" %d\t",arr[i]);

}
for(int i=0;i<((x+1)/2);i++){
             swap=arr[(x-1)-i];
             arr[(x-1)-i]=arr[i];
             arr[i]=swap;
                }



printf("\n");
for(int i=0;i<x;i++){
printf(" %d\t",arr[i]);

}
}
