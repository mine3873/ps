#include<iostream>
#include<set>

int main(){
  std::ios::sync_with_stdio(0);      std::cin.tie(0);
  int n,m,t;
  std::cin >> n;
  std::set<int> a;
  for(int k = 0;k<n;k++){
    std::cin >> t;
    a.insert(t);
  }
  std::cin >> m;
  for(int k=0;k<m;k++){
    std::cin >> t;
    auto iter = a.find(t);
    if(iter != a.end())
      std::cout << "1" << "\n";
    else
      std::cout << "0" << "\n";
  }
}