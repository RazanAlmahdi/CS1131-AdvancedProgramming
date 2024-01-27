#include <iostream>
#include <fstream>

using namespace std;

int main(){
  int score[26];
  ifstream infile;
  int f = 0, d = 0, c = 0, b = 0, a = 0, e = 0, t = 0, h = 0;

  infile.open("scores.txt");

  if (infile.is_open()){
    while(!infile.eof()){
      for(int i=0; i<26; i++){
        infile >> score[i];
      }
    }
  }

for(int j=0; j < 26; j++){
  if (score[j] >= 0 && score[j] <= 24){
    f++;
    continue;
  }else if(score[j] >= 25 && score[j] <= 49){
    d++;
    continue;
  }else if(score[j] >= 50 && score[j] <= 74){
    c++;
    continue;
  }else if(score[j] >= 75 && score[j] <= 99){
    b++;
    continue;
  }else if(score[j] >= 100 && score[j] <= 124){
    a++;
    continue;
  }else if(score[j] >= 125 && score[j] <= 149){
    e++;
    continue;
  }else if(score[j] >= 150 && score[j] <= 174){
    t++;
    continue;
  }else if(score[j] >= 175 && score[j] <= 200){
    h++;
    continue;
  }
}

  cout << "The number of student that scored between 0-24 is: " << f << endl;
  cout << "The number of student that scored between 25-49 is: " << d << endl;
  cout << "The number of student that scored between 50-74 is: " << c << endl;
  cout << "The number of student that scored between 75-99 is: " << b << endl;
  cout << "The number of student that scored between 100-124 is: " << a << endl;
  cout << "The number of student that scored between 125-149 is: " << e << endl;
  cout << "The number of student that scored between 150-174 is: " << t << endl;
  cout << "The number of student that scored between 175-200 is: " << h << endl;


  return 0;
}
