//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std ;

int main() {
    int count = 0 ;
    double sum = 0 , mean = 0 , SD = 0 , SDmean = 0 ;
    string t ;
    ifstream fin("score.txt") ;
    while (getline(fin,t)){
        sum += atof(t.c_str()) ;
        SDmean += pow(atof(t.c_str()),2) ;
        count++ ;
    }

    mean = sum/count ;
    SD = sqrt((SDmean/count)-pow(mean,2)) ;

    cout << "Number of data = " << count << "\n" ;
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << SD ;

    fin.close() ;

    return 0 ;
}