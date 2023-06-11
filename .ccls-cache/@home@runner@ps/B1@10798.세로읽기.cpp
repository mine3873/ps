#include<iostream>
#include<string>

int main(){
  std::string s[5];
  int max = 0;
  for(int k =0;k<5;k++){
    std::cin >> s[k];
    if(max< s[k].length())
      max = s[k].length();
  }
    
  for(int i=0;i<max;i++){
    for(int j=0;j<5;j++){
      if(i >= s[j].length())
        continue;
      std::cout<<s[j][i];
    }
    
  }
}