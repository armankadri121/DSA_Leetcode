#include<bits/stdc++.h>
using namespace std;

vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    vector<int> pos, neg;
    int n = a.size();

    for(int i=0; i<n; i++) {
        if(a[i] > 0) {
            pos.emplace_back(a[i]);
        }
        else {
            neg.emplace_back(a[i]);
        }
    }

    if(pos.size() > neg.size()) {
        for(int i=0; i<neg.size(); i++) {
            a[2*i] = pos[i];
            a[2*i+1] = neg[i];
        }

        int index = neg.size() * 2;
        for(int i=neg.size(); i<pos.size(); i++) {
            a[index] = pos[i];
            index++;
        }
    }
    else {
        for(int i=0; i<pos.size(); i++) {
            a[2*i] = pos[i];
            a[2*i+1] = neg[i];
        }

        int index = pos.size() * 2;
        for(int i=pos.size(); i<neg.size(); i++) {
            a[index] = neg[i];
            index++;
        }
    }
    return a;
}

int main() {
    vector<int> a = {1,-1,2,3,4,5,6,7,8,9,-4,-9,-2};
    alternateNumbers(a);
    cout << "[";
    for(int i =0; i<a.size(); i++) {
        cout << a[i];
        if(i != a.size()-1) cout << ", ";
    }
    cout << "]";

}