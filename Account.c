#include <stdio.h>
#include <string.h>

typedef struct BankAccount
{
    int accountNo;
    char name[100];
    float balance;
} acc;

int main()
{
    acc acc1 = {123, "Shubham", 5000.0};
    acc acc2 = {124, "Rajat", 2000.0};
    acc acc3 = {125, "Nitesh", 3000.0};
    printf("Account no = %d\n", acc1.accountNo);
    printf("Account name = %s\n", acc1.name);
    printf("Account balance = %f\n", acc1.balance);

    printf("Account no = %d\n", acc2.accountNo);
    printf("Account name = %s\n", acc2.name);
    printf("Account balance = %f\n", acc2.balance);

    printf("Account no = %d\n", acc3.accountNo);
    printf("Account name = %s\n", acc3.name);
    printf("Account balance = %f\n", acc3.balance);
    return 0;
}
