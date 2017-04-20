#include <stdio.h>

int main(){

	int n,m,b,t,i;
	int cartas[n];

	while(scanf("%d %d",&n,&m)  != EOF){
	t=0;
	while(m--){
		scanf("%d",&b);
	 for( i=0;i<n;i++){
			scanf("%d",&cartas[i]);

			if(i != 0)
				t+=cartas[i];
		}

		if(t<=b){
			if((t+10000)<=b)
				t=10000-cartas[0];

			else if((t+1000)<=b)
				t=1000-cartas[0];

			else if((t+100)<=b)
				t=100-cartas[0];

			else if((t+10)<=b)
				t=10-cartas[0];

			else if((t+1)<=b)
				t=1-cartas[0];
		}
		else
			t=t;
	}
	
	printf("%d\n",t);
	}
	
	
	


	return 0;
}