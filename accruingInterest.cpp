#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

double accuringInterest(double amount, double noOfMonths, double accruedInterest)
{
    int i = 1;
    double interest, interestConstant;
    interestConstant = accruedInterest / 100;

    while (i <= noOfMonths)
    {
        accruedInterest = amount * interestConstant;
        amount += accruedInterest;
        interest += accruedInterest;
        i++;
    }
    interest = interest * 100;
    interest = floor(interest);
    interest = interest / 100;

    return interest;
}

int main()
{
  double interest, loan, months, accruedInterest;

  cout << "Type in loan amount: ";
  cin >> loan;

  cout << "Type in months amount: ";
  cin >> months;

  cout << "Type in interest: ";
  cin >> interest;

  accruedInterest = accuringInterest(loan, months, interest);
  cout << "You have to pay totally: " << loan + accruedInterest;

  return EXIT_SUCCESS;
}
