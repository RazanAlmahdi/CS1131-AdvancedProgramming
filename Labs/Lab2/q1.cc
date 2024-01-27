#include <fstream>

using namespace std;

int main()
{
    double length, width;
    ifstream infile;
    ofstream outfile;

    infile.open("input.txt");
    outfile.open("output.txt");

    infile >> length >> width;
    outfile << "Area = " << length * width
            << ", Perimeter = " << 2 *  (length + width) << endl;

    infile.close();
    outfile.close();

    return 0;
}
