#include<iostream>
#include<set>

int main(){
  std::set<int> num;
  int t;
  for(int k=0;k<10;k++){
    std::cin >> t;
    num.insert(t%42);
  }
  std::cout << num.size()<<"\n";
  
}