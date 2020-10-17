#include <iostream>
using namespace std;

int main() {
	int rem, sum = 0;
	int num, N;
	
	cin >> N;
	for(int i = 0; i < N; i++){
	    sum = 0;
	    int c;
	    cin >> c;
	    while(c != 0){
	        rem = c % 10;
	        sum = sum + rem;
	        c = c / 10;
	    }
	    cout << sum << endl;
	}
	return 0;
}
