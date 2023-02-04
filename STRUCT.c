#include <stdio.h>
struct stu_id{
int id;
char name[10];
int age;
float grade;

};
typedef struct student{
char name[10];
int age;
int phone;
float grade;


}s;



int main (){
/*struct stu_id a={123,"ali",25,43.6};
strcpy(a.name,"jij");
printf("id=%d\n",a.id);
printf("id=%s",a.name);*/
s ahmed={"ahmed",25,1007009831,2.34};
printf("student_1= %s\n%d\n%d\n%f\n",ahmed.name,ahmed.age,ahmed.phone,ahmed.grade);
scanf("%s",&ahmed.name);
printf("student_1= %s\n%d\n%d\n%f",ahmed.name,ahmed.age,ahmed.phone,ahmed.grade);

}
