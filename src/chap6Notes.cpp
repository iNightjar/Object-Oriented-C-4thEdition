// Created by Administrator on 1/22/2021.
// OBJECT ORIENTED PROGRAMMING

/*#include <bits/stdc++.h>
using namespace std;
// defining a class firstClass
class firstClass { // class declaration ( class + class name )
private: // access modifier
    int data;   // member data or methods and functions
public : // access modifier
    void setData(int d) { // setting a variable called d equal to data
        data = d;
    }

    int getdata()
    {   // returning data
        return data;
    }
    void displayData()
    { // displaying data
        cout<<"the data is : "<<data<<endl;
    }
};
int main ()
{
    firstClass a; // now using the class like a non-primitive data type.
    int var = 10;
    a.setData(10);
    a.displayData();
}
*/
/*#include <graphics.h>
using namespace std;
int main ()
{

    int gd = DETECT, gm;
    initgraph(&gd, &gm , (char*)"");
    circle(320,240,200);
    getch();
    closegraph();
    return 0;
}*/

// objpart.cpp
// widget part as an object
/*#include <bits/stdc++.h>
using namespace std;
class part //define class
{
private:
    int modelnumber; //ID number of widget
    int partnumber; //ID number of widget part
    float cost; //cost of part
public:
    void setpart(int mn, int pn, float c) //set data
    {
        modelnumber = mn;
        partnumber = pn;
        cost = c;
    }
    void showpart() //display data
    {
        cout << "Model: " << modelnumber;
        cout << ", part " << partnumber;
        cout << ", costs $" << cost << endl;
    }
};
int main()
{
    part part1; //define object
// of class part
    part1.setpart(6244, 373, 217.55F); //call member function
    part1.showpart(); //call member function
    return 0;
} */


/*
#include <bits/stdc++.h>
using namespace std;

class Box
{
public: // access modifier
    double length;         // Length of a box
    double breadth;        // Breadth of a box
    double height;         // Height of a box

    // Member functions declaration
    double getVolume(void);
    void setLength( double len );
    void setBreadth( double bre );
    void setHeight( double hei );
};

// Member functions definitions
double Box::getVolume(void)
{
    return length * breadth * height;
}

void Box::setLength( double len )
{
    length = len;
}

void Box::setBreadth( double bre )
{
    breadth = bre;
}

void Box::setHeight( double hei )
{
    height = hei;
}

// Main function for the program
int main( )
{
    Box Box1;                // Declare Box1 of type Box
    Box Box2;                // Declare Box2 of type Box
    double volume = 0.0;     // Store the volume of a box here

    // box 1 specification
    Box1.
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    // box 2 specification
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    // volume of box 1
    volume = Box1.getVolume();
    cout << "Volume of Box1 : " << volume <<endl;

    // volume of box 2
    volume = Box2.getVolume();
    cout << "Volume of Box2 : " << volume <<endl;
    return 0;
} */
/*#include <bits/stdc++.h>
using namespace std;
class conStructor{
    // Automatic initialization by constructor ( a member function).
private:int data;
public:
    conStructor(){ // empty constructor
        // empty body
    }
    void set(int val)
    { // setting data equal to val
        data = val;
    }
    int get() // outputing data
    {
        return  data;
    }
};
int main(){
    conStructor c;
    c.set(10);
    cout<<"the data is : "<<c.get()<<endl;
}*/

// destructor
/*#include "bits/stdc++.h"
using namespace std;
class Foo
{
private:
    int data;
public:
    Foo() : data(0) //constructor (same name as class)
    { }
    ~Foo()
    { cout<<"bye bye"<<endl;} //destructor (same name with tilde)
    //is a member function that is invoked
    // automatically when the object goes out of scope
};
int main()
{
    Foo a;
    a;
}
*/
/*#include <bits/stdc++.h>
using namespace std;
// function returns value of type Distance
// just another example to note that class is used in main function as a datatype(non-primitive)
class Distance //English Distance class
{
private:
    int feet;
    float inches;
public: //constructor (no args)
    Distance() : feet(0), inches(0.0)
    { } //constructor (two args)
    Distance(int ft, float in) : feet(ft), inches(in)
    { }
    void getdist() //get length from user
    {
        cout << "\nEnter feet: "; cin >> feet;
        cout << "Enter inches: "; cin >> inches;
    }
    void showdist() //display distance
    { cout << feet <<  "  " << inches ; }
    Distance add_dist(Distance); //add
};
//--------------------------------------------------------------
//add this distance to d2, return the sum
Distance Distance::add_dist(Distance d2)
{
    Distance temp; //temporary variable
    temp.inches = inches + d2.inches; //add the inches
    if(temp.inches >= 12.0) //if total exceeds 12.0,
    { //then decrease inches
        temp.inches -= 12.0; //by 12.0 and
        temp.feet = 1; //increase feet
    } //by 1
    temp.feet += feet + d2.feet; //add the feet
    return temp;
}
int main()
{
    Distance dist1, dist3; //define two lengths
    Distance dist2(11, 6.25); //define, initialize dist2
    dist1.getdist(); //get dist1 from user
    dist3 = dist1.add_dist(dist2); //dist3 = dist1 + dist2
//display all lengths
    cout << "\ndist1 = "; dist1.showdist();
    cout << "\ndist2 = "; dist2.showdist();
    cout << "\ndist3 = "; dist3.showdist();
    cout << endl;
    return 0;
} */

//const member functions
/*#include "bits/stdc++.h"
using namespace std;
class aClass
{
private:
    int alpha =0;
public:
    void nonFunc() //non-const member function
    {alpha  = 99; } //OK
    void conFunc()  //const member function
    {  alpha = 100; }//ERROR: can’t modify a member
    void display() const
    {
        cout<< "the value is : "<<alpha<<endl;
    }
};
int main()
{
    const aClass a;
    a.display();
}*/

// static class data
/*#include <bits/stdc++.h>
using namespace std;
class foo
{
private:
    static int count; //only one data item for all objects
                        //note: “declaration” only!
public:
    foo() //increments count when object created
    { count++; }

    int getcount() //returns count
    { return count; }
};
int foo::count = 5; //definition of count :: out of class scope..
// countt = 0 static ++ ++ ++
int main()
{
    foo f1; //create three objects
    cout << "count is : "<< f1.getcount() << endl; //each object
   // cout << "count is : "<< f2.getcount() << endl; //sees the
    //cout << "count is : "<< f3.getcount() << endl; //same value
    return 0;
}
*/
// THANKS..