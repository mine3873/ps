#include <iostream>
#include<math.h>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  int k = 1, odd = b;
  
  while(k < c){
    k *= a;
    b /= 2;
  }
  k -= c;
  if(odd % 2)
    std::cout << (int(pow(k,b))*a)%c << std::endl;
  else
    std::cout << int(pow(k,b)) % c << std::endl;
  return 0;
}