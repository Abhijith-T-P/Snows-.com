#include<stdio.h>
void main()
{
    int a,b,temp,i,flag;
    printf("Enter the range :");
    scanf("%d%d",&a,&b);
    temp=a;
    while (temp<=b)
    {
        flag=0;
        i=2;
        while (i<=temp/2)
        {
            if (temp%i==0)
            {
                flag++;
                break;
            }
                i++;
        }
        if (flag==0&&temp!=1)
        {
            printf("%d \t",temp);
        }
        temp++;
    }
} 