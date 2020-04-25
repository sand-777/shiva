#include<stdio.h>
#include <conio.h>
struct student{
    int id;
    char name[20];
    int marks;
};
void main (){
int n, i;
struct student no[10];
printf("Enter the no of students\n");
scanf("%d",&n);


for (i=1;i<=n;i++){

printf("Enter the id ,name,marks of students\n");
    scanf("%d",&no[i].id);
    scanf("%s",no[i].name);
    scanf("%d",&no[i].marks);

}
printf("The  data of students are\n");
printf("Id\t Name  \t Marks\n");
for (i=1;i<=n;i++){
printf("%d\t\t %s\t\t\t\t\t\t\t d\n",no[i].id,no[i].name,no[i].marks);
}

}

