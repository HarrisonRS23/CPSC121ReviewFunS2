//header file gaurd code prevents the problem
//of double inclusion of a header file
//for more details see video in the 121 playlist

#ifndef VECFUNCS_H    // if not defined, convenction file capital and with underscore
#define VECFUNCS_H

#include <iostream>
#include <vector>

using namespace std;

void fillVector(vector<int>&); // prototype, & pass by reference
void findExtremes(vector<int>, int&, int&);

#endif