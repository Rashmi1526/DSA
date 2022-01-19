/*Selection sort is a sorting algorithm that selects the smallest element from an unsorted list in each iteration and places that element at the beginning of the unsorted list*/
#include<iostream>
using namespace std;

//function to swap the position of two elements
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//function to print an array
void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;
}
void selectionSort(int arr[], int n){
    for(int step = 0; step < n - 1; step++){
        int min_idx = step;
        for(int i = step + 1; i < n; i++){
            if(arr[i]<arr[min_idx])
             min_idx = i;
        }
        swap(&arr[min_idx], &arr[step]);
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,  n);

    cout<<"Sorted array: \n";
    printArray( arr, n);
    return 0;
}