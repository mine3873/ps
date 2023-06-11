#include<iostream>
#include<string>
int main(){
  int n=0;
  std::string s;
  std::getline(std::cin ,s);
  for(int k=0;k<s.length();k++){
    if(s[k] == ' ')
        n++;
  }
  if(s[0]==' ')
    n--;
  if(s[s.length()-1]==' ')
    n--;
  std::cout << n+1 << "\n";
}