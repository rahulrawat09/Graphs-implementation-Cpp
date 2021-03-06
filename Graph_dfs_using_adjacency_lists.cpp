#include <bits/stdc++.h>

using namespace std;

void DFS(int x,vector<int> v[],bool visited[])
{
    cout<<x<<" ";
    visited[x]=1;
    for(int i=0;i<v[x].size();i++)
        if(!visited[v[x][i]])
            DFS(v[x][i],v,visited);

}

void addEdge(vector<int> g[],int a,int b)
{
    g[a].push_back(b);
    g[b].push_back(a);
}

int main()
{
    cout<<"Enter no. of nodes and edges:\n";
    int n,e;
    cin>>n>>e;

    vector<int> g[n+1];  // adjacency list

    bool visited[n+1]={};  // visited array

    cout<<"\nEnter connections:\n";
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        addEdge(g,x,y);
    }
    int root;
    cout<<"\nEnter root node :";  // root node/starting node
    cin>>root;

    cout<<"\nDFS for the graph with root node "<<root<<" is : ";
    DFS(root,g,visited);

    return 0;
}
