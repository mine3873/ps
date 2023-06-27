#include<iostream>

char chess_1[8][9] = {
  "WBWBWBWB",
  "BWBWBWBW",
  "WBWBWBWB",
  "BWBWBWBW",
  "WBWBWBWB",
  "BWBWBWBW",
  "WBWBWBWB",
  "BWBWBWBW"
};
char chess_2[8][9] = {
  "BWBWBWBW",
  "WBWBWBWB",
  "BWBWBWBW",
  "WBWBWBWB",
  "BWBWBWBW",
  "WBWBWBWB",
  "BWBWBWBW",
  "WBWBWBWB"
};

int main(){
  int n,m,sum_1,sum_2,min;
  std::cin >> n >> m;
  char chess[n][m];
  for(int i = 0; i < n;i++){
    for(int j = 0;j < m;j++)
      std::cin >> chess[i][j];
  }
  min = 100;
  for(int i = 0;i < n-8;i++){
    for(int j = 0; j < m-8;j++){
      sum_1 = sum_2 = 0;
      for(int k = i; k < i + 8;k++){
        for(int h = j; h < j + 8; h++){
          if(chess[k][h] != chess_1[k-i][h-j])
            sum_1++;
          if(chess[k][h] != chess_2[k-i][h-j])
            sum_2++;}
        }
      }
      if(min > sum_1)
        min = sum_1;
      if(min > sum_2)
        min = sum_2;
  }
  std::cout << (min == 100 ? 0 : min) << "\n";
}