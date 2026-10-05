#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string name;
	int age;

	//Asks the user for the personal information
	cout<<"Enter Name: ";
	cin>>name;
	cout<<"Enter Age: ";
	cin>>age;

	//checks the users ge if they're an adult, young or it's an invalid age
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
