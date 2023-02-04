#include <Stdio.h>
/*int main (){

char x[50];//={'a','h','m','e','d','\0'};
gets(x);
//scanf("%s",x);
puts(x);
//printf("%s",x);
}*/
int count3 ()



int main (){
int i,j;
char count;
char count1;
char arr1[6]={"ahmed"};
char arr2[7]={"hassan"};
char arr3[13];

for(i=0;arr1[i]!='\0';i++){

    count++;
}
printf("%d\n",count);
count=0;
for(i=0;arr2[i]!='\0';i++){

    count1++;
}
printf("%d\n",count1);
if(count1>count){
    printf("arr2>arr1");
}
else {
    printf("arr2<arr1");
}

/*char arr3[13];
for(i=0;arr1[i]!='\0';i++){
    arr3[i]=arr1[i];

}

arr3[i]=' ';
i++;
for(j=0;arr2[j]!='\0';j++){
    arr3[i+j]=arr2[j];
}

puts(arr3);*/
}
