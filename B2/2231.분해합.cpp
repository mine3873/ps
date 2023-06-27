#include<iostream>

int is_answer(int num){
  int sum = num;
  while(num >= 1){
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int main(){
  int n,ten,k=0,ans;
  std::cin >> n;
  ten = ans = n;
  while(ten > 1){
    ten /= 10;
    k++;
  }
  for(int i = n; i > 0 and i >= n - (9*k);i--){
    if(is_answer(i) == n and i < ans)
      ans = i;
  }
  if(ans == n)
    std::cout << 0 << "\n";
  else
    std::cout << ans << "\n";
}