#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define MAX 20001
#define INF 210000000
int V,E,K;
vector<pair<int,int>> graph[MAX];
priority_queue<pair<int, int>> pq;
int _min[MAX];
int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> V >> E >> K;
    while(E--){
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v,w});
    }
    for(int i = 1; i <= V; i++) _min[i] = INF;
    pq.push({0, K}), _min[K] = 0;
    while(!pq.empty()){
        int cur = pq.top().second;
        int distance = -pq.top().first;
        pq.pop();
        for(int i = 0; i < graph[cur].size(); i++){
            int next = graph[cur][i].first;
            int nextDistance = graph[cur][i].second;
            if(_min[next] > distance + nextDistance)
                _min[next] = distance + nextDistance, pq.push({-_min[next], next});
        }
    }
    for(int i = 1; i <= V; i++){
        if(_min[i] == INF) cout << "INF" << '\n';
        else cout << _min[i] << '\n';
    }
}