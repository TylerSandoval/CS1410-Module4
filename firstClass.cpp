#include <iostream>
using namespace std;


// Classes share information across their methods
class smallObj              // Define Class
{
private:
    int someData;           // Class data
public:
    void setData(int d)     // Member function to set data
    {
        someData = d;
    }
    void showData()         // Member function to display/get the data
    {
        cout << "Data is " << somedata << endl;
    }
};

int main()
{
    // Create instnaces or a member of the class
    smallObj s1, s2;
    // Dot operator -> class member access operator
    // Cannot access data directly, need to use an access method:
    // Set my data
    s1.setData(123);
    s2.setData(456);
    // Show the data
    s1.showData();
    s2.showData();

    return 0;
}