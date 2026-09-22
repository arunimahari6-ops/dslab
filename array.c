#include<stdio.h>
int main()
{
int a[10],b[10],c[20];
int n,m,i;
printf("enter the first size array");
scanf("%d",&n);
printf("enter  elements of a:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the second size array");
scanf("%d",&m);
printf("enter elements of b:");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
c[i]=a[i];
for(i=0;i<m;i++)
c[n+i]=b[i];
printf("merged array:");
for(i=0;i<n+m;i++)
printf("%d ",c[i]);
return 0;
}


