#include<iostream>
using namespace std;

int sum_of_number(int n) {

	int total = 0;
	int term = 0; 


	for (int i = 1; i <= n; ++i) {
		 
		term += i;
	
		total += term;
	}

	return total;
}
int main(){
	int n;
		
	
	cout<<"ETER THE NUMBER OF SERIES :) ";
	cin>>n;
	
		if(n <= 0){
			cout<<"ENTER THE POSITIVE INTEGER :) "<<n<<endl;
}
else {
	int calculator = sum_of_number(n);
	
		cout<<"THE SUM OF SERIES UP TO "<< n <<"TH TERM IS :) "<<calculator<<endl;
	}
	return 0;
}

	
