#include<iostream>

class Node {
  public:
  int value;
  Node* next;
  Node() : next(nullptr) {};
  Node(int key, Node* next_Node) : value(key), next(next_Node) {};
};

class Stack {
  int size;
  Node* tail;
  public:
  Stack() : tail(nullptr), size(0) {};
  void push(int key);
  void pop();
  void top();
};

void Stack::top(){ //맨 위의 값 반환
  std::cout << tail->value << "\n";
}

void Stack::pop(){ // 맨 위의 값 제거
  Node* ptr = tail->next;
  delete tail;
  tail = ptr;
  size--;
}

void Stack::push(int key){ // 맨 위에 값 추가
  tail = new Node(key, tail);
  size++;
}

int main(){
  
}