#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	float sum=0.0;
	for(int i=0;i<n;i++){
		 sum+=arr[i];
	}
	float mean=sum/n;
	cout<<mean<<" ";
}