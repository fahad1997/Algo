#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,j,x,temp,a[10];
printf("How many element you want:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
    printf("\nPass:%d\t",i);
    temp=a[i];
    j=i;
    while((j>0) && (temp<a[j-1]))
    {
        a[j]=a[j-1];
        j--;
    }
    a[j]=temp;
    for(x=0;x<n;x++)
    {
      printf("%d\t",a[x]);
    }
}
printf("\n\nThe numbers are:");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
return 0;
}
