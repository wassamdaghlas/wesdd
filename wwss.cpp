#include <iostream>
using namespace std ;
using namespace chrono;
long long calcfact(long long n){
	if (n==1){
		return 1;
}
	else 
	return n*calcfact(n-1);
	
}
long long calcfact2(long long n)
{
	long long fact=1;
for(long long i=n;i>0 ;i--)
	fact*=i;
return fact;
}

int main(){
		   long long n=40;
		   auto start =high_resolution_clock::now();
                   calcfact( n);
                      calcfact2( n);
                            auto stop = high_ resolution clock::now();
                             auto duration =duration_cast<microseconds>(stop - start);
                                           cout<<  "time taken by func"
                                           <<duration.count()<<" miroseconds"<<endl;
	return 0;
}