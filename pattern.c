#include <stdio.h>
#include <conio.h>
main(){
int i,j,k,n,s;
char sym;
printf("Enter the symbol to make diamond structure\n");
scanf("%c",&sym);
printf("Enter the number of rows to make diamond structure\n");
scanf("%d",&n);
if (n%2==0){
    n++;
}
printf("The number is changed to %d\n",n );
s=(n/2)+1;
for (i=1;i<=(n/2)+1;i++)
{
    for(j=1;j<=s;j++)
    {
        printf(" ");

    }
    s--;

    for (k=1;k<=(2*i)-1;k++){
            printf("%c",sym);
    }
        printf("\n");
}
s=(n/2);

    for (i=(n/2);i>=1;i--)
{
    for(j=1;j<=s;j++)
    {
        printf(" ");

    }
    s++;

    for (k=1;k<=(2*i)-1;k++){
            printf("%c",sym);
    }
        printf("\n");
}
getch();

}
