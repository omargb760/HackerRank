//=========================================================
//staircase, hackerrank.com challenges
//Your name: Omar Gonzalez
//Contact: omargb22@gmail.com
//Complier:  G++
//File type: Main
//this program is not user friendly is only meant to pass all the test cases for the challenge.
//=========================================================

#include <iostream>

using namespace std;

int main() {
    int n,sp,k; //interger n,sp and k initialized
    int w = 1; //interger w initialized to one

    cin >> n; //user input int n

    k = n-1; //int k will help to print one less space to fill with a hash

    for(int i = 0; i < n; i++){//algorithm to creating half triangle with hashes
      sp = k; //will serve to print necessarry spacing
      for(int space = 0; space < sp; space++){ //print necessarry spaces
        cout << " ";
      }
      for(int hash= 0; hash < w; hash++){ //fill left over space with hashes
       cout << "#";
      }
     cout << endl; // next line
     k--; //decrement k , for spacing
     w++; //increment w, for hashes
    }

    return 0; //end of program
}
