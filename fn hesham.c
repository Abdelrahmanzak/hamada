#include<stdio.h>
#include <string.h>
int main(){
    char *ptr;
    int i,x,j;
    //printf("please no of student");
    //scanf("%d",&i);

    char name[5][10]; //="hamada";
   for(i=0;i<5;i++){
    for(j=0;j<10;j++){
        printf("please enter the name");
        scanf("%s",&name[i][j]);
        //gets(name);

    }
   }

   for(i=0;i<5;i++){
    for(j=0;j<10;j++){
        //printf("%s",name[i][j]);
       puts(name);
        //gets(name);

    }
   }
   /* ptr=name;
    printf("%c",*ptr);
    (*ptr)++;
    printf("%c",*ptr);
    printf("%s\n%d",name ,strlen(name));
    gets(name);
    puts(name);*/
}
