#include<stdio.h>

int main()
{
	int a,b,test;
	
	scanf("%d",&test);
	
	
	while(test--)
	{
		
		scanf("%d %d",&a,&b);
		
		if(b%a==0)
		{
			printf("%d %d\n",a,b);
		}
		else
		printf("-1\n");
	}
	
	return 0;
}
