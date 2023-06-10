#include<iostream>

int main(){
  int n;
  std::cin>> n;
  std::cout << (n>=90? "A":(n>=80?"B":(n>=70?"C":(n>=60?"D":"F"))));
}