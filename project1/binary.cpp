#include <iostream>
using namespace std;

class tree{

  public:
  
  tree* fun;
  int data;
  tree* left;
  tree* right;

  tree(int data){

    this->data = data;
    this->left = NULL;
    this->right = NULL;

  }
  
};

  tree* createtree(tree* root){

   cout<< "Enter the value"<<endl;
   int data;
   cin>>data;

   root = new tree(data);

   if(data == -1){

     return NULL;
   }

   root = new tree(data);
   cout<< "for the left of"<<" "<< data << endl;

   root->left = createtree(root->left);

   cout<< "for the right of"<<" "<<data<<endl;

   root->right = createtree(root->right);

   return root;

   }



int main(){

  tree* root = NULL;
  cout<<"hi";

  root = createtree(NULL);
  return 0;



}
