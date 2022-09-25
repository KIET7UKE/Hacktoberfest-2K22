#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a[5], count =0;
        for(int i=0; i<5; i++)
        {
            cin >>a[i];
        }

        for(int i=0; i<5; i++)
        {
            if (a[i] == 1)
            count++;
        }
        if(count == 0)
        cout << "Beginner";
        else if (count == 1)
        cout << "Junior Devloper";
        else if (count == 2)
        cout << "Middle Devloper";
        else if (count ==3)
        cout << "Senior Devloper";
        else if (count == 4)
        cout << "Hacker";
        else
        cout << "Jeff Dean";
        cout << endl;
	}
	return 0;
}