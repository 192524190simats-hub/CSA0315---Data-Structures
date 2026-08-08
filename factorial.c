#include<stdio.h>
void main()
{
	int f=1,i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f=f*i;
	}
	printf("Factorial=%d",f);
}
