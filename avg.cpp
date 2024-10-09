#include <iostream>
using namespace std;

int main() {
  int n;
  int ac;
  int ctr = 0;
  
  cout << "Entra 10 enteros: ";

  for (int i = 0; i < 10; i++) {
    cin >> n;
    ac += n;
    ctr++;
    
  }

  cout << "El promedio es :" << (ac / ctr) << endl;
  return 0;
}
