#include<iostream>
using namespace std;
int N,r,c, num = 0;

void solve(int x, int y, int n){
    if(n == 1) return;
    int newSize = n / 2;
    if(r < y + newSize && c < x + newSize) solve(x,y,newSize);
    else if(r < y + newSize && c >= x + newSize){
        num += (newSize) * (newSize);
        solve(x + newSize, y, newSize);
    }
    else if(r >= y + newSize && c < x + newSize){
        num += (newSize) * (newSize) * 2;
        solve(x,y + newSize,newSize);
    }
    else if(r >= y + newSize && c >= x + newSize){
        num += (newSize) * (newSize) * 3;
        solve(x + newSize, y + newSize, newSize);
    }
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin >> N >> r >> c;
    int k = 1;
    for(int i = 0; i < N; i++)
        k *= 2;
    solve(0,0,k);
    cout << num;
    return 0;
}