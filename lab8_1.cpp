#include<iostream>
#include<iomanip>
using namespace std;

int main(){	
	double loan,rate,payment;
	cout << "Enter initial loan: ";
	cin>>loan;
	cout << "Enter interest rate per year (%): ";
	cin>>rate;
	cout << "Enter amount you can pay per year: ";
	cin>>payment;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int year = 1;
	double interest;
	double total;
	double newbalance = loan;

	do{
		cout << fixed << setprecision(2);
		cout << setw(13) << left << year; 
		cout << setw(13) << left << newbalance;
		interest = newbalance*(rate/100);
		cout << setw(13) << left << interest;
		total = interest + newbalance;
		cout << setw(13) << left << total;
		if(payment > total){
			payment = total;
		}
		cout << setw(13) << left << payment;
		newbalance = total-payment;
		cout << setw(13) << left << newbalance;
		cout<<"\n";
		year++;
	} while(payment < newbalance*(100+rate)/100);
	if(payment <= loan){
		cout << fixed << setprecision(2);
		cout << setw(13) << left << year;
		cout << setw(13) << left << newbalance;
		interest = newbalance*(rate/100);
		cout << setw(13) << left << interest;
		total = interest + newbalance;
		cout << setw(13) << left << total;
		cout << setw(13) << left << total;
		newbalance = 0.00;
		cout << setw(13) << left << newbalance;
	}
	return 0;
}
