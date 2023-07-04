#include<iostream>

class Node {
  public:
  int value;
  Node* next;
  Node() : next(nullptr) {};
  Node(int key, Node* next1) : value(key), next(next1) {};
};

class Stack {
  int sum;
  Node* tail;
  public:
  Stack() : sum(0),tail(nullptr) {};
  void push(int key);
  void pop();
  int return_sum() {return sum;};
};

void Stack::pop(){
  Node* ptr = tail->next;
  sum -= tail->value;
  delete tail;
  tail = ptr;
}

void Stack::push(int key){
  tail = new Node(key,tail);
  sum += key;
}

int main(){
  int k,val;
  std::cin >> k;
  Stack total;
  while(k--){
    std::cin >> val;
    if(val)
      total.push(val);
    else
      total.pop();
  }
  std::cout << total.return_sum() << "\n";
}