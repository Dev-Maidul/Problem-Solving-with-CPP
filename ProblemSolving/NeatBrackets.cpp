// https://toph.co/p/neat-brackets

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int f=1;
	stack<char>st;
	
	for(int i=0; i<s.size(); i++)
	{
	    if(s[i]=='('){
	        st.push('(');
	    }
	    else{
	        if(st.empty()) {
	            f=0;
	            break;
	        }
	        else st.pop();
	    }
	}
	
	if(st.empty()==0) f=0;
	if(f==1) cout<<"Yes\n";
	else cout<<"No\n";

}
