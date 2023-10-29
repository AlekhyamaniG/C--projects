#include <iostream>
using namespace std;

int sumOfNNaturalNumbers( int n){
  
   return n*(n+1)/2;

}
// comments
void myfnc(){}
void newfnc(){}
void alek(){}
int main(){
 int n;
 cout<<"enter the n value";
 cin>> n;
   cout<<"Hi";
 if(n<1){
   cout<<"enter a valid number: ";

 }

else {
   int result=sumOfNNaturalNumbers(n);
   cout << "sum of n natural numbers is:"<<result<<endl;

}
}



