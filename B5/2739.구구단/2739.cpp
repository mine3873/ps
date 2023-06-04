#include<iostream>

int main(){
  int n;
  std::cin >> n;
  for(int k = 1; k <= 9; k++)
    std::cout << n << " * " << k << " = " << n*k << "\n";
  return 0;
}