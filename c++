#include <iostream>
#include<cmath>

using namespace std;

double PV(double PMT, double r, int n) {
	return (PMT/(r*(1+(1/(pow(1+r, n)-1)))));
	}
	

int main (){
	int n;
	double r, PMT;	
	
	// Providing Values
	int NumberofPeriods;
	double  InterestRate, PresentValue, Instalment;
	
	cout << "Please provide:" << endl;
	cout << "Number of periods:"; cin >> NumberofPeriods;
	cout << "Interest Rate:"; cin >> InterestRate;
	cout << "Instalment:"; cin >> Instalment;
	
	n = NumberofPeriods;
	r = 0.01*InterestRate;
	PMT = Instalment;
	
	cout << "PV:" <<  PV(PMT, r, n) << endl;

}
