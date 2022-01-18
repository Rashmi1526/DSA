/*Binary Search is a searching algorithm for finding an element's position in a sorted array*/

#include<iostream>
using namespace std;

int binary_search(int arr[],int x, int low, int high)
{
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == x)
         return mid;
        if(arr[mid] < x)
         low = mid + 1;
        else
         high = mid - 1;

    }
    return -1; 

    }
int main(void){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter element to be searched: ";
    cin>>x;
    int result = binary_search( arr, x, 0, n-1);
    if(result==-1){
        cout<<"Element not found: "<<endl;
    }
    else{
        cout<<"Element found at position: "<<result<<endl;
    }
    return 0;
}