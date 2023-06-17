#include<iostream>
#include<vector>
int main(){
  int n,sum;
  while(1){
    std::cin >> n;
    std::vector<int> num;
    if(n == -1)
      break;
    sum = 1;
    for(int i=2;i<=n/2;i++){
      if(n%i==0){
        num.push_back(i);
        sum += i;
      }
    }
    if(sum == n){
      std::cout << n << " = 1";
      for(auto &elem : num)
        std::cout << " + " << elem;
    }
    else
      std::cout << n << " is NOT perfect.";
      std::cout << "\n";
  }
}