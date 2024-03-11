#include<iostream>
using namespace std;
class computer{
	public:
		
		int compute(int a=0, int b=0) {
			return a+b;
	}
		float compute(int a, float b) {
			return a+b;
	}
		double compute(int a, double b) {
			return a+b;
	}	
		int compute(char char1 , char char2) {
			return int(char1)+ int(char2);
	}
		int compute(char char1, int a) {
        	return int(char1) + a;
    }

    	int compute(int a, char char2) {
        	return a + int(char2);
    }	
};
   int main(){
   	computer.obj;
   	cout<<"1. Integer"<<obj.compute(12,56)<<endl;
   	cout<<"2. Integer-float"<<>obj.compute(12,5.6)<<endl;
   	cout<<"3. Integer-double"<<obj.compute(89,67)<<endl;
   	cout<<"4.Character"<<>obj.compute('a','b')<<endl;
   	cout<<"5. Character-integer  "<<obj.compute('a',56)<<endl;
   	cout<<"6. Integer-character"<<>obj.compute(12,'b')<<endl;
   	cout<<"7. no value provided"<<obj.compute()<<endl;
   
	return 0;	
}
