#ifndef TREE_NODE_H
#define TREE_NODE_H
#include <string>
#include <iostream>
using namespace std;
class Node {
public:
    string child;
    string name;
    string status; 
    Node *mother;
    Node *father;
    int num; 
    char gender;
    Node(string f) {
        name = f;
        father = NULL;
        mother = NULL;
        num=0;

    }
    Node(string f,string c,string status,int n,char gender ){
        this->name = f;
        this->child=c;
        this->status=status;
        this->num=n;
        this->gender=gender; 
        this->father = NULL;
        this->mother = NULL;

    }






};



#endif //TREE_NODE_H
