/*It is a sorting algorithm that compares two adjacent elements and swap them until they are not in the intended order*/
#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    //loop to access each array element
    for( int step = 0; step < n; ++step){
        //loop to compare array elements
        for(int i =0; i< n-step; ++i){
            //compare 2 adjacent elements
            if(arr[i] > arr[i+1]){//you can use "<" sign to sort in decreasing order
                //swap
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

//print array
void printArray(int arr[], int n){
    for(int i = 0; i< n; ++i){
        cout<< " "<<arr[i];
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr, n);

    cout<<"Sorted array: \n";
    printArray( arr, n - 1);
    return 0;
}