#include<iostream>
#include"matplotlibcpp.h"
using namespace std;

namespace plt = matplotlibcpp;

int main(){
  cout<<"Hello world"<<endl;

  int n = 5000;
	std::vector<double> x(n), y(n), z(n), w(n,2);
	for(int i=0; i<n; ++i) {
		x.at(i) = i*i;
		y.at(i) = sin(2*M_PI*i/360.0);
		z.at(i) = log(i);
	}

	plt::plot(x, y);
  plt::show();

  return 0;
}
