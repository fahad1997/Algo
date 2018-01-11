#include<stdio.h>
int main()
{
    int a[50],b[50],c[50],j=0,k=0,n,x,y,i;
    printf("How many number you want:");
    scanf("%d",&n);
    printf("Enter the numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
    }
    system("cls");
    printf("The numbers are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("The even numbers are\n");
    for(x=0;x<j;x++)
    {
        printf("%d\t",b[x]);
    }
    printf("The odd numbers are\n");
    for(y=0;y<k;y++)
    {
        printf("%d\t",c[y]);
    }
    return 0;
}
