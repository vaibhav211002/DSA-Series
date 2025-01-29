#include <bits/stdc++.h>
using namespace std;
void countsort(vector<int>& v, int largest) {
    vector<int> arr(largest + 1, 0);
    for (int i : v) arr[i]++;
    
    for (int i = 0; i <= largest; i++) 
        while (arr[i]--) cout << i << " ";

    cout << endl;
}

int main() {
    vector<int> v = {2, 5, 6, 7, 8, 9, 1, 2, 6, 43, 31};
    countsort(v, *max_element(v.begin(), v.end()));
    return 0;
}
