#include <stdio.h>
#define max(a,b) (a>b)?(a):(b)
int main ()
{

    int max;
    int y;
    int min;
    int pos;
    int pos2;
    int swap;
    printf("please enter value of no ");
    int arr_1[5]={3,5,4,1,2};
   /* for(int i=0;i<5;i++)
        {
           scanf("%d",&arr_1[i]);
        }*/
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
       // printf("please enter search\n");
      //  scanf("%d",&y);

      /*  for(int i=0;i<5;i++)
        {
           if(y==arr_1[i]){
            printf("index of y =%d ",(i+1));
           }

        }*/
        int l=5;
        int r=0;
        int x;
        printf("please enter search\n");
        scanf("%d",&x);
        while(1<=r){

            int m=l+r/2;            if(arr_1[m]==x)
            printf("m =%d ",m);
            if (arr_1[m]<x){
                l=m+1;
                printf("m =%d ",m);
            }
            else{
                r=m-1;
                printf("m =%d ",m);
            }
        }
}
