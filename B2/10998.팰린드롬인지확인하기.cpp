#include<iostream>
#include<string>

bool is_same(std::string s){
  int i = s.length();
  for(int k =0;k<i/2;k++){
    if(s[k] != s[i-k-1])
      return 0;
  }
  return 1;
}

int main(){
  std::string s;
  std::cin>>s;
  std::cout << is_same(s)<<"\n";
}