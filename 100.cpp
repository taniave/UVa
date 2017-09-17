#include <cstdio>
using namespace std;

long long int cont;

long long int algoritm(long long int n){
	cont++;
	if(n == 1) return cont;
	if(n%2 != 0)
		return algoritm((3*n)+1);
	else
		return algoritm(n/2);				
}


long long int min(long long int a, long long int b){
	
	if(a<b)
		return a;
	else 
		return b;
}


long long int max(long long int a, long long int b){
	if(a>b)
		return a;
	else 
		return b;
}


int main(){
	long long int a,b,n,r,x,y,c,res;
	while(scanf("%lld %lld",&a,&b) != EOF) {	
	x=min(a,b);
	y=max(a,b);
	
		res = 0;
		for(int i = x; i <= y; i++){
			n=i; 
			cont = 0;
			r=algoritm(n);
			res = max(res,r);
		}	
		printf("%lld %lld %lld\n",a,b,res);	
	}

	return 0;
}
