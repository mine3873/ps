#include<iostream>
#include<math.h>

bool is_prime(int n){
  if(n==1)
    return 0;
  if(n==2)
    return 1;
  for(int i = 2;i <= sqrt(n);i++){
    if(n % i == 0)
      return 0;
  }
  return 1;
}

int main(){
  int n,k=0;
  std::cin >> n;
  int prime[n];
  for(int i = 0;i<n;i++){
    std::cin >> prime[i];
    if(is_prime(prime[i]))
      k++;
  }
  std::cout << k << "\n";
}