//=========================================================
//A very Big sum
//Your name: Omar Gonzalez
//Contact: omargb22@gmail.com
//Complier:  G++
//File type: Main
//=========================================================

#include <iostream>
#include<vector>
using namespace std;

long aVeryBigSum(int n,vector<long>& ar){
    long result=0;
    for(int i=0;i<n;i++){
        result = result + ar[i];
    }
    return result;
}

int main() {
    int n;

    do{//constraint
    cin >> n;
    }while(n<0 || n>10);

    vector<long> ar(n);

    for(int i = 0;i < n;i++){//enetering number into vector for sum purpose 
       do{//constraint
        cin >> ar[i];
      }while(ar[i]<0 || ar[i]>10000000000);
    }

    long result = aVeryBigSum(n, ar);
    cout << result << endl;//show result

    return 0; //end of program
}
