/*
    [A geometric series sub element adder]
    
   START        STOP
     ↓           ↓
    [A B C D E F G] elements
     ↑ ↑ ↑ ↑ ↑ ↑ ↑
     ------------- PUBL_RATIO

    Code written by Lawrence Link.
    Sub organization LPD rights reserved.
*/
#include <iostream>
#include <cmath>

using namespace std;

unsigned START_AT = 1;
unsigned STOP_AT = 1024;
unsigned PUBL_RATIO = 2;

int main(){
    cout << "Please input a number which the series start with." << endl;
    cin >> START_AT;
    cout << "Now, enter the number which the series end with." << endl;
    cin >> STOP_AT;
    cout << "The Public Ratio is" << endl;
    cin >> PUBL_RATIO;

    cout << "CALCULATING STATRED.";

    static unsigned proc_num = START_AT;
    static int answer_final = 1;
        do{
            proc_num *= PUBL_RATIO;
            answer_final += proc_num;
            cout << answer_final <<endl;
        }while (proc_num != STOP_AT);
       cout << "This is the final answer." << endl;
       cout << answer_final << endl;
       system("PAUSE");
       return 0;
}
