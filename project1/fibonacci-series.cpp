#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int current = 0; 
    int previous1 = 1;
    int previous2 = 0;

    for(int i=2; i<=n; i++){

        current = previous1 + previous2;
        previous2 = previous1;
        previous1 = current;
        

    }

    cout<<previous1;



 }








