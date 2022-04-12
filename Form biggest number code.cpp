#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(int i=0;i<n;i++) 
    {
      for(int j=i+1;j<n;j++)
      {
        
    // for decreasing order print 
        if(a[j]+a[i]<a[i]+a[j]) 
        {
        swap(a[i],a[j]);
        }

     // in increasing order print 

        // if(a[j]+a[i]<a[i]+a[j]) 
        // {
        // //   string b=a[j]; 
        // //   a[j]=a[i];  
        // //   a[i]=b; 

        // direct swapping 
        // swap(a[i],a[j]);
        // }
      }
    }
    for(int i=n-1;i>=0;i--)
    {
    cout<<a[i];   
    }
    cout<<endl;
    t--;
  }
  return 0;
}
