

#include <bits/stdc++.h>
using namespace std;

bool compare(long long a, long b) {
    return a>b;
}

int main() {
	// your code goes here
	int t; cin>>t; 
	while(t--) {
	    long long n; cin>>n; 
	    vector<long long> a1, a2, a3;
	    for(int i=0; i<n; i++) {
	        long long a; cin>>a;
	        a1.push_back(a);
	    }
	    for(int i=0; i<n; i++) {
	    	long long b; cin>>b; 
	    	a2.push_back(b);
	    }
	    sort(a1.begin(), a1.end());
	    sort(a2.begin(), a2.end(), compare);
	   
	    set<long long> st;
	    for(int i=0; i<n; i++) {
	        st.insert((a2[i]+a1[i]));
	    }
	    if(st.size()!=1) {
	        cout<<-1<<endl;
	    }
	    else {
	        for(int i=0; i<n; i++) {
	            cout<<a1[i]<<" ";
	        }
	        cout<<endl;
	        for(int i=0; i<n;i++) {
	            cout<<a2[i]<<" ";
	        }
	        cout<<endl;
	    }
	}
}
