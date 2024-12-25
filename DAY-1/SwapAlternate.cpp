#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[] , int size){
    for(int i = 0; i < size; i+=2){
        // checking if next elemnt is present
        if(i+1 < size){
            // logic to swap
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int arr2[6] = {12, 13, 14, 15, 16, 17};
    
    swapAlternate(arr, 5);
    printArray(arr, 5);

    cout << endl;


    swapAlternate(arr2, 6);
    printArray(arr2, 6);

    return 0;
}
