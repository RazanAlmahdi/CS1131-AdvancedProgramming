 #include <fstream>
using namespace std;


int main()
{
    double length, width;
    ofstream outfile;
    ifstream infile;
    
    infile.open ("input.txt");
    outfile.open ("output.txt");

    
    infile >> length >> width;
    outfile << "Area = " << length * width
    << ", Perimeter =" << 2 * (length + width) << endl;
    
	      
	outfile.close();  
	  
	infile.close();
    return 0;
}