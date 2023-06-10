#include<iostream>

int main(){
  int n,m,i,j;
  std::cin >> n >> m;
  int num[n];
  for(int k=0;k<n;k++)
    num[k] = k+1;
  for(int k = 0;k<m;k++){
    std::cin >> i>>j;
    for(int s=i;s<=j;s++){
      num[s] = j - s + i;
    }
  }
  for(int k = 0;k<n;k++)
    std::cout << num[k] << " ";
}