// https://www.spoj.com/problems/QUEUEEZ/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin>>t;
	queue<int>q;
	
	for(int i=0; i<t; i++)
	{
	    int tp;
	    cin>>tp;
	    if(tp==1){
	        int n;
	        cin>>n;
	        q.push(n);
	    }
	    else if(tp==2)
	    
	    {
	        if(q.empty()){
	            
	        }
	        else{
	            q.pop();
	        }
	    }
	    else{
	        if(q.empty())
	        {
	            cout<<"Empty!"<<"\n";
	        }
	        else{
	            cout<<q.front()<<"\n";
	        }
	    }
	}

}
