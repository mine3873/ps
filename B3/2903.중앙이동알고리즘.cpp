#include<iostream>

int main(){
  int n,i = 2;
  std::cin >> n;
  while(n--){
    i += i-1;
  }
  std::cout << i*i <<"\n";
}