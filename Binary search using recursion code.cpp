#include <iostream>
using namespace std;
bool binarysearch(int *a, int s, int e, int key)
{
    // base case
      if(s>e)
      {
        return false;
      }


    // recursive case

       int mid=(s+e)/2;
        if(a[mid]==key)
        {
            return true;
        }
        else if(a[mid]>key)
        {
        return binarysearch(a,s,mid-1,key);
        }  
        else
        {
            return binarysearch(a,mid+1,e,key);
        }
return false;
}
int main() {
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    if(binarysearch(a,0,n-1,key))
    {
        cout<<"Key is present"<<endl;
    }
    else
    {
        cout<<"key is not present"<<endl;
    }
return 0;
}
