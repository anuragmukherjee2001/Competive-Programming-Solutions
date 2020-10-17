#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main() {
	// your code goes here.
    vector<int> A;
    int N, num;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> num;
        A.push_back(num);
    }

    sort(A.begin(), A.end());
    
    for(int i = 0; i < A.size(); i++){
        cout << A[i] << endl;
    }

    
	return 0;
}
