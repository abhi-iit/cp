#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin>>n;
    int cnt = 0;

vector<bool> a(n+1, true);

for(int i=2; i<n ; i++){

    if(a[i]){

        cnt++;

        for(int j =2*i; j<n; j=j+i){

            a[j] = false;
        }
    }
}


cout<<cnt;



}