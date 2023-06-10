#include<iostream>
#include<vector>

int main(){
  std::vector<int> list(9);
  int max = -1,location;

  for(int k = 0; k < 9; k++){
    std::cin >> list[k];
    if(max < list[k]){
      max = list[k];
      location = k+1;
    }
  }
  std::cout << max <<"\n"<<location;
}