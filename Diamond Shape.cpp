#include <iostream>
using namespace std;

int main(){
	
	int n=5;

	for(int i=1; i<=5; i++){
		for(int j=1; j<=n; j++)
		{
			cout<<" ";
		}
	    n--;
	
	for(int k=1; k<=i; k++)
	{
		cout<<"* ";
	}
	cout<<endl;
	}
	
	int m=1;
	for(int i=1; i<=5; i++)
	{
		cout<<" ";
		for(int j=1; j<=m;j++)
		{
			cout<<" ";
		}
		m++;
		for(int k=4;k>=i;k--)
		{
			cout<<"* ";
		}
		cout<<endl;	
	}
    
	
	
	
	return 0;
}


