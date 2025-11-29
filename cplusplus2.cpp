// My second c++ program

#include <iostream>
using namespace std;

int main()
{
    class ComputeCircleArea
    {
    public:
        double radius;

        double getArea()
        {
            return radius * radius * 3.14159;
        }
    };

    ComputeCircleArea circle;
    cout << "Enter radius: ";
    cin >> circle.radius;

    cout << "Area of circle: " << circle.getArea() << endl;
}

// My second c++ program

// #include <iostream>
// using namespace std;

// int main()
// {
//     class ComputeCircleArea
//     {
//         public:
//             double radius;

//             double getArea()
//             {
//                 return radius * radius * 3.14159;
//             }
//     };
//     ComputeCircleArea circle;
//     cout << "Enter Radius: ";
//     cin >> circle.radius;

//     cout << "Area of the circle: " << circle.getArea() << end1;
// }