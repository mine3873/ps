#include<iostream>

int main(){
  int n,o=0,s=0;
  std::cin >> n;
  while(n>0){
    if(n%5==0){
      o = n/5;
      n = 0;
      break;
    }
    n -= 3;
    s++;
  }
  if(n < 0)
    std::cout << -1;
  else
    std::cout << s+o;
}