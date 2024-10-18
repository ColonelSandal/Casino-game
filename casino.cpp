#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main () {
	int money=10, betting, guess;
	cout<<"Your current balance is: "<<money<<endl;
	while (money!=0){
	cout<<"How much money do you want to bet? ";
	cin>>betting;
	if (betting>money) {
		cout<<"The betting amount is over your current balance. Please enter again: "<<endl;
	}
	else {
		cout<<"Pick a random number from 1 to 10: ";
		cin>>guess;
		srand(time(0));
		int number=rand()%10 + 1;
		cout<<"The number is: "<<number<<endl;
		if (number==guess) {
			money=money+(betting*2);
			cout<<"Congratulations! You won"<<endl<<"Your current balance is: "<<money<<endl; 
		}
		else {
			money=money-betting;
			cout<<"You lost! Better luck next time!"<<endl<<"Your current balance is: "<<money<<endl;
		}
		if(money>=1000) {
			cout<<"You have become the world's richest man!";
			break;
		}
		}
	}
	cout<<"You've ran out of money!";
}
