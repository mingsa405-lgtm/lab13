#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}
void stat(const double x[],int y,double z[]){
    double mean;
    double sum=0;
    double sum2=0;
    double sum3=1;
    double sum4=0;
    double Std;
    double geo;
    double har;
    double  max=x[0];
    double min=x[0];
    for(int i=0;i<y;i++){
          
          sum=sum+x[i];
          sum2=sum2+pow(x[i],2);
          sum3=sum3*x[i];
          sum4=sum4+(1/x[i]);
          if(x[i]>max) max=x[i];
          if(x[i]<min) min=x[i];
    }
    mean=sum/y;
    Std = sqrt((sum2/y)-pow(mean,2));
    geo=pow(sum3,1.0/y);
    har=y/sum4;
    z[0]=mean;
    z[1]=Std;
    z[2]=geo;
    z[3]=har;
    z[4]=max;
    z[5]=min;
    
    
    
    
}
