#include <iostream>
#include <vector>
#include <random>
using namespace std;

struct customer{
	string  name;
	string surname;
    int age;
	int account_number;
    double balance;
};



int bal(){
	
	int fig;
	
		
	
	cout<<"your balance is"<<endl;
}

int with(){
	
	int b;
	
	cout<<"you have requested to withdraw your funds"<<endl;
	cout<<"please enter the ammount you wish to withdraw"<<endl;
	
	
}

int dep(){
	
	int b;
	
	cout<<"you have requested to deposit more funds"<<endl;
	cout<<"please enter the ammount you wish to  deposit  "<<endl;
	
	
}

//this creates an account and returns a struct with the account details
customer createAccount (string name, string surname , int age ){
    customer newaccount = {
        name,
        surname,
        age,
        generateAccountNumber(),
        0

    };

    return newaccount;
}

int generateAccountNumber(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(2300000000, 2399999999);
    int accountNumber = distribution(gen);
    return accountNumber;
}

int main() {
    //this is the array that stores the customers that you addd
	vector<customer> customer(10);
	int choice;
	/**
     * consider taking the blow into a function so that at any given point 
     * you can call it and go back to this menu in all of your other functions
    */
	cout<<"please select one of the following options"<<endl;
	cout<<"1.check balance"<<endl;
	cout<<"2.withdraw funds"<<endl;
	cout<<"3.deposit money"<<endl;
	cout<<"4.register as a new client"<<endl; 
	cin>>choice;
	
   
	if(choice==1){
		cout<<bal();
	}
	
	if(choice==2){
		cout<<with();
	}
	
	if(choice==3){
		cout<<dep();
	}
	
	if(choice==4){
      /**
       * In here i want you to  use the add account function that i declared above to add 
       * what it returns into then array of customer
       * research on how to add to an array -> array[0] = {1, "John", 4.5}; this is how arrays are used apply your mind and 
       * put together the remaining ppiece
      */
		for(int i=1;i<=1;i++){
			cout<<"client should enter name"<<endl;
			cin>>a[i].name;
			cout<<"client should enter surname"<<endl;
			cin>>a[i].surname;
			cout<<"client should enter his age"<<endl;
			cin>>a[i].age;
			cout<<"thank you for the details you have provided we will be in touch soon "<<endl;
			
		}
	}
	
	
	
	
	
	return 0;
}