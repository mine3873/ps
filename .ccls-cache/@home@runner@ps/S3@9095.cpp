#include<iostream>

int num[11] ={0,};

int cc(int n){
  if(n==1)
    return 1;
  else if(n==2)
    return 2;
  else if(n==3)
    return 4;
  else if(num[n] != 0)
    return num[n];
  num[n] = cc(n-3) + cc(n-2) + cc(n-1);
  return num[n];
}

int main(){
  int t;
  std::cin >> t;
  int n;
  while(t--){
    std::cin >> n;
    std::cout << cc(n) << "\n";
  }
}