#include<iostream>

int main(){
  int n;
  std::cin >> n;
  int num[n+1];
  num[1]= 0;
  for(int k=2;k<=n;k++){
    num[k] = num[k-1]+1;
    if(k%2==0 and num[k/2]+1<num[k])
      num[k] = num[k/2]+1;
    if(k%3==0 and num[k/3]+1<num[k])
      num[k] = num[k/3]+1;
  }
  std::cout << num[n];
}