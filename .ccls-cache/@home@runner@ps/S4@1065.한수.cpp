#include<iostream>

bool ishansu(int n){
  if(n < 100)
    return 1;
  if(n/100 - (n/10)%10 == (n/10)%10 - n%10)
    return 1;
  return 0;
}

int main(){
  int n;
  int sum=0;
  std::cin >> n;
  for(int i =1; i<=n;i++){
    if(ishansu(i))
      sum++;
  }
  std::cout << sum << std::endl;
}