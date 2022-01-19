/*Insertion sort is a sorting algorithm that places an unsorted element at its suitable place after each iterartion*/
#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i< n; ++i){
        cout<< " "<<arr[i];
    }
    cout<<endl;
}

void insertionSort(int arr[], int n){
    for(int step = 1; step < n; step++){
        int key = arr[step];
        int j = step - 1;
        //Compare key with each element on the left of it until an element smaller than it is found
        while(key < arr[j] && j>=0) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr, n);

    cout<<"Sorted array: \n";
    printArray( arr, n);
    return 0;
}