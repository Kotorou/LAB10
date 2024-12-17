#include<iostream>
#include<fstream>
#include<string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("score.txt") ;
    string textline;
    int count =0 ;
    double sum=0,SD = 0;
    while( getline(source, textline)){
       sum +=  atof(textline.c_str());
       count++;
       SD += pow(atof(textline.c_str()),2);
    }
    source.close();
    cout << "Number of data = "<< count <<"\n";
    cout << setprecision(3);
    cout << "Mean = "<< sum/count<<"\n";
    cout << "Standard deviation = "<< sqrt(SD/count - pow(sum/count,2));
	return 0;
}