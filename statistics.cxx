#include <cmath>
#include <iostream>
#include <cstdlib>

usingspace std;
 
void RandNum(double* x, int N){
  for(int i=0; i<N; i++)
  x[i] = rand()/double(RAND_MAX);
}


void statistics(double* p, double& m, double& v, int N){
  m= 0;
  for(int i=0; i<N; i++)	
  m+= p[i]/N;
  v= 0;
  for(int i=0; i<N; i++)	
  v= ((p[i]-m)*(p[i]-m))/N;
}


 int main(){
    const int N = 100;
    double p[N];
    double m;
    Double v;

 RandNum(p, N);
 statistics(p, m, v, N)  
    cout << "Mean = " << m << endl;
    cout << "Variance = " << v<< endl;
 
    return 0;
 }
