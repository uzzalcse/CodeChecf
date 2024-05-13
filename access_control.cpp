

#include<bits/stdc++.h> 

using namespace std;

int main() {
	int t; cin>>t;
	while(t--) {
		int x, n; cin>>x>>n;
		string s; cin>>s;
		//int cnt=0;
		if(s[0]=='0')
			cout<<"NO\n";
		else {
			bool check=false;
			int cnt=0;
			for(int i=0; i<n; i++) {
				if(s[i]=='1') {
					cnt=x;
				}
				else if(s[i]=='0') {
					if(cnt<=0)
					{
						check = true;
						break;
					}
					cnt--;
				}
			}

			if(check==false)
				cout<<"YES\n";
			else
				cout<<"NO\n";

		}
	}
}
