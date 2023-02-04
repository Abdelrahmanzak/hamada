#include <stdio.h>
int main ()
{
int group[5];
int sum=0 ,avg=0;
int even=0,odd=0;

for (int i=0;i<5;i++){
    printf("enter no %d\n",i);
    scanf("%d",group+i);
    sum=sum+group[i];
    if((group[i]%2)==0){
        even++;
        printf("even no\n");
    }
    else{
        odd++;
        printf("odd no\n");
    }
}
for (int i=0;i<5;i++){
    printf(" element no %d =%d\n",i,*group+i);
}
for (int i=0;i<5;i++){
    if((group[i]%2)==0)
    printf(" even no %d\n",group[i]);
    else
    printf(" odd no %d\n",group[i]);
}
 printf("%d\n",sum);
 avg=sum/5;
 printf("%d\n",avg);
 printf("no of even numbers=%d\n",even);
 printf("no of odd numbers=%d\n",odd);
}
