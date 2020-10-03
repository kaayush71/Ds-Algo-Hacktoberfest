
#include<stdio.h>
int main()
{
    int i,j,a,b,x;
    printf("Enter the numbers : ");
    scanf("%d %d",&a,&b);
    printf("Prime numbers between %d and %d are ",a,b);
    for(j=a;j<=b;j++)
    {
        x=0;
        for(i=2;i<j;i++)
    {
        if(j%i==0){
            x=1;
            break;
            }
    }
    if(x==0)
    printf("%d ",j);
    }
    return 0;
    }
