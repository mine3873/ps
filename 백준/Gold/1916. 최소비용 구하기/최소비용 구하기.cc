#include<iostream>
#include<vector>
#include<queue>
#define MAX 1001
#define INF 210000000
using namespace std;

int N, M, start, _end;
vector<pair<int, int>> buses[MAX];
priority_queue<pair<int, int>> pq;
int smallest[MAX];
int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> N >> M;
    while(M--){
        int cost;
        cin >> start >> _end >> cost;
        buses[start].push_back({_end, cost});
    }
    for(int i = 1; i <= N; i++)
        smallest[i] = INF;
    cin >> start >> _end;
    pq.push({0, start}), smallest[start] = 0;
    while(!pq.empty()){
        int cur = pq.top().second;
        int cost = -pq.top().first;
        pq.pop();
        if(cost > smallest[cur]) continue;
        for(int i = 0; i < buses[cur].size(); i++){
            int next = buses[cur][i].first;
            int nextCost = buses[cur][i].second;
            if(smallest[next] > nextCost + cost)
                smallest[next] = nextCost + cost, pq.push({-smallest[next], next});
        }
    }
    cout << smallest[_end];
    return 0;
}