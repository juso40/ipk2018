#include <iostream>
#include <cmath>

double root_iterative(double q, int n, int steps){
  double guess_nxt;
  double guess=1;

  while(steps>0){
    guess_nxt = guess+(1.0/n)*(q/(pow(guess,n-1))-guess);
    guess=guess_nxt;
    steps--;
  }
  return guess;
}

int main(){
  int n;
  int steps;
  double q;

  std::cout<<"Enter a value for 'q':"<<std::flush;
  std::cin>>q;
  if(q<0){
    std::cout<<"Invalid input! Try again."<<std::endl;
    main();
  }
  else{
  std::cout<<"Enter a value for n:"<<std::flush;
  std::cin>>n;
  std::cout<<"How many Steps?"<<::std::flush;
  std::cin>>steps;
  std::cout<<"Calculating, please wait..."<<std::endl;
  std::cout<<root_iterative(q, n, steps);
  }
}
