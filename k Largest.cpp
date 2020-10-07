///Largest K elements in Running Stream using min heap

#include<bits/stdc++.h>
#include<queue>
#include<vector>
using namespace std;

int main()
{
    /// min heap
    priority_queue<int,vector<int>,greater<int> > pq;


    int k;
    cin>>k;
    int d;
    for(int i=0;i<k;i++)
    {
        cin>>d;
        pq.push(d);
    }
    while(d!=-1)
    {
        cin>>d;
        if(d>pq.top())
        {
            pq.pop();
            pq.push(d);
        }
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    return 0;
}
