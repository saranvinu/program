#include<stdio.h>
int main()
{
    int a[10],n=5,i=0,j=0,k=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    while(i<5)
    {
        k+=a[k];
        if(k==4)
        {
            j=1;
            break;
        }
        i++;
    }
    if(j==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
