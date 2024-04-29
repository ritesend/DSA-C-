#include <iostream>
using namespace std;

bool linearSearch(int arr[],int size,int k ){
    // Base Case 1
    if (size == 0){
        return false;
    }
    // Base Case 2
    if (arr[0] == k){
        return true;
    }

    int remainingPart = linearSearch(arr+1,size-1,k);
    return remainingPart;
}
int main() {
    int arr[11] = {1,2,3,4,5,6,7,6,5,4};
    int size = 11;
    int key = 2;

    bool ans = linearSearch(arr,size,key);

    if (ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    return 0;
}
