vector<int > g[n];
 bool visited[n];

void bfs(int x)
{
queue<int> q;
q.push(x);
    visited[x] = true;

  while (!q.empty()) {
	int v = q.front();
	//cout<<v<<" ";
	q.pop();
	for (int i=0; i<g[v].size(); ++i) {
		int to = g[v][i];
		if (!visited[to]) {
			visited[to] = true;
			q.push (to);
          }
       }
     }
   }
