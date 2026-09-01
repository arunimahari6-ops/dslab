#include<stdio.h>
int main()
{
int a[10],n,k,i;
printf("enter number of elements of elements:");
scanf("%d",&n);
printf("enter elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter element to search:");
scanf("%d",&k);
for(i=0;i<n; i++)
{
if(a[i]==k)
{
printf("element found at position %d (index %d)",i+1,i);
return 0;
}
}
printf("element not found ");
return 0;
}



