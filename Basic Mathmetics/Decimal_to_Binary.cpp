#include<iostream>
#include<cmath>
using namespace  std;
int main ()
{
    // Method_1 
    int n ;
    cin >> n ;
    while(n>0){
        int a = n % 2 ;
        cout << a ; 
        n = n / 2 ;
      
    } 
 return 0 ;


//  Method_2
int n ;
cin >> n ; 
int binary = 0 ; 
int i = 0 ; 
 while( n > 0 ) {
    int bit = n & 1 ;
    binary = bit*pow(10, i++) + binary ;
   
    n = n >> 1 ; 

 }
 cout << binary << endl ;

 return 0 ;
}