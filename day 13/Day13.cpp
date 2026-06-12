//q1
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
     int a[n];

     for(int i=0;i<n;i++){
        cin>>a[i];
      
     }
     cout<<"elements are";
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
     }
     return 0;
}
//q2

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
     int a[n];
     int sum=0;

     for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
      
     }
     cout<<"sum="<<sum;

     float avg=(float)sum/n;
     cout<<"avg"<<avg;

     return 0;}


     //q3
     #include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i<n; i++)
        cin >> a[i];

    int largest = a[0];
    int smallest = a[0];

    for(int i = 1; i<n; i++)
    {
        if(a[i] > largest)
            largest = a[i];

        if(a[i] < smallest)
            smallest = a[i];
    }
 cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest;

    return 0;
}
//q4
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
 int a[n];
    int even = 0, odd = 0;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even = "<< even<<endl;
    cout << "Odd = "<< odd;

    return 0;
}
