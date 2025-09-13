/*
 * Copyright by: Sachin
 * Date: 2025-09-01 22:45 am
 * PS(30): Write a C program to simulate an ATM machine with options: Balance
 * check, Deposit, Withdraw, Exit (Using switch and while).
 */

#include <stdio.h>

void main() {
  int option, balance = 150, amount;

  printf("Welcome to the ATM!\n");

  do {
    printf("\nATM Menu:\n");
    printf("\t(1)Balance check\n");
    printf("\t(2)Deposit\n");
    printf("\t(3)Withdraw\n");
    printf("\t(4)Exit\n: ");
    scanf("%d", &option);

    switch (option) {
    case 1:
      printf("Balance: %d\n", balance);
      break;
    case 2:
      printf("\nDeposite amount: ");
      scanf("%d", &amount);

      if (amount < 1) {
        printf("Plz enter a valid amount");
      } else {
        balance = balance + amount;
        printf("\nMoney Deposited, New Amount is: %d", balance);
      }
      break;
    case 3:
      printf("\nWithdraw amount: ");
      scanf("%d", &amount);

      if (amount < 1) {
        printf("Plz enter a valid amount");
      } else {
        balance = balance - amount;
        printf("\nMoney Withdrawed, New Amount is: %d", balance);
      }

      break;
    case 4:
      return;
      break;
    default:
      printf("Choose an valid option");
    }
  } while (option != 4);
}
