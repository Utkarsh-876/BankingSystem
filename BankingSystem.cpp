/* Define a class to represent a bank account which include the following number 
as a data member:
a) Name of the Depositor
b) Account Number
c) Withdrawal Amount
d) Balance amount in the account

Member function:
a) to assign Initial value
b) To deposite an amount
c) To withdraw an amount after cheching the account
d) To display name and balance
*/

#include<iostream>
#include<iomanip>
using namespace std;

class Bank
{
	char name[20];
	int Ac;
	char actype[20];
	int bal;
	
	public:
		void opbal(void);
		void deposite(void);
		void withdraw(void);
		void display(void);
			
};

void Bank::opbal(void)
{
	cout<<endl<<endl;
	cout<<"Enter Name :-\t";
	cin>>name;
	cout<<"Enter Ac no. :-\t";
	cin>>Ac;
	cout<<"Enter Ac type :-\t";
	cin>>actype;
	cout<<"Enter opening Balance :-\t";
	cin>>bal;
}

void Bank::deposite(void)
{
	int deposite =0;
	cout<<"Enter Deposite amount :-\t";
	cin>>deposite;
	bal=deposite+bal;
	cout<<"\n Deposite amount is :-\t"<<bal;
}

void Bank::withdraw(void)
{
	int withdraw;
	cout<<"\n Balance amount is :-\t"<<bal;
	cout<<"\n Enter Withdraw amount\t";
	cin>>withdraw;
	if(bal>withdraw)
	{
		bal=bal-withdraw;
		cout<<"\n After withdraw balance is :-\t"<<bal;
	}
	else
	{
		cout<<"\n\t Not enough balance";
	}

}

void Bank::display(void)
{
	cout<<endl<<endl<<endl;
	cout<<setw(50)<<"DETAILS"<<endl;
	cout<<setw(50)<<"Name "<<name<<endl;
	cout<<setw(50)<<"A/c No."<<Ac<<endl;
	cout<<setw(50)<<"A/c type"<<actype<<endl;
	cout<<setw(50)<<"Balance"<<bal<<endl;
	
}

int main()
{
	Bank b;
	int choice;
	
	do
	{
		cout<<"\n\n\n\t Banking System Program";
		cout<<"\n\nChoice List\n\n";
		cout<<"1) To assign Initial Value\n";
		cout<<"2) To Deposite\n";
		cout<<"3) To Withdraw\n";
		cout<<"4) To Display All Details\n";
		cout<<"5) EXITS\n";
		cout<<"Enter your choice :-";
		cin>>choice;
		
		switch(choice)
		{
			case 1: b.opbal();
			break;
			
			case 2: b.deposite();
			break;
			
			case 3: b.withdraw();
			break;
			
			case 4: b.display();
			
			case 5: goto end;
			
			
			default:
				cout<<"Enter valid choice";
				 
		}
	} while(1);
	
	end:
		
		return 0;
}
