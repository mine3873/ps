#include<iostream>
#define MAX 128
using namespace std;

int N, numB = 0,numW = 0;

bool paper[MAX][MAX];

void solve(int x, int y, int n){
    for(int i = y; i < y + n; i++)
        for(int j = x; j < x + n; j++){
            if(paper[y][x] != paper[i][j]){
                solve(x,y,n/2);
                solve(x + n/2, y, n/2);
                solve(x,y+n/2,n/2);
                solve(x+n/2,y+n/2,n/2);
                return;
            }
        }
    if(paper[y][x])
        numB++;
    else numW++;
}

int main(){
    cin >> N;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> paper[i][j];
    solve(0,0,N);
    cout << numW << '\n' << numB;
    return 0;
}