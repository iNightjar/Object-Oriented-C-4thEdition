// Created by Administrator on 2/6/2021.
/*
#include <bits/stdc++.h>
using namespace std;
int main() { // find the average of given array elements
    double total = 0;
    int size = 4;
    int arr[size];
    for (int i=0;i<size;i++)
    {
        cout<<"element "<< i+1 << " is equal to : "<<endl;
        cin>>arr[i];
    }
    for (int i=0;i<size;i++)
    {
        total += arr[i];
    }
    cout<<"the average of elements is : "<<total/size <<endl;
} */
/*
#include <bits/stdc++.h>
using namespace std;
class Stack{
private:
    static const int max = 10; // enum{ max =10};
    int arr[max];
    int top;
public:
    Stack()
    {
        top = 0;
    }
    void push(int var)
    {
        arr[top++] = var;
    }
    int pop()
    {
        return arr[--top];
    }
};
int main()
{// stack with push and pop
    Stack s;
    s.push(12);
    cout<<"Top is : "<<s.pop()<<endl;
    s.push(11);
    cout<<"Top is : "<<s.pop()<<endl;
    s.push(3);
    cout<<"Top is : "<<s.pop()<<endl;
    s.push(42);
    cout<<"Top is : "<<s.pop()<<endl;
    s.push(2);
    cout<<"Top is : "<<s.pop()<<endl;
    s.push(354);
    cout<<"Top is : "<<s.pop()<<endl;
    s.push(4);
    cout<<"Top is : "<<s.pop()<<endl;
    s.push(5);
    cout<<"Top is : "<<s.pop()<<endl;
    s.push(10);
    cout<<"Top is : "<<s.pop()<<endl;
    s.push(31);
    cout<<"Top is : "<<s.pop()<<endl;
} */
/*
// string manipulation
#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int max = 100;
    char str[max];
    cout<< "Enter string"<<endl;
    cin.get(str,max);
    cout<< "string entered is : "<<str<<endl;
    return 0;
} */
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // accessing characters in string objects
    char a[100];
    string word;
    cout<<"enter a word"<<endl;
    cin>>word;
    int wlength = word.length();
    cout<< "one char at a time : ";
    for (int i= 0 ;i<wlength ; i++)
    {
        cout<<word.at(i);
        cout<<word[i];
    }
    word.copy(a,wlength,0);
    a[wlength] = 0  ;
    cout<<"\narray contains: "<<a<<endl;
    return 0;
}
*/