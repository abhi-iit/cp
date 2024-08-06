#include <iostream>
#include <vector>

using namespace std;

void add(vector<int>& arr) {

    if (arr.size() > 0) {
        arr[0] = 2;
    }

    arr.push_back(8);
    return;
}

int main() {
    vector<int> arr ; // Initialize the vector with some values



    arr.push_back(8);
    arr.push_back(10);
    arr.pop_back();

    // cout << arr[0] << endl;
    // cout << arr[1] << endl;

    for(int i  : arr){

        cout<<i;
    }

    return 0;
}
