#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector <int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
    {
        unordered_set<int>s, d, f, g; vector <int>v;
        for(int i = 0; i <n1; i++){
            s.insert(A[i]);
        }
        for(int j = 0; j<n2; j++){
            if(s.find(B[j]) != s.end()){
              f.insert(B[j]);
            }
        }
        for(int k = 0; k<n3; k++){
            if(f.find(C[k]) != f.end()){
                g.insert(C[k]);
            }
        }
        for(auto it = g.begin(); it != g.end(); it++){
            v.push_back(*it);
        }
        sort(v.begin(), v.end());
        return v;
    }

};

int main(){
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int A[n1];
    int B[n2];
    int C[n3];
    for(int i = 0; i < n1; i++) cin >> A[i];
    for(int i = 0; i < n2; i++) cin >> B[i];
    for(int i = 0; i < n3; i++) cin >> C[i];
    Solution ob;

    vector <int> res = ob.commonElements(A, B, C, n1, n2, n3);
    if(res.size() == 0)
     cout << -1;
    for(int i = 0; i < res.size(); i++)
     cout << res[i] << " ";
    cout << endl;  

}