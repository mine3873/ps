#include<iostream>
int main(){
  int n,m,temp;
  std::cin >>n>>m;
  int s[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
      std::cin >> s[i][j];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      std::cin >> temp;
      s[i][j] += temp;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
      std::cout << s[i][j] <<" ";
    std::cout << "\n";
  }
}