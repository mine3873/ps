#include<iostream>

int num[30][30] ={0,};

int combination(int n,int m){
  if(n==m or m==0)
    return 1;
  else if(num[n][m] != 0)
    return num[n][m];
  num[n][m] = combination(n-1,m-1)+combination(n-1,m);
  return num[n][m];
}

int main(){
  int t,n,m;
  std::cin >>t;
  while(t--){
    std::cin >> n>>m;
    std::cout << combination(m,n) <<"\n";
  }
}