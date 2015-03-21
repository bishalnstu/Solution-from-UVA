#include<bits/stdc++.h>
int main()
{
	
	
	long long ans,n;
	while(scanf("%lld",&n)!=EOF)
	{
		if(n==0)
		return 0;
		ans=0;
	ans=(n*(n+1)*(2*n+1))/6;
		
		printf("%lld\n",ans);
		
	}
	

}
