
#include<iostream>
using namespace std;
 
void toggleChars(char arr[])
{
    for (int i=0; arr[i]!='\0'; i++)
    {
        if (arr[i]>='A' && arr[i]<='Z')
        {
            arr[i] = arr[i] + 'a' - 'A';
        }
        else if(arr[i]>='a' && arr[i]<='z')
        {
            arr[i] = arr[i] + 'A' - 'a';
        }
    }
}
 
int main()
{
    char arr[100];
    cin.getline(arr,100);
    toggleChars(arr);
    cout << arr << endl;
    return 0;
}