#include<iostream>
using namespace std;
int main()
{
	int a[100],n,i,j,temp;
	cout<<"Enter no of elements : ";
	cin>>n;
	cout<<"Enter elements : ";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"Unsorted array"<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"\nSorted array\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
}
