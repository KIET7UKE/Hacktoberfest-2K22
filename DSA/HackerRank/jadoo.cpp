#include <iostream>
using namespace std;

int main() {
    char ch;
    int c,score;
    int flag = 0;
    while(scanf("%c",&ch)!=EOF)
    {
        if(ch >= '0' && ch <= '9')
        {   
            flag = 1;
            break;

        }
        else if(ch<=32) continue;
        else c++;   
    }
    if(flag == 1)
    {   cout<<0; return 0;}
    if(c <= 100)
    score = 100;
    else score= 50;
    cout<<score;
    return 0;
}