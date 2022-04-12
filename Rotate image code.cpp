#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int j=n-1;
    while(j>=0)
    {
    for(int i=0;i<n;i++)
    {
        cout<<a[i][j]<<" ";
    }
    j--;
    cout<<endl;
    }
return 0;
}
