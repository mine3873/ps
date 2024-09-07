#include<iostream>
#define MAX 20
using namespace std;

int R,C, _max = 0;
int x[] = {0,0,1,-1}, y[] = {1,-1,0,0};
char board[MAX][MAX];
bool alpha[26] = {0,};

void Dfs(int curX, int curY, int curNum){
    _max = (_max < curNum ? curNum : _max);
    for(int i = 0; i < 4; i++){
        int nx = curX + x[i], ny = curY + y[i];
        if(nx >= 0 && nx < C && ny >= 0 && ny < R){
            if(!alpha[(int)(board[ny][nx] - 'A')]){
                alpha[(int)(board[ny][nx] - 'A')] = 1;
                Dfs(nx, ny, curNum + 1);
                alpha[(int)(board[ny][nx] - 'A')] = 0;
            }
        }
    }
}

int main(){
    cin >> R >> C;
    for(int i = 0; i < R; i++)
        for(int j = 0; j < C; j++)
            cin >> board[i][j];
    alpha[(int)(board[0][0] - 'A')] = 1;
    Dfs(0,0,1);
    cout << _max;
    return 0;
}