//=========================================================
//Birthday Cake Candles, challenge from hackerrank.com
//Your name: Omar Gonzalez
//Contact: omargb22@gmail.com
//Complier:  G++
//File type: main
//this program is not user friendly is only meant to pass all the test cases for the challenge.
//=========================================================
#include <iostream>
#include<vector>
using namespace std;

//Prototype function
int birthdayCakeCandles(int n, vector <int> ar);

int main() {//main function
    int n; //interger n
    cin >> n; //user enter how many candles to blow
    vector<int> ar(n);//Initializing vecotr ar size n

    for(int ar_i = 0; ar_i < n; ar_i++){ //entering each candels height
      do {//Constraints 1<= height <10^7
         cin >> ar[ar_i];
      } while(ar[ar_i]<1 || ar[ar_i]>100000000);

    }

    sort(ar.begin(), ar.end()); //sorting vector ar according to height
    int result = birthdayCakeCandles(n, ar); //calling birthdayCakeCandles to get result
    cout << result << endl; //outputing result to user

    return 0;//end of program
}
/*
function: birthdayCakeCandles
purpose: to determine how many candles Colleen will blow out, the tallest candles should be the only ones that get blown out.
*/
int birthdayCakeCandles(int n, vector <int> ar) {
    long blowsOut=0; //interger blowOut set to 0
    int check=ar[n-1]; //interger check contains the largest candle's height
    for(int i=ar.size();i>=0;i--){ //algorithm to calculate how many candles with the largest height there is
      if(check==ar[i])
        blowsOut++;
    }
    return blowsOut;// return result to main
  }
