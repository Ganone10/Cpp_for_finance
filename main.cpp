#include <iostream>
#include <math.h>
#include <iomanip>
#include "divisor.h"
#include "multiplier.h"
using namespace std;

/*Introduction to variables wit application to finance*/
/*Simulate a Mortgage*/
int main() {
    const int months_in_year = 12;
    const int percentDenominator = 100;
    double principal = 0.0; /*default value*/
    /*input ask the user some inputs*/
    cout << "Enter the principal value: ";
    cin >> principal;

    double interest_percentage = 0.0;
    cout << "Enter the interest percentage: ";
    cin >> interest_percentage;

    double interest_rate=divisor(interest_percentage,percentDenominator);

    int years_of_loan = 0;
    cout << "Enter the number of years of loan: ";
    cin >> years_of_loan;

    /*compute the monthly interest*/
    double month_interest = divisor(interest_rate,months_in_year);
    long months_of_loan = multiplier(years_of_loan,months_in_year);

    double payment=0.0;
    payment = principal*(month_interest/(1-(pow((double)1 +month_interest,(double)-months_of_loan))));

    cout << "Payment: "<< setiosflags(ios::fixed) << setprecision(2) << payment << endl;
    return 0;
}

/* functions in C++ */
