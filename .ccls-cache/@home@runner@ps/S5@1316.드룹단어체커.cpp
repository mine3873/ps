#include<iostream>
#include<string>

bool is_groupWord(std::string s){
  bool state;
  for(int k=0;k<s.length();k++){
    state = true;
    for(int m = k+1;m<s.length();m++){
      if(s[k]==s[m]){
        if(state==false)
          return false;
        else
          continue;
      }
      else
        state = false;
    }
  }
  return true;
}
int main(){
  int n,t=0;
  std::cin >> n;
  while(n--){
    std::string s;
    std::cin >> s;
    if(is_groupWord(s))
      t++;
  }
  std::cout << t<<"\n";
}