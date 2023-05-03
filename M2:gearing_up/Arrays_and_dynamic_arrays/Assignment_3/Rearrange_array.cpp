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
