
#include<bits/stdc++.h> 

using namespace std;

int main() {
	int t; cin>>t;
	while(t--) {
		int n, m;
		cin>>n>>m;
		vector<int> a, b;
		int arr[n];
		for(int i=0; i<n; i++) {

			cin>>arr[i];
		}
		for(int j=0; j<m; j++) {
			int x; cin>>x; b.push_back(x);
		}

		int mm=*max_element(b.begin(), b.end());



		int len=n-mm;
		if(mm>=2)
		sort(arr+len, arr+n);
		for(int i=0; i<n; i++) {
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}
