#include <iostream>
using namespace std;


int sum(int x,int y){
    return x+y;
}

int main(){
    int x,y;
    cin >> x>>y;
    cout << sum(x,y);
    return 0;

}

//q2
#include <iostream>
using namespace std;

int max(int x, int y)
{
    if(x>y)
        return x;
    else    
        return y;
}

int main()
{
    int x,y;
    cin >> x >> y;

    cout << max(x, y);

    return 0;
}


//q3
#include <iostream>
using namespace std;

bool prime(int n)
{ if(n <= 1)
        return false;

    for(int i = 2; i < n; i++)
    { if(n % i == 0)
            return false;
    }

    return true;
}

int main()
{  int n;
    cin >> n;

    if(prime(n))
        cout << "Prime";
    else
        cout << "Not Prime";
         return 0;
}

//q4
#include <iostream>
using namespace std;

int facto(int n)
{int fact = 1;

    for(int i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

int main()
{  int n;
    cin >> n;
    cout << facto(n);
    return 0;
}