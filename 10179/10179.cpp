#include<bits/stdc++.h>
using namespace std;
int phi (int n)
 {
  int ret = n;
  for (int i = 2; i * i <= n; i++) 
  {
    if (n % i == 0)
	 {
      while (n % i == 0) 
	  {
        n /= i;
        
      }
      ret -= ret / i; 
      
    }
  }
  
  if (n > 1) ret -= ret / n;
  return ret;
}

int main()
{
	int n,ans;
	while(scanf("%d",&n)==1)
	{
		if(n==0)
		return 0;
		ans=phi(n);
	printf("%d\n",ans);
	}
	
	
	return 0;
}
