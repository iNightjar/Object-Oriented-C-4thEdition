//
// Created by Administrator on 1/10/2021.
//
/*
#include "quiz2.h"
#include <bits/stdtr1c++.h>
#include <conio.h>
// chapter 3
using namespace std;
bool even(int number)
{
    return number%2 == 0;
}
int main()
{ // checking the entered number is odd or even
    int numb ;
    cout<<"Enter Number: ";
    cin >> numb;
    if (even(numb))
        cout<<"the number is even"<<endl;
    else cout<<"the numebr is odd"<<endl;
} */
/*#include "bits/stdtr1c++.h"
using namespace std;
void max()
{
    int a, b, c ;
    cout<<"Enter 3 numbers:";
    cin >>a>>b>>c;
    if (a>b)
    {if( a>c) cout<<"Largest is : "<< a<<endl;}
    else {
        if (b>c)
            cout<<"Largest is : "<< b<<endl;
        else
        cout<<"Largest is : "<< c<<endl;
    }
}
int main()
{   // find largest number between three numbers from user
    max();
} */
/*#include <bits/stdc++.h>
using namespace std;
int main ()
{   // check a number n is prime or not
    int numb;
    bool flag;
    cout<<"Enter Number";
    cin >>numb;
    int dividable = numb/2; // dividing by numbers from 2 to >> numb/2
    try {
        for (int i = 2; i <= dividable; i++) {
            if (numb % i == 0) {
                flag = true;
                cout << numb << " is not a prime numebr" << endl;
                break;
            }
        }
        throw flag;
    }
    catch(bool f)
            { f = flag;
                if (!f)
                cout<<numb  << " is a prime numebr"<<endl; }
} */

/*#include <bits/stdc++.h>
using namespace std ;
void multiplicationTable() {
    long long number;
    cout<<"Enter Number";
    cin >>number;
    for (int i=1;i<=10;i++)
    {
        long long multi = number * i;
        cout<< number << " * "<<i<< " = " << multi <<endl;
    }
}
int main()
{ // generate a multiplication table
    multiplicationTable();
}*/
/*
#include <bits/stdc++.h>
using namespace std ;
int main()
{//reverse a number n
    string s; // Now we can enter any number not just n(1e7)
    cout<<"Enter Number";
    cin>>s;
    for (int i=s.length()-1;i>=0;i--)
        cout<<s[i];
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main ()
{ // display factors of a number
    long long number ;
    cout<<"enter number";
    cin>> number;
    for (long long i=number/2 ; i>=1;i--)
    {
        if (number %i == 0)
            cout<<i << " is a factor of " << number <<endl;
    }
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main()
{// make simple calculator to add, subtract, multiply and divide using switch
    double a,b;
    char operate;
    cout<<"Enter two numbers. Enter: + OR - OR * OR /"<<endl;
    cin >> a >>b>>operate;
    switch(operate)
    {
        case '+': cout<<"the result is " << a+b<<endl;break;
        case '-': cout<<"the result is " << a-b<<endl;break;
        case '*': cout<<"the result is " << a*b<<endl;break;
        case '/': if (b!=0) {cout<<"the result is " << a/b<<endl;}
                    else {cout<<"can't divide by zero"<<endl;};break;
        default: cout<<"Try again"; break;
    }
} */
/*#include <bits/stdc++.h>
using namespace std;
void armStrong()
{ // armStrong Number
    int number ;cin>>number;
    int sum=0, sum2 = 0;
    string d = to_string(number);
    for (int i = 0; number != 0; i++)
    {
        for (int g = 0; g<d.length(); g++)
        {
            sum *= number % 10;
        }
        sum2 += sum;
        number  =  number / 10;
    }
    if (sum2 == number)
    {
        cout << number << "An Armstrong Number";
    }
    else
    {
        cout << "Not An Armstrong Number";
    }
}
int main ()
{
   armStrong();
} */
/*#include <bits/stdc++.h>
using namespace std;
bool palindroma()
{//reverse a number n
    string s,a; // Now we can enter any number not just n(1e7)
    int i , j;
    cout<<"Enter Number";
    cin>>s;
    a = s;
    for ( i=s.length()-1, j = 0 ; i>=0 , j<s.length();j++,i--)
                s[j] = s[i];
    return a==s;
}
int main ()
{ // Check the number is palindrome or not using the function
    if (palindroma())
        cout<<"Number is palindrome "<<endl;
    else cout<<"Number is NOT palindroma"<<endl;
} */

/*#include <bits/stdc++.h>
using namespace std;
void Factors()
{
    // display factors of a number
    long long number ;
    cout<<"enter number";
    cin>> number;
    for (long long i=number/2 ; i>=1;i--)
    {
        if (number %i == 0)
            cout<<i << " is a factor of " << number <<endl;
    }
}
int main ()
{
    Factors();
} */
/*#include <bits/stdc++.h>
using namespace std;
 // quick sorting
void swap(int *a,int *b)
{ // add by reference
    int temp = *a;
    *a=*b;
    *b = temp;
}
int partition (int A[], int p, int r)
{
    int x = A[r];
    int i = p - 1;

    for (int j = p; j <= r- 1; j++)
    {
        if (A[j] <= x)
        {
            i++;
            swap (&A[i], &A[j]);
        }
    }
    swap (&A[i + 1], &A[r]);
    return (i + 1);
}

void quickSort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = partition(A, p,r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}
int main()
{
    int a[5]; for (int i=0;i<5;i++){ cin>>a[i];}
    int n = sizeof(a)/sizeof(a[0]);
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
} */
/*#include <bits/stdc++.h>
using namespace std;
// quick sorting && find the largest number in array
void swap(int *a,int *b)
{ // add by reference
    int temp = *a;
    *a=*b;
    *b = temp;
}
int partition (int A[], int p, int r)
{
    int x = A[r];
    int i = p - 1;

    for (int j = p; j <= r- 1; j++)
    {
        if (A[j] <= x)
        {
            i++;
            swap (&A[i], &A[j]);
        }
    }
    swap (&A[i + 1], &A[r]);
    return (i + 1);
}

void quickSort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = partition(A, p,r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}
int main()
{ // quick sorting the array and find the last index which is the biggest
    int a[5] =  { 3,22,56,234,3};
    int n = sizeof(a)/sizeof(a[0]);
    quickSort(a,0,n-1);


    cout<<"The largest number is : "<<a[n-1]<<endl;
    return 0;
} */
/*#include <bits/stdc++.h>
using namespace  std;
void multi()
{ // multi the multi array elements
    int cul = 3, row = 2;
    long long multiplication =1;
    int arr[row][cul];
    for (int i =0 ;i<row;i++)
        for (int j=0;j<cul;j++)
        {cin>>arr[i][j];
            multiplication *= arr[i][j];}
    cout<<"The Result is : "<<multiplication<<endl;
}
int main ()
{
    multi();
} */
/*
#include <bits/stdc++.h>
using namespace std;
// function to find the square root of user input
// Hint:https://www.geeksforgeeks.org/c-program-to-find-square-root-of-a-given-number/
void squareRoot()
{
    int number;cin>>number;
    int str = 0 , end = number ;
    float answer ;
    while (str <= end){
        int mid = (str + end) /2;
        if (mid * mid == number)
        {
            answer = mid ;
            break;
        }
        if ( mid * mid < end)
        {
            str = mid + 1 ;
            answer = mid;
        }
        else {
            end = mid -1;
        }
    }
    float increament = 0.1;
    for (int i = 0; i < 5;i++) {
        while (answer * answer <= number) {
            answer += increament;
        }
        answer = answer - increament;
        increament = increament / 10;
    }
    cout<< "the square root is " << answer <<endl;
}
int main ()
{
    squareRoot();
} */
/*#include <bits/stdc++.h>
using namespace std;
void time(int h, int m, int s)
{
    cout<<"Hours:Minutes:Seconds = "<<h<<":"<<m<<":"<<s<<endl;
}
int main ()
{
    int hours,minutes,seconds ;
    cin>>hours>>minutes>>seconds;
    time(hours,minutes,seconds);
} */
/*#include <bits/stdc++.h>
using namespace std;
void nCalled()
{
    static int count= 0 ;
    count++;
    cout<<"I have been called "<<count<< " times"<<endl;
}
int main()
{
    for (int i = 1;i<5;i++)
    {
        nCalled();
    }
} */
/*#include "bits/stdc++.h"
using namespace std;
void swap(int &x, int &y) // pass by reference
{

    int temp = x ;
    x = y;
    y = temp;
}
int  main ()
{
    int x = 10 , y = 5;
    swap(x,y);
    cout<< "x= "<<x << "  ||  " << "y= "<<y <<endl;
}*/
