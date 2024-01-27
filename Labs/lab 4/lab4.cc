#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

void initialize(int& lc, int list[]);
void copyText(ifstream& intext, ofstream& outtext, char& ch, int list[]);
void characterCount(char ch, int list[]);
void writeTotal(ofstream& outtext, int lc, int list[]);

int main(){
  //intializing variables
  int lineCount;
  int letterCount[26];
  char ch;
  ifstream infile;
  ofstream outfile;

  infile.open("textin.txt"); //opening the input file

  if(!infile){
    cout << "Cannot open the input file." << endl;
    return 1;
  } //checks that the input file is open

  outfile.open("textout.out"); //opening the output file

  initialize(lineCount, letterCount); //calling the initialize function

  infile.get(ch); //getting the characters from the input file

  while(infile)// loop that calls the copyText function, counts the line and gets the next character
  {

    copyText(infile, outfile, ch, letterCount);
    lineCount++;
    infile.get(ch);
  }

  writeTotal(outfile, lineCount, letterCount); // calling the writeTotal function

  infile.close(); //closing the input file
  outfile.close(); //closing the output file

  return 0;
}

void initialize(int& lc, int list[]){
  lc = 0;
  for (int j=0; j<26; j++)
    list[j] = 0;

} //end initializer

void copyText(ifstream& intext, ofstream& outtext, char& ch, int list[]){
  while (ch != '\n') // process the intire line
  {
      outtext << ch; //output the character

      characterCount(ch, list); //calling the characterCount function

      intext.get(ch); // reading the next character
  }
} //end copyText

void characterCount(char ch, int list[]){
  int index; //letter index

  ch = toupper(ch); // the function toupper converts the character to uppercase

  index = static_cast<int>(ch) - static_cast<int>('A'); //findind the index

  if (0 <= index && index < 26){
    list[index]++;  // counting the number of letters
  }
} // end characterCount

void writeTotal(ofstream& outtext, int lc, int list[]){
  outtext << endl;

  outtext << "The number of lines= " << lc << endl; //writing the output to the output text file

  for(int index=0; index <26; index++)
    outtext << static_cast<char>(index + static_cast<int>('A')) << " count = " << list[index] << endl; //writing the count to the output file.

}
