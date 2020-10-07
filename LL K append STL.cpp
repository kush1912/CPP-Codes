///Linked List-K Append

#include<bits/stdc++.h>
#include<list>
using namespace std;

void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout <<*it<<" ";
    cout << '\n';
}

int main()
{
    list<int> l;
    int n,data;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        l.push_back(data);
    }
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        data = l.back();
        l.pop_back();
        l.push_front(data);
    }
    showlist(l);
    return 0;
}
