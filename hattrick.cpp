
#include<bits/stdc++.h> 

using namespace std;

int main() {
	int t; cin>>t; 
	while(t--) {
		int cnt=0;
		for(int i=0; i<6; i++) {
			char a; cin>>a;
			if(a=='W' && cnt==0) {
				cnt++;
				//cout<<cnt<<"\n";
			}
			else if(a=='W' && cnt>0) {
				cnt++;
			}
			else {
				if(cnt<3) {
					cnt=0;
				}
			}
		}
		//cout<<cnt<<" cnt \n";
		if(cnt>=3)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		cnt=0;
	}
}
