#include<iostream>

int main()
{
	int n,x,k;
	std::cin>>n;
	for(int i=1;i<=100;i++)
	{
		for(int j=200;j>=1;j--)
	
		{
			if(i*7+j*21==n/52)
            
			{
				x=i;
				k=j;
			
			}
		}
	}
	std::cout<<x<<std::endl;
	std::cout<<k<<std::endl;
	return 0;
}