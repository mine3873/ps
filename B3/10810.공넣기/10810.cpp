#include<iostream>

int num[100] = {0,};
int main(){
  int n,m,i,j,k;
  std::cin >> n >> m;
  for(int s=0;s<m;s++){
    std::cin >> i >>j>>k;
    for(int x=i-1;x<j;x++)
      num[x] = k;
  }
  for(int s=0;s<n;s++)
    std::cout << num[s] << " ";
}