#include<stdio.h>
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Factorial=%d",factorial(n));
}
int factorial(int n)
{
int i,f=1;
for(i=1;i<=n;i++){
	f=f*i;
}
  return f;
}
