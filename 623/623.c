#include<stdio.h>
int main()
{
	int a[3000];
	int n,temp,m,i,k,j,x;
	while(scanf("%d",&n)==1)
	{
		m=1;
		temp=0;
		a[0]=1;
		for(i=1;i<=n;i++)
		{
			for(j=0;j<m;j++)
			{
				x=a[j]*i+temp;
				a[j]=x%10;
				temp=x/10;
				
			}
			while(temp>0)
			{
				a[m]=temp%10;
				temp=temp/10;	
				m++;	
			}	
			
		}
		
		printf("%d!\n",n);
		for(k=m-1;k>=0;k--)
		printf("%d",a[k]);
		printf("\n");
		
		
	}
	
	return 0;
}
