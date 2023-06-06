#include<iostream>

int main(){
  int n;
  std::cin >> n;
  for(int k = 0;k < n;k++){
    for(int m = 0;m < n;m++){
      if(m < n - k - 1)
        std::cout << " ";
      else
        std::cout << "*";
    } 
    std::cout << "\n";
  }
}