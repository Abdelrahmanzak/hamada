#include <stdio.h>
int main (){
int x;
int y;
printf("enter any number:");
scanf(" %d",&x);
printf("enter nth bit to toggle (0-31):");
scanf(" %d",&y);
printf("bit toggled successfully.\n");
printf("number before toggling:%d\n ",x);
x=x^(1<<y);
printf("number after toggling:%d\n ",x);
}
