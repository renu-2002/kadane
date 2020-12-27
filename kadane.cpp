//kadane algorithm
#include<bits/stdc++.h>
using namespace std;


 
int maxSubarraySum(int arr[], int n){
    
   
    int max_so_far=0;
    int max_ending_here=0;
    
    for(int i=0;i<n;i++)
    {
        max_ending_here=max_ending_here+arr[i];
        if(max_ending_here<0)
        max_ending_here=0;
        
        if(max_ending_here>max_so_far)
        max_so_far=max_ending_here;
    }
    if(max_so_far<0)
    return -1;
    
    return max_so_far;
}



int main()
{
    int t,n;
    
    cin>>t; 
    while(t--) 
    {
        
        cin>>n; 
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; 
        cout << maxSubarraySum(a, n) << endl;
    }
}
  
