#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, m, c=0;
    cin>>n>>m;
    while(n<m)
    {
        if(m&1)
            m++;
        else
            m>>=1;
        c++;
    }
    cout<< c+(n-m) <<endl;
}
/*
vector<int>graph[200005];
vector<bool>visited(200005);
vector<int>distances(200005);

void BFS(int source, int destination)
{
    queue<int>Q;
    visited[source] = true;
    Q.push(source);
    distances[source] = 0;

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(auto v : graph[u])
        {
            if(visited[v]==false)
            {
                visited[v] = true;
                distances[v] = distances[u] + 1;
                Q.push(v);
            }
            if(v == destination)
                return;
        }
    }
}

int main()
{
    int n, m, i;
    cin>>n>>m;
    for(i=20000; i>1; i--)
        graph[i].push_back(i-1);
    for(i=1; i<=20000; i++)
        graph[i].push_back(2*i);
    BFS(n,m);
    cout<<distances[m]<<endl;
    return 0;
}
*/