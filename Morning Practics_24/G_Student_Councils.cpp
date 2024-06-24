#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canFormCouncils(int k, int councils, const vector<int>& a) {
    int totalCouncils = 0;
    for (int students : a) {
        totalCouncils += students / councils;
        if (totalCouncils >= k * councils) {
            return true;
        }
    }
    return totalCouncils >= k * councils;
}

int maxCouncils(int k, int n, vector<int>& a) {
    int low = 0, high = accumulate(a.begin(), a.end(), 0) / k;
    int result = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (canFormCouncils(k, mid, a)) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return result;
}

int main() {
    int k,n;
    cin>>k>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout << maxCouncils(k, n, a) << endl; // Output: 5

    return 0;
}
