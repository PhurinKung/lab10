#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;


int main(){
    ifstream source("score.txt");
    string score;
    double sumformean = 0;
    double sumforSD = 0;
    int count = 0;
    while(getline(source, score)){
        count++;
        sumformean += atof(score.c_str());
        sumforSD += atof(score.c_str())*atof(score.c_str());
    }
    cout << "Number of data = "<< count << '\n';
    cout << setprecision(3) ;
    cout << "Mean = " << sumformean/count << '\n';
    double m = sumformean/count;
    cout << "Standard deviation = " << sqrt((sumforSD/count)-m*m);
}