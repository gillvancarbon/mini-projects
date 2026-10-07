#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string name;
	int age;

	//asks the user for needed data
	cout<<"Enter Name: ";
	cin>>name;
	cout<<"Enter Age: ";
	cin>>age;
	
	if ((age >= 18) && (age <=100)){
		
		cout<<"You're an adult."<<endl;
	}	
	else if ((age >= 1) && (age <= 17)){
		
		cout<<"You're young."<<endl;
	}
	else{
		
		cout<<"Invalid age!"<<endl;
	}
	

	return 0;
}
