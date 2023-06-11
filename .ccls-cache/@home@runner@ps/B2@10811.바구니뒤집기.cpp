#include<iostream>

int main(){
  int n,m,i,j,temp;
  std::cin >> n >> m;
  int num[n+1];
  for(int k=1;k<=n;k++)
    num[k] = k;
  for(int k = 0;k<m;k++){
    std::cin >> i>>j;
    for(int s=i;s<=(i+j)/2;s++){
      temp = num[s];
      num[s] = num[j-s+i];
      num[j-s+i] = temp;
    }
  }
  for(int k = 1;k<=n;k++)
    std::cout << num[k] << " ";
}