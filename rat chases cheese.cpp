/*
Sample Input
5 4
OXOO
OOOX
XOXO
XOOX
XXOO
Sample Output
1 0 0 0
1 1 0 0
0 1 0 0
0 1 1 0
0 0 1 1
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int  m,n;
    cin>>m>>n;
    getline(cin,a);
    int arr[m][n]={0};
    int k=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[k]=='0')
            arr[i][j]=
        }
    }


    return 0;
}
