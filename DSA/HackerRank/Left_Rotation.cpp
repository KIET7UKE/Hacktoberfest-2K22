#include <iostream>
using namespace std;
int main()
{
    int att, arr[100000], n;
    //cout << "Enter the number of elements in an Array: ";
    cin >> n;
    //cout << "Enter the number of times you want to shift: ";
    cin >> att;
    //cout << "Enter the elements of an Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 1; j <= att; j++)
    {
        int temp = arr[0];
        int i = 0;
        while (i < n)
        {
            arr[i] = arr[i + 1];
            i++;
        }
        arr[n - 1] = temp;
    }
    //cout<<"After rotating Array will be: "<<endl;
    for(int i = 0; i < n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
