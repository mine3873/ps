#include<iostream>
#include<vector>
using namespace std;

long long B;
int N;
typedef vector<vector<int>> vec;

vec sum(vec a, vec b){
    int size = a.size();
    vec C(size, vector<int>(size, 0));
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
            C[i][j] = a[i][j] + b[i][j];
    return C;
}

void print(vec C){
    int size = C.size();
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
            cout <<  C[i][j] % 1000 << ' ';
        cout << '\n';
    }
}

vec multi(vec a, vec b){
    int size = a.size();
    if(size == 1){
        vec C(size, vector<int>(size));
        C[0][0] = a[0][0] * b[0][0];
        return C;
    }
    int dividedSize = size / 2;
    int newSize = dividedSize + (dividedSize % 2 && dividedSize != 1 ? 1 : 0);
    vec a11(newSize, vector<int>(newSize,0));
    vec a12(newSize, vector<int>(newSize,0));
    vec a21(newSize, vector<int>(newSize,0));
    vec a22(newSize, vector<int>(newSize,0));
    
    vec b11(newSize, vector<int>(newSize,0));
    vec b12(newSize, vector<int>(newSize,0));
    vec b21(newSize, vector<int>(newSize,0));
    vec b22(newSize, vector<int>(newSize,0));
    for(int i = 0; i < dividedSize; i++)
        for(int j = 0; j < dividedSize; j++){
            a11[i][j] = a[i][j] % 1000, a12[i][j] = a[i][j + dividedSize] % 1000;
            a21[i][j] = a[i + dividedSize][j] % 1000, a22[i][j] = a[i + dividedSize][j + dividedSize] % 1000;
            b11[i][j] = b[i][j] % 1000, b12[i][j] = b[i][j + dividedSize] % 1000;
            b21[i][j] = b[i + dividedSize][j] % 1000, b22[i][j] = b[i + dividedSize][j + dividedSize] % 1000;
        }
    
    vec C11 = sum(multi(a11,b11), multi(a12,b21));
    vec C12 = sum(multi(a11,b12), multi(a12,b22));
    vec C21 = sum(multi(a21,b11), multi(a22,b21));
    vec C22 = sum(multi(a21,b12), multi(a22,b22));
    
    vec C(size, vector<int>(size, 0));
    for(int i = 0; i < dividedSize; i++)
        for(int j = 0; j < dividedSize; j++){
            C[i][j] = C11[i][j] % 1000, C[i][j + dividedSize] = C12[i][j] % 1000;
            C[i + dividedSize][j] = C21[i][j] % 1000, C[i + dividedSize][j + dividedSize] = C22[i][j] % 1000;
        }
    return C;
}

vec solve(vec a, long long n){
    if(n == 1) return a;
    vec b = solve(a,n/2);
    if(n % 2)
        return multi(b,multi(b,a));
    else
        return multi(b,b);
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0),cout.tie(0);
    cin >> N >> B;
    vec A((N % 2 ? N + 1 : N), vector<int>((N % 2 ? N + 1 : N),0));
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> A[i][j];
    vec C = A;
    C = solve(A,B);
    print(C);
    
    return 0;
}