/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    // This array can store upto 400 elements (20x20x3)
    int test[20][20][3] = {
                            {//position 0 and 1 values
                                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0...}, //size 20x20
                                {0, 0, 0, 0, 0,...},//to do
                                {//}
                            }, 
                            {//human sensoring matrix 0:far cell/ 0.3:close cell/ 0.6: too close cell/ 1: human cell
                                {0, 0, 0, 0, 0, 0, 0.3, 0.6, 1, 0.6, 0.3, 0, 0, 0, 0, 0, 0, 0.3, 0.6, 1},
                                {0, 0, 0, 0, 0, 0.3, 0.3, 0.6, 0.6, 0.6, 0.3, 0, 0, 0, 0, 0, 0, 0.3, 0.6, 0.6},
                                {0, 0, 0, 0.3, 0.6, 0.6, 0., 0.3, 0.3, 0.3, 0.3, 0, 0, 0, 0, 0, 0, 0.3, 0.3, 0.3}, //size 20x20
                                {0, 0, 0.3, 0.6, 1, 0.6, 0.3} //to do
                            },
                            {
                                {...},//to do : wall sensoring matrix 
                                
                            }
                            
                        };

    // Displaying the values with proper index.
    for (int i = 0; i < 2; ++i) { //to do
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << "test[" << i << "][" << j << "][" << k << "] = " << test[i][j][k] << endl;
            }
        }
    }

    return 0;
}
