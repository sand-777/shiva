#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int n,i,*ptr,*p,sum;
    printf("Enter the no of elements to enter ");
    scanf("%d",&n);
    ptr= (int*) malloc(n*sizeof(int));
    p = ptr;
    printf("Enter the elements of array ");
    for (i=1;i<=n;i++){
    scanf("%d",ptr);
    sum = sum + *ptr;

    ptr++;
    }
    printf("The elements are");
    for(i=1;i<=n;i++){
    printf("%d\n",*p);

    p++;
    }
    printf("The sum of elements is %d",sum);
getch();
}
