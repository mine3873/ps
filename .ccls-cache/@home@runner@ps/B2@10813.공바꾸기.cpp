#include<iostream>

int num[101];
int main(){
  int n,m,i,j,temp;
  std::cin >> n>>m;
  for(int k=1;k<=n;k++)
    num[k] = k;
  while(m--){
    std::cin >> i>>j;
    temp = num[i];
    num[i] = num[j];
    num[j] = temp;
  }
  for(int k = 1;k<=n;k++)
    std::cout <<num[k]<<" ";
}