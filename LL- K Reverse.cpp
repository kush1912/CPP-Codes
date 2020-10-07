/// K reverse element
/*
Sample Input
9 3
9 4 1 7 8 3 2 6 5
Sample Output
1 4 9 3 8 7 5 6 2
*/

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
    int n,k,data;
    cin>>n>>k;
    int c = n/k;
    list<int> l;
    list<int> g;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        l.push_back(data);
    }
    int r = k;
    for(int i=0;i<c;i++)
    {
        while(k)
        {
            data = l.front();
            g.push_back(data);
            l.pop_front();
            k--;
        }
        while(!g.empty())
        {
            data = g.back();
            l.push_back(data);
            g.pop_back();
        }
        k = r;
    }

    showlist(l);
    return 0;
}
