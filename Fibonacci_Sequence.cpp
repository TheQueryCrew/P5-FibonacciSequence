#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e7+1;
 ll arr[N];
void precomputation()
{
    arr[0]=0,arr[1]=1;
    for(int i=2;i<=1e7+1;i++)
    arr[i]=arr[i-1]+arr[i-2];
}
int main()
{
    precomputation();
    ll n;
    cout<<"Enter number of elements required :";
    cin>>n;
    
    cout<<"Fibonacci Sequence for"<<" "<<n<<" "<<"elements is : ";
    for(int i=0;i<n-1;i++)
    cout<<arr[i]<<",";
    
    cout<<arr[n-1];
    
}