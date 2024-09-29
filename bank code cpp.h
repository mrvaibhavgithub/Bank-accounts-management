#include<iostream>
using namespace std;
class bankaccount{
    public:
        string name;
        int acno,initialbal=0,deposite,withdraw;
    int accept()
    {
        cout<<"\nenter the customer name: ";
        cin>>name;
        cout<<"\nenter the account number: ";
        cin>>acno;
        cout<<"\nenter balance in account: ";
        cin>>initialbal;
        cout<<endl;
        return 0;
    }
    int depositeamount()
    {
        
        cout<<"\nenter amount to deposite: ";
        cin>>deposite;
        initialbal+=deposite;
        cout<<"\navailable balance: "<<initialbal;
        return 0;
    }
    int withdrawamount()
    {
        cout<<"\nenter the amount to withdraw: ";
        cin>>withdraw;
        if(initialbal>=withdraw)
        {
            initialbal-=withdraw;
            cout<<"\navailable balance: "<<initialbal;
            
        }
        else
        {
          cout<<"\nunsufficient balance";  
        }
        return 0;
    }
    int allaccount()
    {
        cout<<"\nname of customer: "<<name;
        cout<<"\naccount number: "<<acno;
        cout<<"\nbalance: "<<initialbal;
        return 0;
        
    }
};
int main()
{
    bankaccount c[10];
    int accno,n,flag=0;
    for(int i=0;i<3;i++)
    {
        c[i].accept();
        
    }
    
    cout<<"\nenter the account no: ";
    cin>>accno;
    for(int i=0;i<3;i++)
    {
        if(accno==c[i].acno)
        {
            while(accno>0&&flag==0)
            {
            cout<<"\nmenue \n1: deposite amount \n2: withdraw amount \n3:display all data of customer \n4:exit";
            cin>>n;
        
            switch(n)
            {
                case 1:
                c[i].depositeamount();
                break;
                case 2:
                c[i].withdrawamount();
                break;
                case 3:
                cout<<"all data of customer: "<<endl;
                c[i].allaccount();
                break;
                case 4:
              flag=1;
                break;
                default:
                cout<<"\nchoose appropriate option"<<endl;
                break;
                
            }
          }
        }
    }
    
    return 0;
}