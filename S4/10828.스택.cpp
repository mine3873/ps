#include<iostream>
#include<string>
class Node {
  public:
    int value;
    Node* next;
    Node() : next(nullptr) {};
    Node(int key, Node* next1) : value(key), next(next1) {};

};

class Stack {
  
  int size;
  Node* tail;
  public:
  Stack() : tail(nullptr), size(0) {};
  void push(int key);
  void pop();
  void top();
  int return_size() {return size;};
  int empty() {if(size) return 0; else return 1;};
};

void Stack::push(int key){
  tail = new Node(key,tail);
  size++;
}

void Stack::pop(){
  if(tail == nullptr)
    std::cout << -1 << "\n";
  else{
    Node* ptr = tail->next;
    std::cout << tail->value << "\n";
    delete tail;
    tail = ptr;
    size--;
  }
}

void Stack::top(){
  if(tail == nullptr)
    std::cout << -1 << "\n";
  else
    std::cout << tail->value << "\n";
}

int main(){
  int n,x;
  std::cin >> n;
  std::string str;
  Stack test;
  while(n--){
    std::cin >> str;
    if(str == "push"){
      std::cin >> x;
      test.push(x);
    }
    else if(str == "pop")
      test.pop();
    else if(str == "size")
      std::cout << test.return_size() << "\n";
    else if(str == "empty")
      std::cout << test.empty() << "\n";
    else if(str == "top")
      test.top();
  }
}