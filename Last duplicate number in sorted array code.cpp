#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool flag=true;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==a[i-1])
        {
            cout<<"index and number that is repeated : "<<i<<" "<<a[i]<<endl;
            flag=false;
            break;
        }
    }
    if(flag==true)
    {
        cout<<-1<<endl;
    }
return 0;
}
