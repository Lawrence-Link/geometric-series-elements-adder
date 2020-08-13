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

unsigned START_AT;
unsigned STOP_AT;
unsigned PUBL_RATIO;

void calc_fail();

int main()
{
    cout << "Please input a number which the series start with." << endl;
    cin >> START_AT;
    cout << "Now, enter the number which the series end with." << endl;
    cin >> STOP_AT;
    cout << "The Public Ratio is" << endl;
    cin >> PUBL_RATIO;

    cout << "CALCULATING STATRED." << endl;

    static unsigned proc_num = START_AT;
    static int answer_final = 1;
    static bool calFailedFlag = false;
    do
    {
        proc_num *= PUBL_RATIO;
        answer_final += proc_num;
        cout << answer_final << endl;

        if (answer_final < 0){ // NOT fine
            calc_fail();
            calFailedFlag = true;
            break;
        }

    } while (proc_num != STOP_AT);
    
    if (!calFailedFlag){
       cout << "This is the final answer." << endl;
       cout << answer_final << endl;
    }
    
    system("PAUSE");
    return 0;
}

void calc_fail()
{
    cout << "Calculation failed. The answer does not exist." << endl;
}