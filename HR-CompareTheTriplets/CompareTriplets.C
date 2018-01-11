//=========================================================
//CompareTriplets
//Your name: Omar Gonzalez
//Contact: omargb22@gmail.com
//Complier:  G++
//File type: main
//this program is not user friendly is only meant to pass all the test cases for the challenge.
//=========================================================
#include <iostream>
using namespace std;
const int TRIPLETS=3; //Const for Triplets

int main() {// main function
    int aliceResult=0;//trackers for score
    int bobResult=0;//trackers for score

    int alice[TRIPLETS]; //Alice
    for(int i=0; i<TRIPLETS;i++){//inputing alice triplets
      do {//eneter ith constrains
        cin>> alice[i];
      } while(alice[i]<0 || alice[i]>100);

    }
    int bob[TRIPLETS];// Bob
    for(int i=0; i<TRIPLETS;i++){//inputing bobs triplets
      do {//enter with contrains
        cin>> bob[i];
      } while(bob[i]<0 || bob[i]>100);
    }
    for(int i=0;i<TRIPLETS;i++){//checking
        if(alice[i]>bob[i])
            aliceResult++;
        if(alice[i]<bob[i])
            bobResult++;
    }
    //outputing results
    cout << aliceResult <<" " <<bobResult<< " " <<endl;
    return 0;
}
