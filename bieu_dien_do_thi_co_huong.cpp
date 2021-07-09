#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<int>> &adj,int u,int v) {
    adj[u - 1].push_back(v - 1);
    
}

void printGraph(vector<vector<int>> &adj) { 
	int k=1;
    for (auto i : adj) {
		cout<<k++<<": ";
        for (auto j : i)	cout << j + 1 << ' ';
       cout << '\n';
    }
}

int main()  { 
    int t;
	cin>>t;
	while(t--){
		int V,E,a,b;
   	cin >> V >> E;
   	vector<vector<int>> adj(V);
    for(int i = 1; i <= E; ++i){
    	cin >> a >> b;
    	addEdge(adj, a, b);
	}
    printGraph(adj);
	}
    return 0;
}