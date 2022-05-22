/*Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. Task is to check whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted. It may be assumed that elements in both array are distinct.
 

Example 1:

Input:
a1[] = {11, 1, 13, 21, 3, 7}
a2[] = {11, 3, 7, 1}
Output:
Yes
Explanation:
a2[] is a subset of a1[]*/



#include <bits/stdc++.h>
using namespace std;


string isSubset(int a1[], int a2[], int n, int m) {
    set<int> hashset;

    // hset stores all the values of arr1
    for (int i = 0; i < n; i++)
    {
        hashset.insert(a1[i]);
    }

    // loop to check if all elements of arr2 also
    // lies in arr1
    for (int i = 0; i < m; i++) {
        if (hashset.find(a2[i]) == hashset.end())
            return "No";
    }
    return "Yes";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}



