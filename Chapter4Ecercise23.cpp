/*FileName:Chapter4Exercise23.cpp
Programmer:Charles Sherwood
Date:2/25
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

    do {
        cout << "1-Area of Circle" << endl;
        cout << "2-Area of a Rectangle" << endl;
        cout << "3-Area of a Triangle" << endl;
        cout << "4-Exit" << endl;
        cin >> choice;

        if (choice < 1 || choice > 4)
            cout << "!!Please Make A Valid Choice!!";

        switch (choice)
        {
        case 1:
        {
            double Pi = 3.14159;
            double Radius;
            cout << "Please Enter the radius of the circle:";
            cin >> Radius;
            while (Radius<0)
            {
                cout << "Enter A Valid Numebr:"<<endl;
                cin >> Radius;
            }
            double AreaC = Pi * pow(Radius, 2);
            cout << fixed << setprecision(2) << "The Area of this circle is:" << AreaC << endl;
            cout << "------------" << endl;
        }
        break;
        case 2: 
        {
            double Length,Width;
            cout << "Please enter the length of the rectangle:";
            cin >> Length;
            cout << "Please enter the Width of the rectangle:";
            cin >> Width;
            double AreaR = Length * Width;
            cout << fixed << setprecision(2) << "The Area of the Rectangle is:" << AreaR << endl;
            cout << "------------" << endl;
        }
        break;
        case 3:
        {
            double Base, Height;
            cout << "Please enter the Base of the Triangle:";
            cin >> Base;
            cout << "Please enter the Height of the Triangle:";
            cin >> Height;
            double AreaT = Base * Height * 0.5;
            cout << fixed << setprecision(2) << "The Area of the Triangle is:" << AreaT << endl;
            cout << "------------" << endl;
        }
        break;


        }



    } while (choice != 4);
    cout << "!!!Thank Your For Using The Area Calculator!!!";
    
    
    
    
    
    
    

}
