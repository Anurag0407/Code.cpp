#include<iostream>
using namespace std;
bool ispalindrome(int *a,int n, int i, int j)
{
	// base case
	if(i>=j)
	{
		return true;
	}
	// recursive case
	if(a[i]==a[j] && ispalindrome(a,n,i+1,j-1))
	{
		return true;
	}
return false;
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(ispalindrome(a,n,0,n-1))
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
	return 0;
}