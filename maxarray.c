#include<stdio.h>
void main()
{
int a[5],i,max;
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<5;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("\n the maximum element in the array is %d",max);
}
