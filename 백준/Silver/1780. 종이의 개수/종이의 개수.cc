#include<iostream>
#define MAX 2187
using namespace std;

int paper[MAX][MAX];
int N, numA = 0, numB = 0, numC = 0;
void solve(int x, int y, int n){
    for(int i = y; i < y + n; i++)
        for(int j = x; j < x + n; j++){
            if(paper[y][x] != paper[i][j]){
                int newN = n / 3;
                for(int k = 0; k < n; k += newN){
                    for(int h = 0; h < n; h += newN)
                        solve(x + h,y + k, newN);
                }
                return;
            }
        }
    if(paper[y][x] == 1) numC++;
    else if(paper[y][x] == 0) numB++;
    else numA++;
}

int main(){ 
    cin >> N;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> paper[i][j];
    solve(0,0,N);
    cout << numA << "\n" << numB << '\n' << numC;
    return 0;
}