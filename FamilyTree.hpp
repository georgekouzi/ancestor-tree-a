#include <string>
#include "node.hpp"
#include <iostream>

using namespace std;
namespace family{
class Tree{
public:
Node t;
	
     Tree(string f):t{f}{}
         //t= new node(f); 
    

Tree& addFather(string child,string father);
Tree& addMother(string child,string mother);
string relation(string s);
string find(string s1);
void display();
void remove(string name); 


};
};