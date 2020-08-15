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

unsigned long START_AT;
unsigned long STOP_AT;
unsigned long PUBL_RATIO;

void calc_fail();
void multipleByC(long & _input);

int main()
{
    cout << "Please input a number which the series start with." << endl;
    cin >> START_AT;
    cout << "Now, enter the number which the series end with." << endl;
    cin >> STOP_AT;
    cout << "The Public Ratio is" << endl;
    cin >> PUBL_RATIO;

    if (cin.good())
    {

        cout << "CALCULATING STATRED." << endl;

        static unsigned long proc_num = START_AT;
        static long answer_final = START_AT;
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
    

        if (!calFailedFlag && cin.good())
        {
            cout << "This is the final answer." << endl;
            cout << answer_final << endl;
        }
    }
    else
    {
        cerr << "Input valid. Check if anything goes wrong, maybe you just entered characters?";
    }
    system("PAUSE");
    return 0;
}

void calc_fail()
{
    cerr << "\nCalculation failed. The answer does not exist." << endl;
}