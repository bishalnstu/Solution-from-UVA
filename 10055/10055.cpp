#include<stdio.h>
#include<math.h>
int main()
{
	
	long long a,b;
	while(scanf("%lld %lld",&a,&b)==2)
	{
		if(b>a)
		printf("%lld\n",b-a);
		else
		printf("%lld\n",a-b);
	}
	
	return 0;
	
	
}
