#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.

	int cnt = 0;
	int ele = arr[0];

	for(int i =0; i<n; i++){
		if(cnt == 0 && i != 0){
			ele = arr[i];
		}

		if(arr[i] == ele){
			cnt++;
		}

		else
		cnt--;
	}

	if(cnt > 0){
		int fcnt = 0;

		for(int i =0; i<n; i++){
			if(ele == arr[i])
			fcnt++;
		}

		if(fcnt > floor(n/2))
		return ele;

	}
	
	return -1;
}
