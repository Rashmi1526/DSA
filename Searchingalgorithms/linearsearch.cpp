/*A linear search algorithm or sequential search is a method for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched.*/
#include<bits/stdc++.h>
using namespace std;

void linear_search(int arr[], int n, int k)
{
    int temp=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<"Element found at position: "<<i+1<<endl;
            temp=0;
            break;
        }
    }
    if(temp==-1){
        cout<<"No element found"<<endl;
    }
}

int main(){
    cout<<"Enter size of array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter elements to be searched: ";
    int k;
    cin>>k;

    linear_search(arr,n,k);
    return 0;

}