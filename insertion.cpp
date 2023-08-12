#include<iostream>
using namespace std;
int main()
{
 cout<<"Enter size of number"<<endl;
 int n;
 cin>>n;
 int k[n];
 cout<<"Enter the numbers"<<endl;
 for(int i=0;i<n;i++)
 {
  cin>>k[i];
 }

 for(int i=1;i<n;i++)
  {
    int current=k[i];
    int j=i-1;
    while(arr[j]>current && j>=0){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
  }
    cout<<"After insertion sorting"<<endl;

  for(int i=0;i<n;i++){
    cout<<k[i]<<" ";
  }cout<<endl;

  return 0;
}