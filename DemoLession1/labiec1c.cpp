#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;


int main()
{
	freopen("labiec1c.inp","r",stdin);
//	freopen("labiec1.out","w",stdout);
	
	int a,b;
	scanf("%d %d",&a,&b);
	
	for(int i =a;i<= b; i++){
		if(i%2 ==0){
			printf("%d\n",i);
		}
	}
	
	return 0;
}




	
	
