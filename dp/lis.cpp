// O(n^2) .. could be better than by binary search in O(nlogn) :) 

int lis (vector < int > &v) {
  int ans = 1;
    int n = v.size();
    vector < int > d(n, 1);
    for(int i = 1; i < n; ++i) {
        for(int j = 0; j < i; ++j) {
            if(v[j] < v[i] &&  d[i] < d[j]+1) {
              d[i] = d[j]+1;
            }
        }

    }

    for ( int i = 0; i < n; i++ )
      if ( ans < d[i] )
      ans = d[i];
    return ans;
}
