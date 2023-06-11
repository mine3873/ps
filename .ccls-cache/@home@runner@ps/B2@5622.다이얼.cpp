#include<iostream>
#include<string>
int main(){
  int t=0;
  std::string s;
  std::cin >> s;
  for(int k=0;k<s.length();k++){
    if(s[k]<'D')
      t += 3;
    else if(s[k]<'G')
      t+=4;
    else if(s[k]<'J')
      t+=5;
    else if(s[k]<'M')
      t+=6;
    else if(s[k]<'P')
      t+=7;
    else if(s[k]<'T')
      t+=8;
    else if(s[k]<'W')
      t+=9;
    else
      t+=10;
  }
  std::cout <<t<<"\n";
}