#include <iostream>
using namespace std;
int main() {
    
     int m,n;
    cin>>m>>n;
    int arr[100][100];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for(int crn=0;crn<m;crn++)
    {
        if(crn%2==0)
        {
            for(int ccn=0;ccn<n;ccn++)
            {
                if(crn==m-1 && ccn==n-1)
                {
                cout<<arr[crn][ccn]<<","<<" "<<"END";
                }
                else{
                    cout<<arr[crn][ccn]<<","<<" ";
                }
            }
        }
        else
        {
            for(int ccn=n-1;ccn>=0;ccn--)
            {
				if(crn==m-1 && ccn==0)
				{
				cout<<arr[crn][ccn]<<","<<" "<<"END";	
				}
				else{
                cout<<arr[crn][ccn]<<","<<" ";
				}
            }
        }
    }
return 0;
}
