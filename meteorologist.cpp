#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    double current = 0, count = 0, sum = 0, avg = 0, sumZero = 0, sumPlus = 0, sumMinus = 0, maxPlus = 0, minPlus = 0, maxMinus = 0, minMinus = 0;

    cout << "Hello, please add a temperature, from -100C to 100C" << endl << "If you want to end the program, please type a temperature lower than -100C or higher than 100C" << endl;

    while(current >= -100 && current <= 100)
    {
        cin >> current;
        if(current < -100 || current > 100)
            break;
        if(current == 0)
           sumZero++;
        else
           if(current > 0)
           {
               sumPlus++;
               if(current > maxPlus)
                   maxPlus = current;
               if(current < minPlus)
                   minPlus = current;
               if(minPlus == 0)
                   minPlus = current;
           }

        else
        {
            sumMinus++;
            if(current < maxMinus)
                maxMinus = current;
            if(current > minMinus)
                minMinus = current;
            if(minMinus == 0)
                minMinus = current;
        }

    count++;
    sum += current;
    avg = sum/count;

    }

    cout << endl << "The average temperature: " << avg << endl;
    cout << "The lowest plus temperature: " << minPlus << endl;
    cout << "The highest plus temperature: " << maxPlus << endl;
    cout << "The lowest minus temperature: " << minMinus << endl;
    cout << "The highest minus temperature: " << maxMinus << endl;
    cout << "Number of plus temperatures: " << sumPlus << endl;
    cout << "Number of minus temperatures: " << sumMinus << endl;
    cout << "Number of zero temperatures: " << sumZero << endl;

    return 0;
}
