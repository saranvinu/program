#include<stdio.h>
int main()
{
int arr[50];
int n,i,j,f=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]==arr[j])
f=1;
}
if(f==1)
{
printf("%d",arr[i]);
f=0;
}
}
return 0;
}
