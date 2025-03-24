#include <iostream>

#include "exercise.h"

using namespace std;

void mod_cross_sum(int I, int J)
{
    for( int i=0; i<I; i++)
    {
        for( int j=0; j<J; j++)
        {
            int res = i + j;

            if( res % 2 == 0){
                cout << "i=" << i << "; j=" << j << "; Gerade" << endl;
            } else {
                cout << "i=" << i << "; j=" << j << "; Ungerade" << endl;
            }
        }
    }
}
