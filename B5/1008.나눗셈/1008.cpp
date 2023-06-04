#include<iostream>
int main(){
  int a,b;
  std::cin >> a >> b;
  double nonmean = double(a) / b;
  
  std::cout<< std::fixed;
  std::cout.precision(10);
  std::cout << nonmean << std::endl;
}