#include <iostream>
using namespace std;

int main() {
    int n = 10;
    double x[] = {1,2,3,4,5,6,7,8,9,10};
    double y[] = {2,4,5,4,5,7,8,9,10,12};

    double sumX=0,sumY=0,sumXY=0,sumX2=0;

    for(int i=0;i<n;i++){
        sumX+=x[i];
        sumY+=y[i];
        sumXY+=x[i]*y[i];
        sumX2+=x[i]*x[i];
    }

    double beta=(n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);

    double alpha=(sumY-beta*sumX)/n;

    cout<<"y="<<alpha<<"+"<<beta<<"x\n";

    double x_pred;
    
    cin>>x_pred;

    cout<<alpha+beta*x_pred;
    return 0;
}
