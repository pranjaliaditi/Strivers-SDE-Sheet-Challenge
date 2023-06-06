#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
       int mid = 0, low = 0, high = n-1;
       for(int i = 0; i< n; i++){
           if(arr[mid] == 1){
               mid++;
           }

           else if(arr[mid] == 0){
               swap(arr[mid],arr[low]);
               mid++;
               low++;
           }

           else{
               swap(arr[mid],arr[high]);
               high--;
            }
           }
}
