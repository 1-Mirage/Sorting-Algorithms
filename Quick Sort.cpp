#include <bits/stdc++.h>
using namespace std;
int a[100];
int partition(int l,int h)
{
	int pivot=a[l];
	int i=l;int j=h;
	while(i<j)
	{
		while(i<=j&&a[i]<=pivot)
		i++;
		while(j>=i&&a[j]>pivot)
		j--;
		if(i<j)
		swap(a[i],a[j]);
	}
	swap(a[j],a[l]);
     return j;
 }
		
void quicksort(int i,int j)
{
	if(i<j)
	{
		int pivot=partition(i,j);
	  quicksort(i,pivot-1);
	  quicksort(pivot+1,j);
    }
    return;
}
int main(){
    int n;
    cin >> n;
   
    for(int i=0;i<n;i++)
    cin >> a[i];
    quicksort(0,n-1);
    
    for(int i=0;i<n;i++)
    cout << a[i]<<" ";
    
}
