#include <stdio.h>

int main()
{
  int purchase_price, service_year, salvage_value, depreciation;

    printf("Enter Price of Item: ");
      scanf("%d", &purchase_price);

    printf("Enter Years of Service: ");
      scanf("%d", &service_year);

    printf("Enter Annual Depreciation(%): ");
      scanf("%d", &depreciation);

    salvage_value = -1*((depreciation *service_year) - purchase_price);

      printf("Salvage value Of that Item is : %d\n", salvage_value);

    return 0;
}
