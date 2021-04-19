#include <iostream>
#include <fstream>
using namespace std;

const int SIZE = 1000;

int sumacyfr(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
  
}

void zadanie() {
  ifstream plik("trojki.txt");
  
  int a, b, c;
  
  for (int i = 0; i < SIZE; i++) {
    plik >> a >> b >> c;
    if (sumacyfr(a) + sumacyfr(b) == c)
	{
		cout << a << " " << b << " " << c << endl;
	}
  }
  plik.close();
  cout << endl;
}

int main(int argc, char** argv) {
	zadanie();
	return 0;
}
