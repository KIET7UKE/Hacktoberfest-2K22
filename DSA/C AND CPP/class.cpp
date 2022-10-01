#include<iostream>
using namespace std;
class salary
{
    private:
    char name [30];
    float basic,DA,GP,TA,HRA,PF,LOAN,ID ,TOTAL, GROSS,NET, SUM;
    public:
    void set();
    void display();
};
void salary::set()
{
    cout<<"enter the name:";
    cin>>name;
    cout<<"\n";
    cout<<"enter the amount of loan";
    cin>>ID;
    cout<<"\n";
    cout<<"enter the amount of loan";
    cin>>LOAN;
    cout<<"\n";
    cout<<"\n";
    cout<<"Enter the basic:";
    cin>>basic;
    cout<<"\n";
    cout<<"enter the GP";
    cin>>GP;
    SUM=basic+GP;
    DA=1.5*SUM;
    TA=0.02*SUM;
    HRA=0.05*SUM;
    PF=0.12*SUM;
    TOTAL=HRA+PF;
    GROSS=basic+GP+DA+HRA;
    NET=GROSS-TOTAL;
    void salary::display()
{
    cout<<"NAME:"<<NAME<<"\n";
    cout<<"ID:"<<ID<<"\n";
    cout<<"basic+GP:"<<SUM<<"\n";
    cout<<"DA:"<<DA<<"\n";
    cout<<"HRA:"<<HRA<<"\n";
    cout<<"PF:"<<PF<<"\n";
    cout<<"TOTAL DEDUCTION:"<<TOTAL<<"\n";
    cout<<"GROSS PAY:"<<NET<<"\n";
}
    int main()
    {
        salary s [10];
        int n,t;
        cout<<"enter the number of members:";
        cin>>n;
        for(i=0;i<n;i++)
    {
        cout<<"salary of member:"(<<i+1<<"\n")
        s[i].set();
    }
    for(i=0;i<n;i++)
    {
        cout<<"salary detail of member:";
        <<i+1<<"\n";
        s[i].display();
        return 0;
    }

