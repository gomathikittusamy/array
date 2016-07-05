#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,j,n=0,c=0,d=0,e,f;
clrscr();
printf("Enter the array of numbers:");
scanf("%d",&n);
printf("Enter the element one by one");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n/2;j++)
{
c=c+a[i];
n++;
}
for(i=n/2;i<n;i++)
{
d=d+a[i];
}
e=c/n;
f=d/n;
if(e==f)
{
printf("Possible");
}
else
printf("Not possible");
getch();
}
