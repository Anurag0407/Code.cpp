#include <iostream>
using namespace std;
void spiralPrint(int a[100][100], int r, int c)
{ 
    int sr=0;
    int sc=0;
    int er=r-1;
    int ec=c-1;
 
    while (sr <= er && sc <= ec) {
        // Print the first row from
         
        for (int i = sc; i<=ec; ++i) {
            cout << a[sr][i] << ","<<" ";
        }
        sr++;
 
        // Print the last column
         
        for (int j = sr; j <=er; ++j) {
            cout << a[j][ec] << ","<<" ";
        }
        ec--;
 
        // Print the last row from
                
        if (sr <= er) {
            for (int k = ec; k >= sc; --k) {
                cout << a[er][k] << ","<<" ";
            }
            er--;
        }
 
        // Print the first column from
                  
        if (sc <= ec) {
            for (int l = er; l >= sr; --l) {
                cout << a[l][sc] << ","<<" ";
            }
            sc++;
        }
    }
    cout<<"END";
}
 
int main()
{
    int r,c;
    cin>>r>>c;
  int arr[100][100];
  for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
      {
          cin>>arr[i][j];
      }
  } 
   spiralPrint(arr , r ,c);

return 0;
}
 