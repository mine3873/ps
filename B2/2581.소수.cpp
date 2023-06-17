#include<iostream>
#include<math.h>

bool is_prime(int n){
  if(n == 1)
    return 0;
  if(n == 2)
    return 1;
  for(int i = 2;i <=sqrt(n);i++){
    if(n % i == 0)
      return 0;
  }
  return 1;
}
int main(){
  int m,n,min = -1,sum = 0;
  std::cin >> m >> n;
  for(int i = m;i <= n;i++){
    if(is_prime(i)){
      if(min == -1)
        min = i;
      sum += i;
    }
  }
  if(min != -1){
    std::cout << sum << "\n" << min << "\n";
  }
  else
    std::cout << "-1" << "\n";
  
}