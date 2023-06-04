#include<iostream>
#include<math.h>

bool is_primeNumber(int n){
  if(n == 2) return 1;
  if(n == 1 or n % 2 == 0) return 0;
  for(int k = 3;k <= sqrt(double(n));k += 2){
    if(n % k == 0)
      return 0;
  }
  return 1;
}

int main(){
  int n;
  while(1)
  {
    int sum = 0;
    std::cin >> n;
    if(n == 0) break;
    for(int k = n + 1; k <= 2*n; k++){
      if(is_primeNumber(k))
        sum++;
    }
    std::cout << sum << "\n";
  }
  return 0;
}