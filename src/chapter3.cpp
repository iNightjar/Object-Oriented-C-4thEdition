
#include <bits/stdtr1c++.h>
//#include <conio.h>
// chapter 3
/*using namespace std;

int main() {  // relational operators
    int numb;
    cout<<"enter number" ;
    cin>>numb;
    cout<<"numb<10 is "<<(numb < 10) <<endl;
    cout<<"numb>10 is "<<(numb > 10) <<endl;
    cout<<"numb==10 is "<<(numb == 10) <<endl;

    /*
     int numb;
     for (numb=1;numb<=10;numb++){
         cout<<setw(4) << numb;
         int cube = numb * numb *numb;
         cout<<setw(6) << cube<<endl;
     }
     */
    /*unsigned int n ;
    unsigned long fac = 1;
    cout<<"enter number ";
    cin >> n;
    for (int j=n ; j > 0 ; j--)
        fac *=  j;
    cout<<"the factorail is : " << fac <<endl; */
    /*int chcount = 0 , wdcount = 1;
    char ch = 'a'; // ensure that it isn't '\r'
    cout<<"Enter a phrase: ";
    while (ch != '\r')
    {
        ch = getche(); // count non-space characters
        if (ch == ' ')
            wdcount++;
        else  chcount ++;
    }
    cout<< "Words : " <<wdcount <<"   "<<endl;
    cout<< "characters : " <<chcount-1 <<endl; */
    /*char dir =  'a';
    int x= 10 , y = 10;
    while (dir != '\r')
    {
        cout<<"Your location is : " << x << ", " << y <<endl;
        cout<< "Enter directions:(n,s,e,w) "<<endl;
        dir= getche();
        switch(dir) {
            case 'n' :
                y--;
                break;
            case 's' :
                y++;
                break;
            case 'e' :
                x--;
                break;
            case 'w' :
                x++;
                break;
            case '\r' :
                cout << "Exiting";
                break;
            default:
                cout << "Try again" << endl;
        }
    } }
*/

/*#include <bits/stdc++.h>
using namespace std;
// static local variables
float func(float newdata)
{
    static float total= 0 ;
    static float count = 0;
    count ++;
    total += newdata;
    return total / count;
}
int main ()
{
    float data = 1  , avg = 0 ;
    while (data != 0)
    {
        cout<<"enter numebr " <<endl;
        cin >>data;
        avg = func(data);
        cout<< "The average is : "<<avg <<endl;
    }
}*/

/*#include <bits/stdc++.h>
using namespace std;
struct a{
    string name;
    int age;
    void fuc(int val)
    {
        age = val;
    }
};
int main ()
{
    a a;
}*/
