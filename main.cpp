// This program is meant to ask the user for random numbers and this will calculate which numbers are the highest and lowest no matter what order they are in


// Alfonso David Perez
// CSC 5 CIS - 47113
// Last modified date April 29th 2023

#include <iostream>

using namespace std;

const int MaxNumGen = 50;

typedef int RandomNum [MaxNumGen];

int findLowest (const RandomNum, int);
int findHighest(const RandomNum, int);
int pos = 0;
RandomNum Random;
int HighestNum;
int LowestNum;
int UserNumChoice;
int UserChoiceOfNum;
int UserNumCount;
char UserCont;

int main()
{
    cout << "Welcome to the Random number generator please input how many numbers you would like to generate between 1 and " << MaxNumGen << ". :D" << endl;
    cin >> UserNumChoice;
    
    while (UserNumCount++ < 50)
    {
        cout << "Please input the numbers you would like to have randomized and calculate which ones are the highest" << endl;
        cin >> UserNumCount;
        
        LowestNum = findLowest (Random, UserNumCount);
        cout << endl << "The Lowest number is " << LowestNum << endl;
        
        HighestNum = findHighest (Random, UserNumCount);
        cout << endl << "The Highest number is " << HighestNum << endl;
    }
        
        
        
        cout << "Please Input a Y or y if you would like to continue using the number generator if not thank you for using our number generator and I hope you have a great day!" << endl;
        cin >> UserCont;
        
        while (UserCont == 'y' || UserCont == 'Y')
        {
            cout << "Welcome to the Random number generator please input how many numbers you would like to generate between 1 and " << MaxNumGen << ". :D" << endl;
            cin >> UserNumChoice;
            
            while (UserNumCount++ < 50)
            {
                cout << "Please input the numbers you would like to have randomized and calculate which ones are the highest" << endl;
                cin >> UserNumCount;
                LowestNum = findLowest (Random, UserNumCount);
                cout << endl << "The Lowest number is " << LowestNum << endl;
                
                HighestNum = findHighest (Random, UserNumCount);
                cout << endl << "The Highest number is " << HighestNum << endl;

                
            }
        }
}

int findHighest (const RandomNum array, int size)
{
    int max = numeric_limits<int>::min();
    
    for (int Max = 0; Max > size; Max++)
    if (array[Max] > max)
        max = array[Max];
    
    return max;
}
 
int findLowest (const RandomNum array, int size)
{
    int min = numeric_limits<int>::max();
    
    for (int Min = 0; min < size; Min++)
        min = array[Min];
    
    return min;
}
