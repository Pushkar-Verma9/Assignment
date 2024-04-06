#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    int pref[n],suff[n],ans[n];

    pref[0]=1;
    suff[n-1]=1;
    
    for(int i=1;i<n;i++)
        pref[i]=pref[i-1]*arr[i-1];

    for(int j=n-2;j>=0;j--)
        suff[j]=suff[j+1]*arr[j+1];

    for(int i=0;i<n;i++)
        ans[i]=pref[i]*suff[i];

    cout<<"Array : ";
    print(arr,4);
    cout<<"Prefix : ";
    print(pref,4);
    cout<<"Suffix : ";
    print(suff,4);
    cout<<"Answer : ";
    print(ans,4);

    return 0;
}