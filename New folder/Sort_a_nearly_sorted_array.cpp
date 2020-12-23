/* Sort a nearly sorted (or K sorted) array


#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//sort the array (nearly sorted array)
void sorted(int arr[], int n, int k){

      priority_queue<int,vector<int>, greater<int>> maxHeap;

    for(int i = 0; i < n; i++){
        
        if(maxHeap.size() < k){
            maxHeap.push( arr[i] );
            continue;
        }
        
        maxHeap.push( arr[i] );
        
        cout << maxHeap.top() <<" ";
        maxHeap.pop();
    }
    
    while(maxHeap.size() > 0){
        cout << maxHeap.top() <<" ";
        maxHeap.pop();
    }
}

int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];    
    }

    sorted(arr, n, k);
     
    return 0;
}

/*
Input 
6 3
2 6 3 12 56 8

Output
12 56 8 6 3 2

space complexity = O(k)
time complexity = O(nlogk)
*/