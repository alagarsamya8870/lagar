#include<stdio.h>
int main()
{
double n1,n2,n3;
printf("enter the number");
scanf("%1f %1f %1f,&n1,&n2,&n3);
if("n1>=n2 && n1>=n3)
{
printf("%.2f is largest",n1);
}
if("n2>=n1 && n2>=n3)
{
printf("%.2f is largest",n2);
}
if("n3>=n1 && n3>=n1)
{
printf("%.2f is largest",n3);
}
return 0;
}
