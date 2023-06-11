#include<iostream>
#include<string>
#include<map>

std::map<std::string, double> list = {{"A+",4.5},{"A0",4.0},{"B+",3.5},{"B0",3.0},{"C+",2.5},{"C0",2.0},{"D+",1.5},{"D0",1.0},{"F",0.0}};
int main(){
  std::string lecture,grade;
  double avg=0,score,n=0;
  
  std::cout<<std::fixed;
  std::cout.precision(6);
  for(int k=0;k<20;k++){
    std::cin >> lecture >> score >> grade;
    if(grade == "P")
      continue;
    n += score;
    avg += score * list[grade];
  }
  std::cout << avg/n<<"\n";
}