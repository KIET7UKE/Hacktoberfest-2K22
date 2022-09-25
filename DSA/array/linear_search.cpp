#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)    // time complexity  is O(n)                           (O="BIG O ")
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

cout<<"key"<<endl;
int key;
cin>>key;
    cout<<linearsearch(arr,n,key);
    return 0;
}
