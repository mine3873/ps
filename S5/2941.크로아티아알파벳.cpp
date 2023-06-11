#include<iostream>
#include<string>

int main(){
  std::string s;
  std::cin >> s;
  int n=0,word=0,k=s.length();
  while(n<k){
    if(n+1 == word){
      word++;
      break;
    }
    if(s[n]=='c'){
      if(s[n+1]=='=' or s[n+1]=='-'){
        word++;
        n += 2;
      }
      else{
      word++;
      n++;
      }
    }
    else if(s[n] == 'd'){
      if(s[n+1]=='z'){
        if(s[n+2]=='=' and n+2<k){
          word++;
          n += 3;
        }
        else{
        word += 2;
        n += 2;
        }
      }
      else if(s[n+1]=='-'){
        word++;
        n += 2;
      }
      else{
        word++;
        n++;
      }
      }
    
    }
    
  }
}