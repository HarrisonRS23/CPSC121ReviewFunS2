#include "vecFuncs.h"

int main() {
  
  vector<int> userNums;
  cout << "Hello World!\n";

  fillVector(userNums);
  cout << "size: " << userNums.size() << endl;


  int min, max;
  findExtremes(userNums, min, max);
  cout << "min: " << min << " max: " << max << endl;
}


