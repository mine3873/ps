#include<iostream>
#include<string>
int main(){
  int n,num=0;
  std::string s;
  std::cin >> s>>n;
  for(int i = 0;i<s.length();i++){
    if(i < s.length()-1){
      if(s[i]>='A'){
        num = (num + (int(s[i]-0)-55))*n;
      }
      else
        num = (num+int(s[i]))*n;
    }
    else{
      if(s[i]>='A'){
        num = num + (int(s[i]-0)-55);
      }
      else
        num = num+int(s[i]);
    }
    }
  std::cout << num<<"\n";
  }
