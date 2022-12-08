/*

Problem

You are provided an array A of size N that contains non-negative integers. Your task is to determine whether the number that is formed by selecting the last digit of all the N numbers is divisible by 10.

Note: View the sample explanation section for more clarification.

Input format

    First line: A single integer A denoting the size of array 
    Second line: N space-separated integers.

Output format

If the number is divisible by 10, then print Yes. Otherwise, print No.

Constrains:
    1<= N <= 10pow(5)
    0<= A[i] <= 10pow(5)

Explanation

Last digit of 85 is 5.
Last digit of 25 is 5.
Last digit of 65 is 5.
Last digit of 21 is 1.
Last digit of 84 is 4.
Therefore the number formed is 55514 which is not divisible by 10.


*/



#include <iostream>
#include <string>
using namespace std;

int main() {

    int N = 0;
    //User Input of how much data
    cin >> N;

    uint64_t *data = new uint64_t[N];


    //Put in data
    for (auto i = 0; i < N; i++)
        cin >> data[i];

    // write your code here
    string ans = "No";

    string tempNum;
    string finNumStr = "";
    uint64_t finNum;

    for (auto i = 0; i < N; i++)
    {
        tempNum = to_string(data[i]);

        finNumStr.push_back(tempNum.back());
    }

    finNum = stoi(finNumStr);
    if (finNum % 10 == 0)
    {
        ans = "Yes";
    }


    cout << ans;

    delete[] data;
    return 0;
}