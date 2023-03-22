#include <iostream>
#include <iomanip>
using namespace std;

void getInput (int &, int &, int &);
int findMin (int, int, int);
void printResult (int, int, int, int);


void getInput (int &n1, int &n2, int &n3)
{
    cin >> n1 >> n2 >> n3;
}

int findMin (int n1, int n2, int n3)
{
    int min;
    if (n1<n2 && n1<n3)
        {
            min = n1;
            return n1;
        }
    else if (n2<n1 && n2<n3)
        {
            min = n2;
            return n2;  
        }
    else 
        {
            if (n3<n1 && n3<n2)       
                {
                    min = n3;
                    return n3;            
                }
        }
}

void printResult (int n1, int n2, int n3, int min)
{
    cout << "Your input was: " << n1 << " " << n2 << " " << n3;
    cout << "The min value is: " << min;
}
