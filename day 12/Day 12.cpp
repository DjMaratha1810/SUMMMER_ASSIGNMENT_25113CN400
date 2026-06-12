//Q 1
#include <iostream>
using namespace std;


bool palindrome(int n){
    int rev;
    int temp=n;
    while(n>0){
        int d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    return rev==temp;
}
int main(){
    int n;
    cin >> n;
    if (palindrome(n))
     cout << "palindrome";
    else
        cout << "no palindrome";
    
    return 0;}

 //Q2
#include <iostream>
#include <cmath>
using namespace std;

bool armstrong(int n)
{
    int temp = n;
    int digit = 0;

    while(temp > 0)
    {// for check no.of digit for 4,5 baki same
        digit++;
        temp /= 10;
    }

    temp = n;
    int sum = 0;

    while(temp > 0)
    {
        int digi = temp % 10;
        sum += pow(digi, digit);
        temp /= 10;
    }

    return sum == n;
}
int main()
{
    int n;
    cin >> n;

    if(armstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}
//Q3
#include <iostream>
using namespace std;

void fibonacci(int n)
{
     int a = 0, b = 1, c;

    for(int i = 1; i <= n; i++)
    {
        cout << a << " ";
         c = a + b;// PEHLE HMESHA C KA INPUT AAEGA 
        a = b;
        b = c;
    }
}

int main(){

    int n;
    cin >> n;
 fibonacci(n);

    return 0;
}
//q4

#include <iostream>
using namespace std;

bool no(int n)
{
    int sum = 0;
//factorial ka sum hi krna hai
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum = sum + i;
    }

    return sum == n;
}

int main()
{
    int n;
    cin >> n;

    if(no(n))
        cout << "Perfect Number";
    else
        cout << "no Perfect Number";

    return 0;
}