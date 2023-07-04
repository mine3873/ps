#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
int main(){
  std::string str;
  std::cin >> str;
  std::vector<int> num;
  for(int i=0;i<str.length();i++){
    int temp = str[i] - '0';
    num.push_back(temp);
  }
  std::sort(num.begin(),num.end());
  for(std::vector<int>::iterator i = num.end()-1;i >= num.begin();i--)
    std::cout << *i;
}