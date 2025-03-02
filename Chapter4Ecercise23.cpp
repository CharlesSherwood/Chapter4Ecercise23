/*FileName:Chapter4Exercise23.cpp
Programmer:Charles Sherwood
Date:3/25
Requirements:Lets users choose wether they want to 
calculate the area of a circle,rectangle, or a triangle
and does the math for them.
*/

    



#include<iomanip>
#include<cmath>         
#include <iostream>
using namespace std;


int main()
{
    
    int choice;
    //Display Choices For The User.
    do {
        cout << "1-Area of Circle" << endl;
        cout << "2-Area of a Rectangle" << endl;
        cout << "3-Area of a Triangle" << endl;
        cout << "4-Exit" << endl;
        cin >> choice;

        
        //Check If Choice Is Valid.
        if (choice < 1 || choice > 4)
            cout << "!!Please Make A Valid Choice!!"<<endl;
        cout << "----------------------------------------------" << endl;



        //Go Through The Options.Include breaks
        switch (choice)
        {
        //Option 1 area of a circle.
        case 1:
        {
            double Pi = 3.14159;
            double Radius;
            cout << "Please Enter the radius of the Circle:";
            cin >> Radius;
            while (Radius<=0)
            {
                cout << "Enter A Valid Numebr:";
                cin >> Radius;
            }
            double AreaC = Pi * pow(Radius, 2);
            cout << fixed << setprecision(2) << "The Area of this circle is:" << AreaC << endl;
            cout << "----------------------------------------------" << endl;
        }
        break;
        //Option 2 area of a Rectangle.
        case 2: 
        {
            double Length,Width;
            cout << "Please enter the length of the Rectangle:";
            cin >> Length;
            while (Length <= 0)
            {
                cout << "Enter A Valid Numebr:";
                cin >> Length;
            }
            cout << "Please enter the Width of the Rectangle:";
            cin >> Width;
            while (Width<= 0)
            {
                cout << "Enter A Valid Numebr:";
                cin >> Width;
            }
            double AreaR = Length * Width;
            cout << fixed << setprecision(2) << "The Area of the Rectangle is:" << AreaR << endl;
            cout << "----------------------------------------------" << endl;
        }
        break;
        //Option 3 Area of a Triangle.
        case 3:
        {
            double Base, Height;
            cout << "Please enter the Base of the Triangle:";
            cin >> Base;
            while (Base <= 0)
            {
                cout << "Enter A Valid Numebr:";
                cin >> Base;
            }
            cout << "Please enter the Height of the Triangle:";
            cin >> Height;
            while (Height <= 0)
            {
                cout << "Enter A Valid Numebr:";
                cin >> Height;
            }
            double AreaT = Base * Height * 0.5;
            cout << fixed << setprecision(2) << "The Area of the Triangle is:" << AreaT << endl;
            cout << "----------------------------------------------" << endl;
        }
        break;


        }


        //Keeps the loop going as long as its within the options.
    } while (choice != 4);


    //Display exit message.
    cout << "!!!Thank Your For Using The Area Calculator!!!"<<endl;
    cout << "----------------------------------------------" << endl;
    
    
    
    return 0;
}
