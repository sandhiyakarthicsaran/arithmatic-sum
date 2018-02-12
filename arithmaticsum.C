#include<stdio.h>
#include<conio.h>
void main()
{
int a,d,n,i,tn;
int sum=0;
printf("Enter the first term of the A.P series:\n");
scanf("%d",&a);
printf("Enter the total no in that sequence:\n");
scanf("%d",&n);
printf("Enter the difference of the two terms:\n");
scanf("%d",&d);
sum=(n*(2*a+(n-1)*d))/2;
tn=a+(n-1)*d;
printf("Sum of the A.P series:\n");
for(i=a;i<=tn;i=i+d)
{
if(i!=tn)
printf("%d+",i);
else
printf("%d=%d",i,sum);
}
getch();
}
