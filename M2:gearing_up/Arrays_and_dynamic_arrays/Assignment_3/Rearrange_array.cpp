/*Given an array arr of size N where every element is in the range from 0 to N-1. Rearrange the given array so that arr[i] = j is changed to arr[j] = i.

You must write an algorithm that runs in linear time and uses linear extra space.

Input Format
First-line will contain an integer N, size of array arr.
Second-line will contain N space-separated integers describing elements of the array.

Output Format
Print the given array arr so that arr[i] = j is changed to arr[j] = i.

Input 1:
4
1 3 0 2
Output 1:
2 0 3 1
*/
#include <iostream>
#include<vector>
using namespace std;
void rearrange(int n,vector<int> &arr)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=0)
		{
			int ind=arr[i];
			int val=i;
			while(ind!=i)
			{
				int temp=arr[ind];
				arr[ind]=-(val+1);
				val=ind;
				ind=temp;
			}
			arr[ind]=-(val+1);
		}
	}
	for(int i=0;i<n;i++){
		arr[i]=-(arr[i]) -1;
	}
}
int main() {
	int n;
    cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	rearrange(n,arr);
	for(auto it:arr)
		cout<<it<<" ";
    return 0;
}
