#include <bits/stdc++.h>
using namespace std;
int a[100];

void merge(int i,int j)
{
	int mid=(i+j)/2;
	int i1=i;
	int j1=mid+1;
	int k=i;
	int temp[100];
	while(i1<=mid&&j1<=j)
	{
		if(a[i1]<a[j1])
		temp[k++]=a[i1++];
		else
		temp[k++]=a[j1++];
	}
	while(i1<=mid)
	temp[k++]=a[i1++];
	while(j1<=j)
	temp[k++]=a[j1++];
	
	for(i1=i;i1<=j;i1++)
	{
		a[i1]=temp[i1];
	}
}

void mergesort(int i,int j)
{
	if(i>=j)
	return ;
	int mid=(i+j)/2;
	mergesort(i,mid);
	mergesort(mid+1,j);
	
	merge(i,j);
}

int main(){
    int n;
    cin >> n;
   
    for(int i=0;i<n;i++)
    cin >> a[i];
    mergesort(0,n-1);
    
    for(int i=0;i<n;i++)
    cout << a[i]<<" ";
    
}
    
		 
  
			
		
	
		
	
	
	
		
		
   
 
 

