#include<iostream>

using namespace std;

struct Node {
    int data;
    Node *nextNode;//Store node type reference
} main_node;

int main(){
      
      struct Node chainNode;

      //Node
      main_node.data = 100;
      main_node.nextNode = &chainNode;

      // Chain node to be attached
      chainNode.data = 200;
      chainNode.nextNode = NULL;


      cout << "\n" << main_node.data;
      cout << "\n" << main_node.nextNode->data;

      return 0;

}
