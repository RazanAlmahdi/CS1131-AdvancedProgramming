#include <iostream>
 using namespace std;

 int main()
 {
     char ch;
     int a;
     float z;

     cout << "Enter your data";
     cin >> a >> ch >> z;

     cout << "\nA " << a << endl;
     cout << "\nCH " << ch << endl;
     cout << "\nZ " << z << endl;

     return 0;

 }

 #include <iostream>

 using namespace std;

 int main()
 {
    int a,b;
    double x;

    cout << "reading input:";
    cin >> a >> b;

    cout << "\na " << a;
    cout << "\nb " << b;

     return 0;

 }

 #include <iostream>
#include <string>
 using namespace std;

 int main()
 {
     string name = "no name";
     char gender = 'F';
     int age = 34;
     double height = 1.6;



     cout << "Enter your data";
     cin.clear();
     cin >> name >> gender >> age >> height;

     cout << "Name:  " << name << endl;
     cout << "Gender:  " << gender << endl;
     cout << "Age:  " << age << endl;
     cout << "Height:  " << height << endl;

     return 0;

 }

 #include <iostream>
 #include <string>
  using namespace std;

  int main()
  {
      string name = "no name";
      char gender = 'F';
      int age = 34;
      double height = 1.6;



      cout << "Enter your data";
      cin.clear();
      cin >> name;
      cin.get(gender);
      cin >> age >> height;

      cout << "Name:  " << name << endl;
      cout << "Gender:  " << gender << endl;
      cout << "Age:  " << age << endl;
      cout << "Height:  " << height << endl;

      return 0;
}

#include <iostream>
#include <iomanip>
 using namespace std;

 int main()
 {
    float f = 1.533;

    cout << setprecision(2);
    cout << f << endl;

     return 0;

 }

 int main()
{
   float f = 1.53307623789053456789;

   cout << scientific;
   cout << f << endl;

   cout << fixed;
   cout << setprecision(4);
   cout<< f << endl;

    return 0;

}

#include <iostream>
#include <iomanip>
 using namespace std;

 int main()
 {
    float f = 3.0;

    cout << fixed << showpoint;
    cout << setprecision(1);
    cout<< f << endl;

     return 0;

 }

 #include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.1416;
int main()
{
    double sphereRadius;
    double sphereVolume;
    double point1X , point1Y;
    double point2X , point2Y;
    double distance;

    cout<< "Enter the radius of the sphere: ";
    cin >> sphereRadius;
    cout<< endl;

    sphereVolume = (4/3) * PI * pow(sphereRadius , 3);

    cout << "The volume of the sphere is: " << sphereVolume << endl;

    return 0;
}
