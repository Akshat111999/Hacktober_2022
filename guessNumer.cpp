#include <iostream>  // standard input output library
#include <ctime>
#include <cstdlib>  // library for including srand() and rand() functions
using namespace std;
int main() 
{
    // Initialize random number generator.
    // time() is used because every time the program run,
    // it produces a new random number.
    // If we pass srand(1) then every time we run the program,
    // same number will be produced.
    // Eg- if 82 is generated, then everytime we run this program using srand(1),
    // then 82 is that random number. Thats why, we used time() for generating
    // a new random number everytime we run the program.
    srand(time(0));

    // storing the random number in random variable
    // using the modulo operation define the range of the numbers
    // like % 100 will provide a range of 0 - 100
    int random = (rand() % 100) + 1;
    
    int number;
    cout<<"Guess a magic number between 1 to 100:"<<endl;
    
    // loop is used to trigger the input again and again
    // till you guess the right number
    while (true)
    {
        cout<<"\nEnter your Guess: ";
        cin>>number;
        // if input is greater than random number
        if (number > random)
        {
            cout<<"Your guess is too High";
        }
        // if input is less than random number
        else if (number < random)
        {
            cout<<"Your guess is too Low";
        }
        // if you guess the correct number
        else
        {
            cout<<"Yes, you guessed the right number "<<random;
            break;
        }
    }
    
    return 0; 
}