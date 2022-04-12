#include <iostream>
using namespace std;
string a[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void convertnumbers(int n)
{
    if(n==0)
    {
        return;
    }
    // in correct order to print 
    
    convertnumbers(n/10);
    int dig=n%10;
    cout<<a[dig]<<" ";

    // in reverse order print 

    // int dig=n%10;
    // cout<<a[dig]<<" ";
    // convertnumbers(n/10);

}
int main() {
    int n;
    cin>>n;
    convertnumbers(n);
return 0;
}
