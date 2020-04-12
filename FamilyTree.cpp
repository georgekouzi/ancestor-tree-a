#include <iostream>
#include "FamilyTree.hpp"
#include <string>

using namespace std;
using namespace family;

 
Node* Tree:: serch(string c,Node *root){ 
    if(root == NULL)
        return NULL;
    if(root->name == c)
        return root;
    Node * dl=serch(c,root->father);
     if(dl!= NULL)
        return dl;    
    else
    return serch(c,root->mother);

}

Tree& Tree::addFather(string child,string father){
    
    Node * findchild=serch(child,this->t);
    if (findchild== NULL) {
       cout<<"this child didnt in the tree"<<endl;
    }
    else{
        if(findchild->father== NULL) {
             Node * n= new Node(father,child,statusNode((findchild->num)+1,'m'),(findchild->num)+1,'m');
          findchild->father =n;

        }
        else{
            cout<<"this child have dad already"<<endl;
        }
    }
    return *this;
}
Tree& Tree::addMother(string child,string mother) {
    Node * findchild=serch(child,this->t);
    if (findchild== NULL) {
       cout<<"this child didnt in the tree"<<endl;
    
    }
    else{
        if(findchild->mother== NULL) {
             Node * n= new Node(mother,child,statusNode((findchild->num)+1,'w'),(findchild->num)+1,'w');    
          findchild->mother =n;

        }
        else{
            cout<<"this child have mom already"<<endl;
        }
    }

    return *this;
}


string Tree::statusNode(int n,char g){
       // std::cout << dolev->name << std::endl;

string ans="";
// if(n==0){
//      return "me";
// }
 if(n==1){
    if(g=='m')
    return "father";
    else
    return "mother";
}
else{
int f =n-2;
while(f>0){
ans+="great-";
f--;
} 
if(g=='w')
ans+="grandmother";
else
ans+="grandfather";
}
    return ans;
}

string family::Tree::relation(string s){

Node* n = serch(s, this->t);

if(n==NULL){
return "unrelated";
}
if(n==this->t)
return "me";
else
return n->status;
}

Node* Tree::findName(string s1,Node*n){
   if(n == NULL)
        return NULL;
    if(n->status == s1)
        return n;
    Node * dl=findName(s1,n->father);
     if(dl!= NULL)
        return dl;    
    else
    return findName(s1,n->mother);
}
string Tree::find(string s1){
//string str[];
Node* n = findName(s1, this->t);
if(n==NULL){
return "unrelated";
}
return n->name;
  
}

void Tree::display(){
    //if ()
    //printfamily(this->t)
}
// void Tree::printfamily(Node *root){
//     std::cout     <<"           " <<root->name << std::endl;
//     printf("             |\n             |\n             |\n");
//     printf("-------------------------------\n");
//     printf("  |                          |\n");
//     printf("  |father             mother |\n");
//     printf("  |                          |\n");
//     printf("  |                          |\n");
//     std::cout  <<root->father->name << "                     "<< root->mother->name << std::endl;

// }

Tree& Tree::remove(string name){



return *this;
}
// Node* n=serch(name,this->t);

// if(n==NULL)
// return n;

// if(n->father!=NULL)
// n->father=serch(n->father->name,n->father);
// else if(n->mother!=NULL)
// n->mother=serch(n->mother->name,n->mother);
// else{
//     if(n->father==NULL){
//     Node* n1=n->mother
//     free(n);
//     return n1;
//     }
// else if(n->mother==NULL){
//     Node* n1=n->father;
//     free(n);
//     return n1;
// }
// Node* n1=min(n->mother);
// n->name=n1->name;
// n->mother=serch(n->mother->name,n->mother);





  










