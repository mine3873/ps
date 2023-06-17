#include<iostream>

int main(){
  int n,k,i=0;
  std::cin >> n >> k;
  while(k){
    i++;
    if(n%i == 0)
      k--;
    if(i > n){
      break;
    }
    
  }
  if(k)
    std::cout << 0 << "\n";
  else
    std::cout << i << "\n";
}