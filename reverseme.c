#include<stdio.h>
#include<string.h>
int main()
{
  char str[]="REverseMe",t;
  int i,j,n;
  printf("\nEnter the string :");
 
   i = 0;
   j = strlen(str) - 1;
   n=strlen(str);
 
   while (i < j) 
   {
      t = str[i];
      str[i] = str[j];
      str[j] = t;
      i++;
      j--;
   }
  for(i=0;i<n;i++)
  {
    if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
    {
      printf("%c",str[i]);
    }
  }
  return 0;
}
