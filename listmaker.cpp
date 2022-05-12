#include <iostream>
#include <fstream>

using namespace std;

int main(){
  string line;
  ifstream file ("in.txt");
  ofstream file2 ("out.txt");
  if (file.is_open())
    {
      while ( getline (file,line) )
	{
	  file2 << "'" << line << "'" << ',' << '\n';
	}
      file.close();
      return 0;
    }


  else {
    cout << "unable to open file";
    return 1;
  }
}
