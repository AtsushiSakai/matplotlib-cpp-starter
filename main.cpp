#include<iostream>
#include"matplotlibcpp.h"
using namespace std;

namespace plt = matplotlibcpp;

int main(){
  cout<<"matplotlib-cpp sample start"<<endl;

  int n = 5000;
  vector<double> x(n), y(n);
  for(int i=0; i<n; ++i) {
    x[i] = i;
    y[i] = sin(2*M_PI*i/360.0);
  }
  
	plt::plot(x, y, "--r");
	plt::title("log");
  plt::show();

  return 0;
}
