#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

void f(double* x, int N, double& mean, double& var){
	for(int i=0; i<N; i++){
		x[i]  = rand()/double(RAND_MAX);
		mean += x[i];
	}
	mean = mean/N;
	for(int i=0; i<N; i++)
		var += (x[i]-mean)*(x[i]-mean);
	var = var/N;
}

int main(){
	srand(time(NULL));
   const int N = 100;
   double p[N];
   double mean, var;


	f(p,N,mean,var);
   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
