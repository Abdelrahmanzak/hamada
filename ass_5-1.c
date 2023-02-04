#include <stdio.h>
int main ()
{
    int arr_1[5];
    int max;
    int min;
    int pos;
    int pos2;
    int swap;
    printf("please enter value of no ");
    for(int i=0;i<5;i++)
        {
           scanf("%d",&arr_1[i]);
        }
    for(int i=0;i<5;i++)
        {
           printf(" %d",arr_1[i]);
        }
        printf("\n");
        max=arr_1[0];
        min=arr_1[0];
        for(int i=0;i<5;i++)
        {
            if(max<arr_1[i+1])
            {
                max= arr_1[i+1];
                pos= i+2;
            }
            if(min>arr_1[i+1])
            {
                min= arr_1[i+1];
                pos2= i+2;
            }

        }
          for(int i=0;i<5;i++){

             for(int j=i;j<4;j++){
                if(arr_1[i]>arr_1[j+1]){
                    swap= arr_1[i];
                    arr_1[i]=arr_1[j+1];
                    arr_1[j+1]=swap;
                }


             }


          }


       // printf("\nmax=%d and the position is %d \n",max,pos);
       // printf("\nmax=%d and the position is %d",min,pos2);
        for(int i=0;i<5;i++)
        {
           printf(" %d",arr_1[i]);
        }
}
