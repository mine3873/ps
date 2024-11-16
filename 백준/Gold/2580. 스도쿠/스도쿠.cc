#include<iostream>
#include<vector>
#define MAX 9
using namespace std;

int table[MAX][MAX];
vector<pair<int,int>> blank;
int blankSize = 0;
bool found = false;

bool search(int x,int y, int num){
    for(int i = 0; i < MAX; i++)
        if(table[i][x] == num || table[y][i] == num) return 0;
    for(int i = (y/3)*3, k = 0; k < 3; i++,k++)
        for(int j = (x/3)*3, m = 0; m < 3; j++,m++){
            if(table[i][j] == num) return 0;
    }
    return 1;
}

void printTable(){
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++)
            cout << table[i][j] << ' ';
        cout << '\n';
    }
}

void bt(int n){
    if(n == blankSize){
        printTable();
        found = true;
        return;
    }
    int y = blank[n].first;
    int x = blank[n].second;
    for(int i = 1; i <= MAX; i++){
        if(search(x,y,i)){
            table[y][x] = i;
            bt(n+1);
            if(found) return;
        }
    }
    table[y][x] = 0;
    return;
}

int main(){
    for(int i = 0; i < MAX; i++)
        for(int j = 0; j < MAX; j++){
            cin >> table[i][j];
            if(table[i][j] == 0) blankSize++, blank.push_back({i,j});
        }
    bt(0);
}