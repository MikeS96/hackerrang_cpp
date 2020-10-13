/**
 *  @file deque.cpp
 *  @author Miguel Saavedra (miguel.saavedra@uao.edu.co)
 *  @brief Usage of Deque method in C++
 *  @version 0.1
 *  @date 07-04-2020
 *
 */

#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){

    deque<int> dq;
    
    for (int i=0; i<n; i++){
        
        // Push first element
        if (dq.empty()){
            dq.push_back(i);
        }
        
        // Remove elements outside the current window
        if (dq.front() <= (i - k)){
            dq.pop_front();
        }
        
        // Move max element to the front
        while (!dq.empty() && arr[i] >= arr[dq.back()]){
            dq.pop_back();
        }
        
        dq.push_back(i);
        
        // Print out only when the first window is completed
        if (i >= (k - 1)){
            cout << arr[dq.front()] << " ";
        }    
    }
    cout << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
