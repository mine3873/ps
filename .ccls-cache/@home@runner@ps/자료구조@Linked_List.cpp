#include<iostream>

class Node {
public:
  int value;
  Node* next;

  Node() : next(nullptr) {};
  Node(int key, Node* ptr) : value(key), next(ptr) {};
};

class Linked_List {
Node* head;
int size;
public:
  
  Linked_List() : head(nullptr), size(0) {};
  void push(int key, int index);
  void print();
  void erase(int index);
  void search(int key);
};

void Linked_List::search(int key){ //key값의 첫번째 인덱스 출력, 없을 경우 -1출력
  Node* ptr = head;
  for(int i = 0;i < size; i++){
    if(ptr->value == key){
      std::cout << i << "\n";
      break;
    }
    ptr = ptr->next;
  }
}

void Linked_List::erase(int index){ //index번째 노드 삭제
  Node* ptr = head, *prev_ptr;
  for(int i = 0;i < index;i++){
    prev_ptr = ptr;
    ptr = ptr->next;
  }
  prev_ptr->next = ptr->next;
  delete ptr;
  size--;
}

void Linked_List::push(int key, int index){ //index번째 노드 추가
  if(index == 0){
    head = new Node(key, head);
  }
  else{
    Node* ptr = head;
    for(int i = 0; i < index-1; i++)
      ptr = ptr->next;
    ptr->next = new Node(key, ptr->next);
  }
  size++;
}

void Linked_List::print(){ //리스트 값 출력
  Node* ptr = head;
  while(ptr != nullptr){
    std::cout << ptr->value << " ";
    ptr = ptr->next;
  }
  std::cout << "NULL" << "\n";
}

int main(){
  Linked_List test;
  test.push(1,0);
  test.push(2,1);
  test.print();
  
  test.push(1,1);
  test.push(2,0);
  test.print();
  
  test.erase(1);
  test.print();

  test.search(2);
}