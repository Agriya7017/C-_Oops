#include<iostream>
using namespace std;
class ATM {
	private:
		int Balance;
	public:
		ATM (int bal){
			Balance = bal;
		}
		int getBalance (){
			return Balance;
		}
		int Withdraw(int amount){
			if(amount > Balance){
				return false;
			}
			Balance = Balance - amount;
			return true;
		}
		void deposit(int amount){
			Balance = Balance + amount;
		}
};
 main(){
	ATM obj(500);
	int choice,amount,success;
	char op;
	
	do{
		system("cls");
	cout<<"1. View Balance"<<endl;
	cout<<"2. Cash withdraw"<<endl;
	cout<<"3. Cash depost"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"Enter your choice :)";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Your Balance :)"<<obj.getBalance();
			break;
		case 2:
			cout<<"Your  Avilable Balance :)"<<obj.getBalance()<<endl ;
			cout<<"Enter the amount to withdraw :)";
			cin>>amount;
			success = obj.Withdraw(amount);
			if(success){
				cout<<"Withdraw Successfull... *_*"<<endl;
			}
			else {
				cout<<"Incufficient Balance *_*"<<endl;
			}
			break;
			case 3:
				cout<<"Enter the Amont to Deposit :";
				cin>>amount;
				obj.deposit(amount);
				cout<<"Deposit Sucessfully...."<<endl;
			break;
			case 4:
				cout<<"Thanks for using ATM"<<endl;
				break;
			default:
				cout<<"Invalid Choice"<<endl;	
	}
	cout<<"\n Do you want to try another transiction {YES / NO} ";
	cin>>op;
	
	}while(op == 'y' || op == 'Y');
	
	
	
	
}
