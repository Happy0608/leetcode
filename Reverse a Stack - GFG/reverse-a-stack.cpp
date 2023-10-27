//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

 void reverse(stack<int>&s){
     if(s.empty()){
         return ;
     }
    int count=s.size();
   
     int top=s.top();
     s.pop();
     
     reverse(s);
     bottom(s,top);
   
     
 }
 
 
 void bottom(stack<int>&s,int &temp){
     if(s.empty()){
         s.push(temp);
         return ;
     }
     
     int temp1=s.top();
     s.pop();
     bottom(s,temp);
     s.push(temp1);
 }
    void Reverse(stack<int> &St){
     reverse(St);
        
    }
 
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends