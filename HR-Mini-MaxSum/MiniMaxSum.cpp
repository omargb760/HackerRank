//=========================================================
//Mini-Max Sum, challenge from hackerrank.com
//Your name: Omar Gonzalez
//Contact: omargb22@gmail.com
//Complier:  G++
//File type: Main
//this program is not user friendly is only meant to pass all the test cases for the challenge.
//=========================================================
#include <iostream>
#include <vector>
using namespace std;
const int MAX=5; //MAX set to 5 for hackerrank but can change to any size here

int main(){ //main function
  int value;
  long int sum=0;
  vector<int> ar; //Initializing empty vector ar

  for(int i=0; i<MAX; i++){//fill MAX intergers from user and perform sum
          cin>>value; //int value entered by user
          sum+=value; //perform sum long sum = sum + value
          ar.push_back(value); //pushing value into vector ar
        }
  //built in C++ function for sorting purpose
  sort(ar.begin(), ar.end()); //sort vector ar in order to calculate min and max
  //Printing Min sum " " then Max sum
  cout<< sum-ar[MAX-1]<<" "<<sum-ar[MAX-MAX];
  cout <<endl; //Endline

  return 0;  //End of Program
}
