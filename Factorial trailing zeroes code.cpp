#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int t=n;
    int a=0,b=0;
    int i=2;
    int j=5;
    while(i<=n)
    {
        a +=n/i;
        i=i*2;
    }
    while(j<=t)
    {
        b +=t/j;
        j=j*5;
    }
    int ans=min(a,b);
    cout<<"Number of trailing zero in n = "<<ans<<endl;
return 0;
}
