#include<stdio.h>
void main()
{
    int n,temp,i,j,sum=0,f=1;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        i=temp%10;//5
        for(j=1;j<=i;j++)
        {
            f=f*j;

        }
        sum=sum+f;
        temp=temp/10;

    }
    if(sum==n)
    printf("strong number");
    else
    printf("not strong");
    


}