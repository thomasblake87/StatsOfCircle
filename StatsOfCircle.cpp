/*
The user input will be the points used. It asks them which points they want, and they input them.

The process will basically be that the main function will take the points they input, then call each of the functions which have their own formulas, 
and print the numbers returned from each function

The output should be the radius, circumference, and area
*/


#include <iostream>
#include <cmath>

using namespace std;

double calcDistance(int x1, int y1, int x2, int y2)
{

    double distance;
    double x3;
    double y3;
    
    x3 = (x2 - x1);
    x3 = pow(x3, 2);
    y3 = (y2 - y1);
    y3 = pow(y3, 2);

    distance = sqrt(x3 + y3);

    return distance;
}

double calcRadius(int x1, int y1, int x2, int y2)
{
    double radius;

    radius = calcDistance(x1, y1, x2, y2);
    radius = radius / 2;

    return radius;
}

double calcCircumference(int x1, int y1, int x2, int y2)
{
    double radius;
    double circumference;

    double pi;
    pi = 3.1416;

    radius = calcRadius(x1, y1, x2, y2);

    circumference = 2 * radius * pi;
    return circumference;
}

double calcArea(int x1, int y1, int x2, int y2)
{
    double radius;
    double area;

    double pi;
    pi = 3.1416;

    radius = calcRadius(x1, y1, x2, y2);
    radius = pow(radius, 2);
    area = radius * pi;

    return area;
}

int main()
{
    int x1, y1;
    int x2, y2;

    cout << "Please enter a point on the circumference of the circle (Do not include the comma or parenthesis): ";
    cin >> x1 >> y1;

    cout << "Please enter a second point on the circumference of the circle (Do not include the comma or parenthesis): ";
    cin >> x2 >> y2;

    cout << "The radius is = " << calcRadius(x1, y1, x2, y2) << endl;
    cout << "The circumference is = " << calcCircumference(x1, y1, x2, y2) << endl;
    cout << "The area is = " << calcArea(x1, y1, x2, y2) << endl;
}

/*
One set I tested for the prototype were the points (0, 0) and (5, 5). The radius should be 3.5, circumference 22.2, and area 39.3. 
Those were the numbers outputted too

The other set I tested was the points (1, 5) and (0, 2). The radius should be 1.58, circumference 9.93, and area 7.85.
Those were the numbers outputted too
*/