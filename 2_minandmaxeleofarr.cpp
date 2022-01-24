/**Write a C++ function to return minimum and maximum in an array. 
Technique 1: Using Functions
Here, we use two functions, one for finding the maximum number and the other for the minimum. We pass the array and the size of the array to functions as parameters. **/

//code

#include<iostream>
using namespace std;
//Function to find the largest element
int FindMax(int arr[],int n)
{
  int i, max;
  max=arr[0];//Assuming the first element to be maximum
  for(i=1;i<n;i++)
  {
    if(arr[i]>max)//checking if current element is greater than maximum
      max=arr[i];//setting the current element as max
  }
  return max;//returning the max element

}
//Function to find the sallest element
int FindMin(int arr[], int n)
{
  int i, min;
  min=arr[0];//Assuming the first element to be minimum
  for(i=1;i<n;i++)
  {
    if(arr[i]<min)//checking if current element is smaller than minimum
      min=arr[i];//setting the current element as min

  }
  return min;//returning the min element
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int max,min;
  max = FindMax(arr, n);
  min = FindMin(arr, n);

  cout<<"Maximum element in the array is:" << max << "\n";
  cout<<"Minimum element in the array is:" << min << "\n";
}



/***Technique 2: Using Inbuilt max and min function
The syntax of the inbuilt method is:

ForwardIterator min_element (ForwardIterator first, ForwardIterator last);
where,

First ForwardIterator pointing to the beginning of the range.

Last ForwardIterator pointing to the end of the range.

And, it returns a pointer to the smallest element in the range, when there are more than one, it points to the first one. It points to the last element in case if the array is empty**///


//code

#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int *max, *min;//pointer variables declared for max and min
  /*minimum pointer points in the range of first element to last element. It returns the first one if values are same*/
  min = std::min_element(arr,arr+n);
  cout<<"Minimum element of array is "<<*min<<"\n";
  max = std::max_element(arr,arr+n);
  cout<<"Maximum element of array is "<<*max<<"\n";

  return 0;



}

