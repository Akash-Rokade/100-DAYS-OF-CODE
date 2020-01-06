#include<iostream>
using namespace std;
int add(int ar[],int n)
{

int ans=0;
for(int i=0;i<n;i++)
{

ans=ans+ar[i];

}
return ans;
}
int main()
{
int n;
int ar[1000];
cin>>n;
for(int i=0;i<n;i++)
{
cin>>ar[i];

}

cout<<add(ar,n);

return 0;
}