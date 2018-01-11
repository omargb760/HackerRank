//=========================================================
//Diagonal Difference, challenge from hackerrank.com
//Your name: Omar Gonzalez
//Contact: omargb22@gmail.com
//Complier:  G++
//File type: main
//this program is not user friendly is only meant to pass all the test cases for the challenge. 
//=========================================================
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

using namespace std;

//Prototype
int diagonalDifference(vector < vector<int> >&a);

int main() {
    int n;
    cin >> n; //enter size of matrix
    vector < vector <int> > a (n,vector<int>(n));

    for(int row = 0; row < n ; row++){//fill in matrix
       for(int colum = 0;colum < n; colum ++){
          do {//constraints
            cin >> a[row][colum];
          } while(a[row][colum]<-100 || a[row][colum]> 100);
       }
    }

    int result = diagonalDifference(a);
    cout << result << endl;
    return 0;//end of program
}
/*
function: diagonalDifference
Purpose: the purpose of this function is to calcualte the absulute diagonal difference between the primary and secondary diagonals.
*/
int diagonalDifference(vector < vector<int> >& a){
  int Primary=0,Secondary=0;
  int counter=0,row=0,colum=0;

  do {//calculating primamry row
    Primary= Primary + a[row][colum];
    row++;
    colum++;
    counter++;
  } while(a.size()!= counter);
  row=0;
  counter=0;
  colum = a.size()-1;
  do {// calculating secondary diagonal
    Secondary= Secondary + a[row][colum];
    row++;
    colum--;
    counter++;
  } while(a.size()!= counter);

  //calculating absulute diagonal Difference
  int Result;
  Result = abs(Primary - Secondary);

  return Result; //returning Result
}
