#include <iostream>
#include <limits.h>

using namespace std;

int getCheapestPasta (int pastas[3]) {
  int cheapestPasta = INT_MAX;
  int i = 0;
  while(i < 3) {
    if (pastas[i] < cheapestPasta) {
      cheapestPasta = pastas[i];
    }
    i++;
  }
  return cheapestPasta;
}

int getCheapestJuice (int jucies[3]) {
  int cheapestJucie = INT_MAX;
  int i = 0;
  while(i < 2) {
    if (jucies[i] < cheapestJucie) {
      cheapestJucie = jucies[i];
    }
    i++;
  }
  return cheapestJucie;
}

float getBill (int cheapestPasta, int cheapestJucie) {
  float sum = cheapestPasta + cheapestJucie;
  return (sum + sum / 10);
}

int main (void) {
  int pastas[3];
  int juices[2];
  
  int n = 0;
  while(n < 3) {
    cin >> pastas[n];
    n++;
  }

  n = 0;
  while (n < 2) {
    cin >> juices[n];
    n++;
  }

  int cheapestPasta = getCheapestPasta(pastas);
  int cheapestJuice = getCheapestJuice(juices);
  float totalBill = getBill(cheapestPasta, cheapestJuice);
  cout << fixed;
  cout.precision(1);
  cout << totalBill;
  return 0;
}

