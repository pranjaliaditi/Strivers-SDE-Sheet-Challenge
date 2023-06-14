#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	int sz = m + n;

	vector <int> temp(m);

	for(int i =0; i<m; i++)
	temp[i] = arr1[i];

	int j = 0, l = 0;

	for(int i =0; i<sz; i++){
		if((temp[j] <= arr2[l] && j<m ) || l >= n){
			arr1[i] = temp[j];
			j++;
		}

		else{
			arr1[i] = arr2[l];
			l++;
		}
	}

	return arr1;
}
