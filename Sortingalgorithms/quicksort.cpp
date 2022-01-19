#include<iostream>
using namespace std;
//function to print elements
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void printArray(int array[], int size) {
    for(int i=0; i < size; i++)
      cout << array[i] << " ";
    cout << endl;  
}
//function to rearrange array
int partition( int array[], int low, int high) {
    //selecting the rightmost element as pivot
    int pivot = array[high];

    //pointer for greater element
    int i = (low - 1);

    //traverse each element of the array and compare them with pivot
    for(int j= low; j< high; j++){
        //if element smaller than pivot is found then swap it with the greater element pointed by i
        if(array[j]<=pivot){
            i++;
            //swap element at i with element at j
            swap(&array[i], &array[j]);

        }
    }
    //swap pivot with the greater element at i
    swap(&array[i + 1], &array[high]);

     //return the partition point
     return(i + 1);
}

void quickSort(int array[], int low, int high){
    if(low<high){
        int pi = partition(array, low, high);

        //recursive call on the left of pivot
        quickSort(array, low, pi - 1);

        //recursive call on the right of pivot
        quickSort(array, pi + 1, high);
    }
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i = 0; i < n; i++ )
     cin>>array[i];
    cout<<"Unsorted array: \n";
    printArray(array, n); 

    quickSort(array, 0 , n - 1);

    cout<<" Sorted array in ascending order: \n";
    printArray(array, n);
}