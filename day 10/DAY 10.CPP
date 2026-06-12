#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5 - i; j++)
            cout << " ";

        for(int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
 cout << endl;
    }

    return 0;
}
// FORGET THE LOGIC FOR THE STAR PYRAMID
//Q2
#include <iostream>
using namespace std;

int main(){
    for(int i = 5; i >= 1; i--)
    {
        for(int j = 1; j <= 5 - i; j++)
            cout << " ";
        for(int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
 cout << endl;
    }

    return 0;}
    //Q3
    #include <iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5 - i; j++)
            cout << " ";

        for(int j = 1; j <= i; j++)
            cout << j;
         for(int j = i - 1; j >= 1; j--)
            cout << j;

        cout << endl;
    }

    return 0;
}
//Q4
#include <iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5 - i; j++)
            cout << " ";

        for(char ch = 'A'; ch <= 'A' + i - 1; ch++)
            cout << ch;
         for(char ch = 'A' + i - 2; ch >= 'A'; ch--)
            cout << ch;

        cout << endl;
    }

    return 0;
}

//PATTERN LOGIC FORGET