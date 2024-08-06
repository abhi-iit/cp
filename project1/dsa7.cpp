#include <iostream>
using namespace std;

int main(){

 int n , i=2, k;

 cin>>n;

  while(i<n){
    if (n%i == 0){
       k=1; break;}
       i++;
    }

  if (k == 1){
       cout<<"is not prime";
  }

  else{
       cout<<"is prime";}








}
