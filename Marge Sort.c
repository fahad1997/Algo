#include<stdio.h>
#include<stdlib.h>

int a[5]={5,2,7,3,1},b[5];


int main()
{
   int i;
   sorting(0,4);
   for(i=0;i<5;i++)
   {
       printf("%d\t",a[i]);
   }
   return 0;
}

void sorting(low,high)
{
  int mid;
  if(low<high)
  {
      mid=(low+high)/2;
      sorting(low,mid);
      sorting(mid+1,high);
      process(low,mid,high);
  }
}


void process(low,mid,high)
{
    int h=low;
    int x=0;
    int j=mid+1;
    int i=low;
    while((h<=mid) && (j<=high))
    {
        if(a[h]<=a[j])
        {
            b[i]=a[h];
            h++;
            i++;
        }
        else
        {
            b[i]=a[j];
            j++;
            i++;
        }
    }
    if(h<=mid)
    {
        for(x=h;x<=mid;x++)
        {
            b[i]=a[x];
            i++;
        }
    }
    else
    {
        for(x=j;x<=high;x++)
        {
            b[i]=a[x];
        }
    }
    for(i=low;i<=high;i++)
    {
        a[i]=b[i];
    }
}
