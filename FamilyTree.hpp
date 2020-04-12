#include <string>
#include "node.hpp"
#include <iostream>

using namespace std;
namespace family{
class Tree{                               
public:
Node* t;
     Tree(string root){
        t=new Node(root);
     }
Node* getNode(){
  return this->t;
}
Node* findName(string c,Node*allNode);

string statusNode(int n,char g);
Node* serch(string c,Node*allNode);
Tree& addFather(string child,string father);
Tree& addMother(string child,string mother);
string relation(string s);
string find(string s1);
void display();
Tree& remove(string name); 
Node& findName(string name);
~Tree(){}
};
};