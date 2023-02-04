#include <stdio.h>
#include <stdlib.h>

struct data {
char name [50];
int age;

};


int main (){
    int a[5];
    int i,n;
    printf("please enter no.of elements");
    scanf("%d",&n);
    struct data var[n];
    //struct data age;

for(int x=1;x<=n;x++){
  printf("enter name %d\n",x);
  scanf(" %s",&var[x].name);
  printf("enter age %d\n",x);
  scanf("%d",&var[x].age);
}
for(int x=1;x<=n;x++){


}
}




