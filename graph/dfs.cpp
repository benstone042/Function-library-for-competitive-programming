vector<int > g[n];
 bool visited[n];

void dfs(int x)
{
//cout<<x<<" ";
    visited[x] = true;
    for(int i=0; i < g[x].size(); i++)
        if(!visited[g[x][i]])
            dfs(g[x][i]);
}
