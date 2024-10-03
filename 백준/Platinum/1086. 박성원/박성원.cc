#include<iostream>
#include<vector>
#define MAX 16
#define ll long long
using namespace std;

int N,K;
string arrNum[MAX];
ll dp[1<<MAX][100];
ll totCaseNum[MAX];
int powOf_10[51];
int lenOfNum[MAX];
int remainOfNum[MAX];


ll gcd(ll a, ll b){
    while(b){
        ll r = a % b;
        a = b; b = r;
    }
    return a;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> N;
    for(int i = 0; i < N; i++)
        cin >> arrNum[i];
    cin >> K;

    powOf_10[0] = 1;
    for(int i = 1; i < 51; i++)
        powOf_10[i] = (powOf_10[i-1]*10)% K;

    for(int i = 0; i < N; i++){
        int temp = 0;
        int len = arrNum[i].length();
        for(int j = 0; j < len; j++)
            temp += (int)(arrNum[i][j] - '0') * powOf_10[len - j - 1] % K;
        remainOfNum[i] = temp % K;
    }

    totCaseNum[1] = 1;
    for(int i = 2; i <= N; i++)
        totCaseNum[i] = totCaseNum[i-1] * i;

    dp[0][0] = 1;
    for(int i = 0; i < (1<<N); i++){
        for(int j = 0; j < K; j++){
            for(int m = 0; m < N; m++){
                if(!(i & (1 << m))){
                    int newNum = j * powOf_10[arrNum[m].length()];
                    newNum += remainOfNum[m];
                    newNum %= K;
                    dp[i | (1 << m)][newNum] += dp[i][j];
                }
            }
        }
    }
    ll gcdNum = gcd(dp[(1<<N) - 1][0], totCaseNum[N]);
    cout << dp[(1<<N) - 1][0] / gcdNum << '/' << totCaseNum[N] / gcdNum;
    return 0;
}