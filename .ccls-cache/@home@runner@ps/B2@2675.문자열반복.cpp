#include<iostream>
#include<string>
int main(){
  int t,r;
  std::string s;
  std::cin >> t;
  while(t--){
    std::cin >> r >> s;
    for(int k=0;k<s.length();k++){
      for(int w=0;w<r;w++)
        std::cout << s[k];
    }
    std::cout << "\n";
  }
}