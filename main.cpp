#include <iostream>

using namespace std;

/*Introduction to variables wit application to finance*/
/*Simulate a Mortgage*/

/*void type pour function when return nothing*/
double divisor(double num,int den)
{
    // input: double, int
    // output: return the division between the two inputs
    double div = num/den;
    return(div);
}

double multiplier(double num_1,int num_2)
{
    // input: double, int
    // output: return the product between the two inputs
    double multip = num_1 * num_2;
    return(multip);
}

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

    cout << principal << " " << interest_rate << " " <<
    years_of_loan << " " << month_interest << " " << months_of_loan
    << endl;
    return 0;
}

/* functions in C++ */
