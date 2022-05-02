#include <stdio.h>

int main(void) {
  unsigned int salary, deductible;
  scanf("%u", &salary);
  if (salary <= 500) {
    deductible = salary * 0.7;
  } else if (salary <= 1500) {
    deductible = 350+(salary - 500)*0.4;
  } else if (salary <= 4500) {
    deductible = 750+(salary - 1500)*0.15;
  } else if (salary <= 10000) {
    deductible = 1200+(salary-4500)*0.05;
  } else {
    deductible = 1475+(salary-10000)*0.02;
  }
  printf("%u", deductible);
  return 0;
}