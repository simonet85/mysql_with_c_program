#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    Saving,
    Checking,
    MoneyMarket,
    CD
} AccountType;

void assignedInterestRate(AccountType account)
{
    double interest_rate;

    switch (account)
    {
    case Saving:
        interest_rate = 3.0;
        break;

    case Checking:
        interest_rate = 1.0;
        break;

    case MoneyMarket:
        interest_rate = 4.5;
        break;

    case CD:
        interest_rate = 7.0;
        break;

    default:
        abort();
    }
    printf("Interest rate %g \n", interest_rate);
    return;
}

int main(int argc, char *argv[])
{
    assignedInterestRate(Saving);
    return EXIT_SUCCESS;
}
