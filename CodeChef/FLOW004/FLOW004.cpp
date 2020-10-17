#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N, num, temp, rem, res;
	cin >> N;
	
	while(N--){
	    cin >> num;
	    rem = num % 10;
	    
	    while(num != 0){
	        temp = num;
	        num = num / 10;
	    }
	    res = temp + rem;
	    cout << res << endl;
	}
	return 0;
}
