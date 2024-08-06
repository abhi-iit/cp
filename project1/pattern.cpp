#include <iostream>
#include<vector>
#include <math.h>
using namespace std;


int main() {


int v = 10 ;
int k = v;
 
 for (int i = 0; i < v; i++){
    for(int j = 0; j<= k ; j++){

        cout<<" ";
    }

    for(int m = 0; m < ((i*2) + 1) ; m++){

        cout<<"*";
    }

    cout<<endl;

   
    k--;


 }





}