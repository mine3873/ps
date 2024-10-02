#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 21
#define INF 210000000
using namespace std;
int N;
int cost[MAX][MAX];

int bitNum(int i){
    int count = 0;
    while(i){
        count += (i & 1);
        i >>= 1;
    }
    return count;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin >> N;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> cost[i][j];
    vector<int> dp(1<<N,INF);
    int dpLength = dp.size();
    dp[0] = 0;
    for(int i = 0; i < dpLength; i++){
        int x = bitNum(i);
        for(int j = 0; j < N; j++){
            if(!(i & (1<<j)))
                dp[i | (1<<j)] = min(dp[i | (1<<j)], dp[i] + cost[x][j]);
        }
    }
    cout << dp[dpLength - 1];
    
}