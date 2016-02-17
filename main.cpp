#include<iostream>
#include"matplotlibcpp.h"
using namespace std;

namespace plt = matplotlibcpp;

int main(){
  cout<<"matplotlib-cpp sample start"<<endl;

  int n = 5000;
  vector<double> x(n), y(n);
  // vector<double> x(1), y(1);
  for(int i=0; i<n; ++i) {
    x[i] = i;
    y[i] = sin(2*M_PI*i/360.0);
    // x[0]=i;
    // y[0]=sin(2*M_PI*i/360.0);

		// plt::plot(x, y, "xr");
    // plt::pause(0.1);
  }
  
  plt::plot(x, y, "--r");
	// plt::title("log");
	// plt::xlabel("x");
	// plt::ylabel("y");
  // plt::axis("equal");
  plt::show();

  return 0;
}
