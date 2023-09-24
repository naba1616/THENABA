#include<stdio.h>
int main()
{int n;
printf("enter no of days the member is late");
scanf("%d",n);
if (n==0)
printf("no fine");
else if (n<=5)
printf("your fine is 0.50 rupees ");
else if (n>=6 && n<=10)
printf("your fine is 1 rupees");
else if (n>10 && n<=30)
printf ("your fine is 5 rupees");
else if (n>30)
printf ("your membership is cancelled");
return 0;
}
