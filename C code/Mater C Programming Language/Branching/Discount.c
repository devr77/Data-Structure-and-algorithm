
#include <stdio.h>

int main() {
  double quantity, rpu, amount;

  printf("Enter rate per unit");
  scanf("%lf", &rpu);

  printf("Enter quantity ");
  scanf("%lf", &quantity);

  amount = quantity * rpu;

  if (amount > 500)
     amount = amount * 0.9;

  printf("Calculated net amount %lf\n", amount);

  return 0;
}
