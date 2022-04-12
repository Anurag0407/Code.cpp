#include <iostream>
using namespace std;
void formmatrixXandO(char arr[100][100],int r,int c)
{
    int sr=0;
    int sc=0;
    int ec=c-1;
    int er=r-1;
    char ch='X';
    while(sr<=er && sc<=ec)
    {
        
        for(int i=sc;i<=ec;i++)
        {
            arr[sr][i]=ch;
        }
        sr++;
        for(int j=sr;j<=er;j++)
        {
           arr[j][ec]=ch;
        }
        ec--;
        for(int k=ec;k>=sc;k--)
        {
           arr[er][k]=ch;
        }
        er--;
        for(int l=er;l>=sr;l--)
        {
           arr[l][sc]=ch;
        }
        sc++;
    
    if(ch=='X'){
        ch='O';
    }
    else
    {
        ch='X';
    }
    }
}


int main() {
    
    int r,c;
    cin>>r>>c;
    char arr[100][100];
    formmatrixXandO(arr,r,c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}