//=========================================================
//Plus Minus
//Your name: Omar Gonzalez
//Contact: omargb22@gmail.com
//Complier:  G++
//File type: main
//this program is not user friendly is only meant to pass all the test cases for the challenge.
//=========================================================

#include <iostream>
#include<vector>
using namespace std;
/*
Function: plusMinus
Purpose: the purpose of this function is to calculate which fraction of its elements are positive, which fraction of its elements are negative, and which fraction of its elements are zeroes, respectively. Print the decimal value of each fraction on a new line.
*/
void plusMinus(vector <int> arr) {//calculating number of positive,negative and zero elements in the array
  int positive=0,negative=0,zero=0;
    for(int i=0; i<arr.size(); i++){
      if(arr[i]==0) //if zero then increment counter
        zero++;
      if(arr[i]>0)  //if positve than increment counter
        positive++;
      if(arr[i]<0)  //if negative than increment counter
        negative++;
    }
    //Outputing results
  cout << (double)positive/arr.size() << endl; //outputing positive fraction
  cout << (double)negative/arr.size() <<endl; //outputting negative fraction
  cout << (double)zero/arr.size() <<endl; //outputting zero fraction
}

int main() {//main function
    int n; //interger n
    cin >> n; //user eneter size of vector
    vector<int> arr(n); //initialzing vector
    for(int arr_i = 0; arr_i < n; arr_i++){// user enter elements in the array
       cin >> arr[arr_i];
    }
    plusMinus(arr); //call plusMinuse function
    return 0;// end of program 
}
