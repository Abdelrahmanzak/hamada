#include <stdio.h>
int main (){
char *ptr;
int x=0x11223344;
ptr=(char*)&x;
printf("adress of x=%d\n",ptr);
printf("value of x=%x\n",*ptr);//x=25
printf("adress of ptr=%d\n",&ptr);
++*ptr;
printf("adress of x=%d\n",ptr);
printf("value of x=%x\n",*ptr);//x=26
printf("adress of ptr=%d\n",&ptr);
*ptr++;
printf("adress of x=%d\n",ptr);
printf("value of x=%x\n",*ptr);//x=26
printf("adress of ptr=%d\n",&ptr);
*++ptr;
printf("adress of x=%d\n",ptr);
printf("value of x=%x\n",*ptr);//x=26
printf("adress of ptr=%d\n",&ptr);
}
