#include<iostream>
using namespace std;

int main(){
	int count = 0, k, n;
	long long int t;
	cin >> n >> k;
	
	for(int i = 0; i < n; i++){
		cin >> t;
		
		if(t % k == 0){
		    count ++;
		}
		
	}	
	 cout << count << endl;
	 return 0;
}

