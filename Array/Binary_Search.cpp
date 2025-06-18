#include <bits/stdc++.h>
using namespace std;


//             BINARY SEARCH ON INTEGERS
// The array arr is sorted in non-decreasing order.
int binary_search(vector <int> &arr,int target)
{
    int n=arr.size();
    int low=0;
    int high=n-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (arr[mid]==target) return mid;  // returning index of target.
        else if (arr[mid]>target) high=mid-1;
        else low=mid+1;
    }
    return -1;  // return index as -1 if target does not exist.
}