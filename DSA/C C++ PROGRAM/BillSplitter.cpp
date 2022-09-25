#include<bits/stdc++.h>
using namespace std;
int main(){
    float totalAmount=0, totalPeoples=0, Tax=0;
    cout<<"Enter the total amount of the bill: ";
    cin>>totalAmount;
    cout<<"Enter the total number of peoples: ";
    cin>>totalPeoples;
    cout<<"Enter the tax of the bill: ";
    cin>>Tax;

    int perPerson=0;
    float finaltax=0;
    finaltax = (totalAmount/100)*Tax;
    perPerson = (totalAmount + finaltax)/totalPeoples;
    cout<<"The amount per person is: " << perPerson;
    return 0;
}