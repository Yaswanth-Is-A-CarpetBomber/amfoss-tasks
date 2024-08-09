#include <iostream>
#include <fstream>
using namespace std;

int main()
{   
    int a;
  
    ifstream input;
    input.open("/Users/a.t.yaswanthreddy/Club Inputs/input.txt");
    input >> a;
    input.close();

    ofstream output("output.txt");
    output << a;
    output.close();
}
