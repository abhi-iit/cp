#include <iostream>
#include<vector>
#include <math.h>
using namespace std;


int main (){

    int  n;
    cout<<"enter the value - "; 
    cin>>n;
    int sum = 0;

    while(n != 0){

       int  remainder = n%10;

       sum = sum * 10 + remainder;

       n = n/10;


    }

    cout<<sum;
    


}