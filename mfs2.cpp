#include<bits/stdc++.h>
using namespace std;
struct Member
{
    string name;
    long phone;
    string uName;
    int pin;
    double balance;
};
int main();
char MFS;
int c_accN=-1,acc_num;
map<int,Member>accountB;
map<int,Member>accountR;
map<int,Member>accountN;
class Header
{
public:
    void header()
    {
        if(MFS=='B')
        {
            system("CLS");
            cout<<"\t\t\t\t\t Welcome to the Mobile Financing Service(Bkash)"<<endl;
            cout<<"\t\t\t\t------------------------------------------------------------------"<<endl<<endl;
        }
        else if(MFS=='R')
        {
            system("CLS");
            cout<<"\t\t\t\t\t Welcome to the Mobile Financing Service(Rocket)"<<endl;
            cout<<"\t\t\t\t------------------------------------------------------------------"<<endl<<endl;
        }
        else
        {
            system("CLS");
            cout<<"\t\t\t\t\t Welcome to the Mobile Financing Service(Nagad)"<<endl;
            cout<<"\t\t\t\t------------------------------------------------------------------"<<endl<<endl;
        }
    }

    void saveAccountsB()
    {
        Member B=accountB[acc_num];
        ofstream file("Bkash.txt");
        if(!file){return;}
        for(auto&[acc_num,B]:accountB)
        {
            file<<acc_num<<" "<<B.name<<" "<<B.phone<<" "<<B.uName<<" "<<B.pin<<" "<<fixed<<setprecision(2)<<B.balance<<endl;
        }
        file.close();
    }

     void saveAccountsR()
    {
        Member B=accountR[acc_num];
        ofstream file("Rocket.txt");
        if(!file){return;}
        for(auto&[acc_num,B]:accountR)
        {
            file<<acc_num<<" "<<B.name<<" "<<B.phone<<" "<<B.uName<<" "<<B.pin<<" "<<fixed<<setprecision(2)<<B.balance<<endl;
        }
        file.close();
    }

     void saveAccountsN()
    {
        Member B=accountN[acc_num];
        ofstream file("Nagad.txt");
        if(!file){return;}
        for(auto&[acc_num,B]:accountN)
        {
            file<<acc_num<<" "<<B.name<<" "<<B.phone<<" "<<B.uName<<" "<<B.pin<<" "<<fixed<<setprecision(2)<<B.balance<<endl;
        }
        file.close();
    }

     void loadAccountB()
    {
        ifstream file("Bkash.txt");
        if(!file){return;}
        else
        {
            Member B;
            while(file>>acc_num>>B.name>>B.phone>>B.uName>>B.pin>>B.balance)
            {
                accountB[acc_num]=B;
            }
        }
        file.close();
    }

    void loadAccountR()
    {
        ifstream file("Rocket.txt");
        if(!file){return;}
        else
        {
            Member B;
            while(file>>acc_num>>B.name>>B.phone>>B.uName>>B.pin>>B.balance)
            {
                accountR[acc_num]=B;
            }
        }
        file.close();
    }

    void loadAccountN()
    {
        ifstream file("Nagad.txt");
        if(!file){return;}
        else
        {
            Member B;
            while(file>>acc_num>>B.name>>B.phone>>B.uName>>B.pin>>B.balance)
            {
                accountN[acc_num]=B;
            }
        }
        file.close();
    }
};

class PAY_BILL : public Header
{
public:
    void tv()
    {
        header();
        cout<<"\t\t\t\t\t\t\t\t\t TV Bill"<<endl<<endl;
        long customer_id,cphone;
        int DD,MM,YY;
        double amount;
        cout<<"\t\t\t\t\t Enter the Bill Deadline (DD,MM,YY) : ";
        cin>>DD>>MM>>YY;
        cout<<"\t\t\t\t\t Enter the customer id : ";
        cin>>customer_id;
        cout<<"\t\t\t\t\t Enter the customer contact number : ";
        cin>>cphone;
        cout<<"\t\t\t\t\t Enter the amount : ";
        cin>>amount;
        if(MFS=='B')
        {
           Member B=accountB[c_accN];
           accountB[c_accN].balance-=amount;
           cout<<"\t\t\t\t\t ***Television bill paid successfully***"<<endl;
           cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountB[c_accN].balance<<endl<<endl;
        }
        else if(MFS=='R')
        {
            Member B=accountR[c_accN];
            accountR[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Television bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountR[c_accN].balance<<endl<<endl;
        }
        else
        {
            Member B=accountN[c_accN];
            accountN[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Television bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountN[c_accN].balance<<endl<<endl;
        }
    }

    void education()
    {
        header();
        cout<<"\t\t\t\t\t\t\t Education Bill"<<endl<<endl;
        string uni_name;
        long id;
        int amount;
        cin.ignore();
        cout<<"\t\t\t\t\t Enter your university name : ";
        getline(cin,uni_name);
        cout<<"\t\t\t\t\t Enter student id : ";
        cin>>id;
        cout<<"\t\t\t\t\t Enter the amount : ";
        cin>>amount;
        if(MFS=='B')
        {
            Member B=accountB[c_accN];
            accountB[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Education bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountB[c_accN].balance<<endl<<endl;
        }
        else if(MFS=='R')
        {
            Member B=accountR[c_accN];
            accountR[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Education bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountR[c_accN].balance<<endl<<endl;
        }
        else
        {
            Member B=accountN[c_accN];
            accountN[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Education bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountN[c_accN].balance<<endl<<endl;
        }
    }

    void electricity()
    {
        header();
        cout<<"\t\t\t\t\t\t Electricity Bill"<<endl<<endl;
        int DD,MM,YY;
        long  meter_number,cphone;
        double amount;
        cout<<"\t\t\t\t\t Enter the Bill Deadline(DD,MM,YY) : ";
        cin>>DD>>MM>>YY;
        cout<<"\t\t\t\t\t Enter the meter number : ";
        cin>>meter_number;
        cout<<"\t\t\t\t\t Enter the customer contact number : ";
        cin>>cphone;
        cout<<"\t\t\t\t\t Enter the amount : ";
        cin>>amount;
        if(MFS=='B')
        {
            Member B=accountB[c_accN];
            accountB[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Electricity bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountB[c_accN].balance<<endl<<endl;
        }
        else if(MFS=='R')
        {
            Member B=accountR[c_accN];
            accountR[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Electricity bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountR[c_accN].balance<<endl<<endl;
        }
        else
        {
            Member B=accountN[c_accN];
            accountN[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Electricity bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountN[c_accN].balance<<endl<<endl;
        }
    }

    void Insurance(int c)
    {
        header();
        cout<<"\t\t\t\t\t\t\t  Insurance Bill"<<endl<<endl;
        int policy_num;
        double amount;
        if(c==1){cout<<"\t\t\t\t\t Your select purpose : New policy"<<endl;}
        else{cout<<"\t\t\t\t\t Your select purpose : Renewal payment"<<endl;}
        cout<<"\t\t\t\t\t Enter your policy number : ";
        cin>>policy_num;
        cout<<"\t\t\t\t\t Enter the amount : ";
        cin>>amount;
        if(MFS=='B')
        {
            Member B=accountB[c_accN];
            accountB[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Insurance bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountB[c_accN].balance<<endl<<endl;
        }
        else if(MFS=='R')
        {
            Member B=accountR[c_accN];
            accountR[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Insurance bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountR[c_accN].balance<<endl<<endl;
        }
        else
        {
            Member B=accountN[c_accN];
            accountN[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Insurance bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountN[c_accN].balance<<endl<<endl;
        }
    }

    void gas()
    {
        header();
        cout<<"\t\t\t\t\t\t\t\t  Gas Bill"<<endl<<endl;
        int DD,MM,YY;
        long cphone;
        double amount;
        cout<<"\t\t\t\t\t Enter the Bill Deadline (DD,MM,YY) : ";
        cin>>DD>>MM>>YY;
        cout<<"\t\t\t\t\t Enter the customer contact number : ";
        cin>>cphone;
        cout<<"Enter the amount : ";
        cin>>amount;
        if(MFS=='B')
         {
             Member B=accountB[c_accN];
             accountB[c_accN].balance-=amount;
             cout<<"\t\t\t\t\t ***Gas bill paid successfully***"<<endl;
             cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountB[c_accN].balance<<endl<<endl;
         }
        else if(MFS=='R')
         {
             Member B=accountR[c_accN];
             accountR[c_accN].balance-=amount;
             cout<<"\t\t\t\t\t ***Gas bill paid successfully***"<<endl;
             cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountR[c_accN].balance<<endl<<endl;
         }
        else
         {
             Member B=accountN[c_accN];
             accountN[c_accN].balance-=amount;
             cout<<"\t\t\t\t\t ***Gas bill paid successfully***"<<endl;
             cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountN[c_accN].balance<<endl<<endl;
         }
    }

    void water()
    {
        header();
        cout<<"\t\t\t\t\t\t\t\t Water Bill"<<endl<<endl;
        int DD,MM,YY;
        long int bill_number;
        double amount;
        cout<<"\t\t\t\t\t Enter the Bill Deadline(DD,MM,YY) : ";
        cin>>DD>>MM>>YY;
        cout<<"\t\t\t\t\t Enter the Bill id : ";
        cin>>bill_number;
        cout<<"\t\t\t\t\t Enter the amount : ";
        cin>>amount;
        if(MFS=='B')
        {
            Member B=accountB[c_accN];
            accountB[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Water bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountB[c_accN].balance<<endl<<endl;
        }
        else if(MFS=='R')
        {
            Member B=accountR[c_accN];
            accountR[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Water bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountR[c_accN].balance<<endl<<endl;
        }
        else
        {
            Member B=accountN[c_accN];
            accountN[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Water bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountN[c_accN].balance<<endl<<endl;
        }
    }

    void telephone()
    {
        header();
        cout<<"\t\t\t\t\t\t\t\t Telephone Bill"<<endl<<endl;
        int DD,MM,YY;
        long cphone;
        double amount;
        cout<<"\t\t\t\t\t Enter the Bill Deadline : ";
        cin>>DD>>MM>>YY;
        cout<<"\t\t\t\t\t Enter the customer contact number : ";
        cin>>cphone;
        cout<<"\t\t\t\t\t Enter the amount : ";
        cin>>amount;
        if(MFS=='B')
        {
            Member B=accountB[c_accN];
            accountB[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Telephone bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountB[c_accN].balance<<endl<<endl;
        }
        else if(MFS=='R')
        {
            Member B=accountR[c_accN];
            accountR[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Telephone bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountR[c_accN].balance<<endl<<endl;
        }
        else
        {
            Member B=accountN[c_accN];
            accountN[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Telephone bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountN[c_accN].balance<<endl<<endl;
        }
    }

    void internet()
    {
        header();
        cout<<"\t\t\t\t\t\t\t Internet Bill"<<endl<<endl;
        long int account_number;
        double amount;
        cout<<"\t\t\t\t\t Enter the Customer id : ";
        cin>>account_number;
        cout<<"\t\t\t\t\t Enter the amount : ";
        cin>>amount;
        if(MFS=='B')
        {
            Member B=accountB[c_accN];
            accountB[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Internet bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountB[c_accN].balance<<endl<<endl;
        }
        else if(MFS=='R')
        {
            Member B=accountR[c_accN];
            accountR[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Internet bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountR[c_accN].balance<<endl<<endl;
        }
        else
        {
            Member B=accountN[c_accN];
            accountN[c_accN].balance-=amount;
            cout<<"\t\t\t\t\t ***Internet bill paid successfully***"<<endl;
            cout<<"\t\t\t\t\t your correct balance : "<<fixed<<setprecision(2)<<accountN[c_accN].balance<<endl<<endl;
        }
    }
};

class BRN : public PAY_BILL
{
    public:
    void Home()
    {
        lebel2:
        header();
        int choice;
        header();
        cout<<"\t\t\t\t\t 1.Log in"<<endl;
        cout<<"\t\t\t\t\t 2.Registration"<<endl;
        cout<<"\t\t\t\t\t 3.Exit"<<endl<<endl;
        cout<<"\t\t\t\t\t Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                login();
                break;
            case 2:
                registration();
                break;
            case 3:
                main();
            default:
                cout<<"\t\t\t\t\t Invalid choice.Please try again."<<endl<<endl;
                system("pause");
                goto lebel2;
       }
    }

    void login()
    {
        lebel3:
        header();
        cout<<"\t\t\t\t\t\t\t Log in  your account "<<endl<<endl;
        int p;
        string un;
        cin.ignore();
        cout<<"\t\t\t\t\t Enter your User name : ";
        getline(cin,un);
        cout<<"\t\t\t\t\t Enter your pin number (4 number) : ";
        cin>>p;
        for(const auto&[acc_num,B]:(MFS=='B'?accountB:(MFS=='R'?accountR:accountN)))
        {
            if(B.uName==un && B.pin==p)
            {
                c_accN=acc_num;
                cout<<"\t\t\t\t\t Your account log in successfully"<<endl;
                break;
            }
            if(B.uName==un && B.pin!=p)
            {
                cout<<"\t\t\t\t\t Your pin number incorrect.Please try again."<<endl<<endl;
                system("\t\t\t\t\t pause");
                goto lebel3;
            }
            if(B.uName!=un && B.pin==p)
            {
                cout<<"\t\t\t\t\t Your user name incorrect.Please try again."<<endl<<endl;
                system("\t\t\t\t\t pause");
                goto lebel3;
            }
        }
        if(c_accN==-1)
        {
            cout<<"\t\t\t\t\t Please register your account"<<endl<<endl;
            system("pause");
            Home();
        }
       Profile();
    }

    void registration()
    {
        header();
        Member B;
        cout<<"\t\t\t\t\t\t   Registration your account "<<endl<<endl;
        cin.ignore();
        cout<<"\t\t\t\t\t Enter your name : ";
        getline(cin,B.name);
        cout<<"\t\t\t\t\t Enter Phone number : ";
        cin>>B.phone;
        cout<<"\t\t\t\t\t Enter your user name : ";
        cin>>B.uName;
        cout<<"\t\t\t\t\t Enter your pin number ( 4 number ) : ";
        cin>>B.pin;
        cout<<"\t\t\t\t\t Enter your balance : ";
        cin>>B.balance;

        if(MFS=='B')
        {
            acc_num=accountB.size()+1;
            accountB[acc_num]=B;
            saveAccountsB();
        }
        else if(MFS=='R')
        {
            acc_num=accountR.size()+1;
            accountR[acc_num]=B;
            saveAccountsR();
        }
        else
        {
           acc_num=accountN.size()+1;
           accountN[acc_num]=B;
           saveAccountsN();
        }
        cout<<"\t\t\t\t\t ***Your account registration successfully***"<<endl;
        cout<<"\t\t\t\t\t Your account number : "<<acc_num<<endl<<endl;
        system("pause");
        Home();
    }

    void Profile()
    {
        header();
        lebel4:
        int choice;
        cout<<"\t\t\t\t\t 1.Account"<<endl;
        cout<<"\t\t\t\t\t 2.Send Money"<<endl;
        cout<<"\t\t\t\t\t 3.Mobile Recharge"<<endl;
        cout<<"\t\t\t\t\t 4.Cash out"<<endl;
        cout<<"\t\t\t\t\t 5.Cash in"<<endl;
        cout<<"\t\t\t\t\t 6.Pay Bill"<<endl;
        cout<<"\t\t\t\t\t 7.Log out"<<endl<<endl;
        cout<<"\t\t\t\t\t Enter your Choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            show_detail();
            break;
        case 2:
            send_money();
            break;
        case 3:
            recharge();
            break;
        case 4:
            cash_out();
            break;
        case 5:
            cash_in();
            break;
        case 6:
            pay_bill();
            break;
        case 7:
            log_out();
            break;
        default:
            cout<<"\t\t\t\t\t Invalid choice number.Please try again."<<endl<<endl;
            system("pause");
            goto lebel4;
        }
    }

    void show_detail()
    {
        header();
        Member B;
        if(MFS=='B'){B=accountB[c_accN];}
        else if(MFS=='R'){B=accountR[c_accN];}
        else{B=accountN[c_accN];}
        cout<<"\t\t\t\t\t My name : "<<B.name<<endl;
        cout<<"\t\t\t\t\t Phone number : +880"<<B.phone<<endl;
        cout<<"\t\t\t\t\t My user name : "<<B.uName<<endl;
        cout<<"\t\t\t\t\t Pin number : "<<B.pin<<endl;
        cout<<"\t\t\t\t\t My balance : $"<<fixed<<setprecision(2)<<B.balance<<endl<<endl;
        system("pause");
        Profile();
    }

    void send_money()
    {
        lebel5:
        header();
        cout<<"\t\t\t\t\t\t\t Send Money"<<endl<<endl;
        Member B;
        int tacc_num=-1;
        long tphone;
        double tamount;
        cout<<"\t\t\t\t\t Enter the phone number : ";
        cin>>tphone;
        if(MFS=='B')
        {
            for(const auto&[acc_num,B]:accountB)
            {
                if(B.phone==tphone)
                {
                    tacc_num=acc_num;
                    break;
                }
            }
        }
        else if(MFS=='R')
        {
            for(const auto&[acc_num,B]:accountR)
            {
                if(B.phone==tphone)
                {
                    tacc_num=acc_num;
                    break;
                }
            }
        }
        else
        {
            for(const auto&[acc_num,B]:accountN)
            {
                if(B.phone==tphone)
                {
                    tacc_num=acc_num;
                    break;
                }
            }
        }
        if(tacc_num==-1)
        {
            cout<<"\t\t\t\t\t There is no account on this phone number"<<endl;
            cout<<"\t\t\t\t\t Please try again "<<endl<<endl;
            system("pause");
            goto lebel5;
        }
        if(MFS=='B')
        {
            cout<<"\t\t\t\t\t Enter the amount : ";
            cin>>tamount;
            accountB[c_accN].balance-=tamount;
            accountB[tacc_num].balance+=tamount;
            saveAccountsB();
            cout<<"\t\t\t\t\t ***Send money successfully***"<<endl;
            cout<<"\t\t\t\t\t Your correct amount $"<<fixed<<setprecision(2)<<accountB[c_accN].balance<<endl<<endl;
        }
        else if(MFS=='R')
        {
            cout<<"\t\t\t\t\t Enter the amount : ";
            cin>>tamount;
            accountR[c_accN].balance-=tamount;
            accountR[tacc_num].balance+=tamount;
            saveAccountsR();
            cout<<"\t\t\t\t\t ***Send money successfully***"<<endl;
            cout<<"\t\t\t\t\t Your correct amount &"<<fixed<<setprecision(2)<<accountR[c_accN].balance<<endl<<endl;
        }
        else
        {
            cout<<"\t\t\t\t\t Enter the amount : ";
            cin>>tamount;
            accountN[c_accN].balance-=tamount;
            accountN[tacc_num].balance+=tamount;
            saveAccountsN();
            cout<<"\t\t\t\t\t ***Send money successfully***"<<endl;
            cout<<"\t\t\t\t\t Your correct amount $"<<fixed<<setprecision(2)<<accountN[c_accN].balance<<endl<<endl;
        }
        system("pause");
        Profile();
    }
    void recharge()
    {
        header();
        cout<<"\t\t\t\t\t\t\t Mobile Recharge"<<endl<<endl;
        Member B;
        long int rphone;
        double rbalance;
        cout<<"\t\t\t\t\t Enter the recharge phone number : ";
        cin>>rphone;
        cout<<"\t\t\t\t\t Enter the recharge amount : ";
        cin>>rbalance;
        if(MFS=='B')
        {
            B=accountB[c_accN];
            accountB[c_accN].balance-=rbalance;
            saveAccountsB();
            cout<<"\t\t\t\t\t ***Recharge successfully***"<<endl;
        cout<<"\t\t\t\t\t Your correct balance : $"<<fixed<<setprecision(2)<<accountB[c_accN].balance<<endl<<endl;
        }
        else if(MFS=='R')
        {
            B=accountR[c_accN];
            accountR[c_accN].balance-=rbalance;
            saveAccountsR();
            cout<<"\t\t\t\t\t ***Recharge successfully***"<<endl;
            cout<<"\t\t\t\t\t Your correct balance : $"<<fixed<<setprecision(2)<<accountR[c_accN].balance<<endl<<endl;
        }
        else
        {
            B=accountN[c_accN];
            accountN[c_accN].balance-=rbalance;
            saveAccountsN();
            cout<<"\t\t\t\t\t ***Recharge successfully***"<<endl;
            cout<<"\t\t\t\t\t Your correct balance : $"<<fixed<<setprecision(2)<<accountN[c_accN].balance<<endl<<endl;
        }
        system("pause");
        Profile();
    }
    void cash_out()
    {
        header();
        cout<<"\t\t\t\t\t\t\t Cash Out your Balance "<<endl<<endl;
        Member B;
        double wbalance;
        cout<<"\t\t\t\t\t Enter your withdraw balance : ";
        cin>>wbalance;
        if(MFS=='B')
        {
            B=accountB[c_accN];
            accountB[c_accN].balance-=wbalance;
            saveAccountsB();
            cout<<"\t\t\t\t\t ***Cash out successfully***"<<endl;
        cout<<"\t\t\t\t\t Your correct balance : $"<<fixed<<setprecision(2)<<accountB[c_accN].balance<<endl<<endl;
        }
        else if(MFS=='R')
        {
            B=accountR[c_accN];
            accountR[c_accN].balance-=wbalance;
            saveAccountsR();
            cout<<"\t\t\t\t\t ***Cash out successfully***"<<endl;
            cout<<"\t\t\t\t\t Your correct balance : $"<<fixed<<setprecision(2)<<accountR[c_accN].balance<<endl<<endl;
        }
        else
        {
            B=accountN[acc_num];
            accountN[c_accN].balance-=wbalance;
            saveAccountsN();
            cout<<"\t\t\t\t\t ***Cash out successfully***"<<endl;
            cout<<"\t\t\t\t\t Your correct balance : $"<<fixed<<setprecision(2)<<accountN[c_accN].balance<<endl<<endl;
        }
        system("pause");
        Profile();
    }
    void cash_in()
    {
        header();
        cout<<"\t\t\t\t\t\t\t Cash in your Balance "<<endl<<endl;
        Member B;
        double dbalance;
        cout<<"\t\t\t\t\t Enter your deposit balance : ";
        cin>>dbalance;
        if(MFS=='B')
        {
            B=accountB[c_accN];
            accountB[c_accN].balance+=dbalance;
            saveAccountsB();
            cout<<"\t\t\t\t\t ***Cash in successfully***"<<endl;
        cout<<"\t\t\t\t\t Your correct balance : $"<<fixed<<setprecision(2)<<accountB[c_accN].balance<<endl<<endl;
        }
        else if(MFS=='R')
        {
            B=accountR[c_accN];
            accountR[c_accN].balance+=dbalance;
            saveAccountsR();
            cout<<"\t\t\t\t\t ***Cash in successfully***"<<endl;
            cout<<"\t\t\t\t\t Your correct balance : $"<<fixed<<setprecision(2)<<accountR[c_accN].balance<<endl<<endl;
        }
        else
        {
            B=accountN[c_accN];
            accountN[c_accN].balance+=dbalance;
            saveAccountsN();
            cout<<"\t\t\t\t\t ***Cash in successfully***"<<endl;
            cout<<"\t\t\t\t\t Your correct balance : $"<<fixed<<setprecision(2)<<accountN[c_accN].balance<<endl<<endl;
        }
        system("pause");
        Profile();
    }
    void log_out()
    {
        header();
        c_accN=-1;
        cout<<"\t\t\t\t\t  ***Your account log out successfully***"<<endl<<endl;
        system("pause");
        Home();
    }
    void pay_bill()
    {
        lebel5:
        header();
        int choice;
        cout<<"\t\t\t\t\t\t\t\t PAY BILL"<<endl<<endl;
        cout<<"\t\t\t\t\t 1.Gas"<<endl;
        cout<<"\t\t\t\t\t 2.Electricity"<<endl;
        cout<<"\t\t\t\t\t 3.Internet"<<endl;
        cout<<"\t\t\t\t\t 4.Water"<<endl;
        cout<<"\t\t\t\t\t 5.Telephone"<<endl;
        cout<<"\t\t\t\t\t 6.TV"<<endl;
        cout<<"\t\t\t\t\t 7.Education"<<endl;
        cout<<"\t\t\t\t\t 8.Insurance"<<endl;
        cout<<"\t\t\t\t\t 9.Exit"<<endl<<endl;
        cout<<"\t\t\t\t\t Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            gas();
            break;
        case 2:
            electricity();
            break;
        case 3:
            internet();
            break;
        case 4:
            water();
            break;
        case 5:
            telephone();
            break;
        case 6:
            tv();
            break;
        case 7:
            education();
            break;
        case 8:
            header();
            int ch;
            cout<<"\t\t\t\t\t\t\t  Insurance Bill"<<endl<<endl;
            cout<<"\t\t\t\t\t Select your purpose "<<endl;
            cout<<"\t\t\t\t\t 1.New policy"<<endl;
            cout<<"\t\t\t\t\t 2.Renewal payment"<<endl;
            cout<<"\t\t\t\t\t Enter your choice : ";
            cin>>ch;
            Insurance(ch);
            break;
        case 9:
            Profile();
        default:
            cout<<"\t\t\t\t\t Invalid choice.Please try again"<<endl<<endl;
        }
        if(MFS=='B'){saveAccountsB();}
        else if(MFS=='R'){saveAccountsR();}
        else{saveAccountsN();}
        system("pause");
        goto lebel5;
    }
};

  int main()
{
    BRN ob;
    ob.loadAccountB();
    ob.loadAccountR();
    ob.loadAccountN();
    lebel1:
    system("CLS");
    cout<<"\t\t\t\t\t Welcome to the Mobile Financing Service(Bkash,Rocket,Nagad)"<<endl;
    cout<<"\t\t\t\t--------------------------------------------------------------------------"<<endl<<endl;
    string code;
    cout<<"\t\t\t\t\t Enter the code number : ";
    cin>>code;
    cout<<endl;
    if(code=="*247#")
    {
       MFS='B';
       ob.Home();
    }
    else if(code=="*322#")
    {
        MFS='R';
        ob.Home();
    }
    else if(code=="*167#")
    {
        MFS='N';
        ob.Home();
    }
    else
    {
        cout<<"\t\t\t\t\t Invalid code.Please try again."<<endl<<endl;
        system("pause");
        goto lebel1;
    }
}
