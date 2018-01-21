
#include<stdio.h>
#define MAX_SIZE 1000
void main()
{
    int n,sum,n1;
    printf("\tENTER ANY NUMBER");
    scanf("\t%d",&n);
    while(n>0)
    {
        n1=n%10;
        sum=sum+n1;
        n=n/10;
    }
    printf("THE SUM OF DIGIT IS:%d\t",sum);
}

