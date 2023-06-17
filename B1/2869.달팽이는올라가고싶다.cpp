#include<iostream>

int main(){
  int a,b,v;
  std::cin >> a >> b >> v;
  if((v-a) % (a-b))
    std::cout << (v-a)/(a-b) + 2  << "\n";
  else
    std::cout << (v-a)/(a-b) + 1 << "\n";
}