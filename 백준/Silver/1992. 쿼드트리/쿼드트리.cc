#include<iostream>
#define MAX 64
using namespace std;
string board[MAX];

void solve(int x, int y, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[y][x] != board[y + i][x + j]){
                cout << '(';
                solve(x,y,n/2), solve(x + n/2, y, n/2), solve(x,y+n/2,n/2), solve(x+n/2,y+n/2,n/2);
                cout << ')';
                return;
            }
        }
    }
    cout << board[y][x];
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int N;
    cin >> N;
    for(int i = 0; i < N;i++)
        cin >> board[i];
    solve(0,0,N);
    return 0;
}