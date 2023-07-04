#include<iostream>
#include<vector>
#include<algorithm>

int main(){
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);
  int n,temp;
  std::cin >> n;
  std::vector<int> num;
  while(n--){
    std::cin >> temp;
    num.push_back(temp);
  }
  std::sort(num.begin(),num.end());
  for(auto& elem : num)
    std::cout << elem << "\n";
}