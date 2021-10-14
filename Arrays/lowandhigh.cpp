/***Given a sorted array of integers of size ‘n’, return the low and high index of the given key. You must print -1 as low and high if the indexes are not found. The array length can be in the millions with many duplicates, so kindly use the algorithm which helps to reduce time.**//
  
  
  #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find_low_index(vector<int>& arr, int key) {
  int low = 0;
  int high = arr.size() - 1;
  int mid = high / 2;

  while (low <= high) {
    int mid_elem = arr[mid];

    if (mid_elem < key) {
      low = mid + 1;
    }
    else {
      high = mid - 1;
    }

    mid = low + (high - low) / 2;
  }

  if (low < arr.size() && arr[low] == key) {
    return low;
  }

  return -1;
}

int find_high_index(vector<int>& arr, int key) {
  int low = 0;
  int high = arr.size()-1;
  int mid = high/2;

  while (low <= high) {

    int mid_elem = arr[mid];

    if (mid_elem <= key) {
      low = mid+1;
    }
    else {
      high = mid-1;
    }

    mid = low + (high-low)/2;
  }
  
  if(high == -1)
    return high;
  
  if (high < arr.size() && arr[high] == key) {
    return high;
  }

  return -1;
}

int main(int argc, char* argv[]) {
  {
    int n,a;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    int key;
    cin>>key;
    int low = find_low_index(arr, key);
    int high = find_high_index(arr, key);
    cout << low <<" "<<high;
    
    
    
  }
}  
