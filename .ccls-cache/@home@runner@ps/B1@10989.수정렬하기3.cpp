#include<iostream>

int num[10001] = {0,};

int main(){
std::ios_base::sync_with_stdio(0);
std::cin.tie(0);
std::cout.tie(0);
  int n,temp;
  std::cin >> n;
  while(n--){
    std::cin >> temp;
    num[temp]++;
  }
  for(int i = 1; i < 10001;i++){
    if(num[i]){
      while(num[i]--)
        std::cout << i << "\n";
    }
  }
}