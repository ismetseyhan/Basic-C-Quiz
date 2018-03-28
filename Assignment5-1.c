# include <stdio.h>
#include<stdlib.h>

int main (int argc,char *argv[]){
int i,o,c,v=1;


int space=atoi(argv[1])-1;
int p;
int y=atoi(argv[1]);
int z,x=1;


for(i=atoi(argv[1]);i>0;i--){
	for(c=1;c<=space;c++){
		printf(" ");
	}
	space--;
	printf("%c",'/');

	for (p=1;p<v;p++){

		printf(" ");
		printf(" ");
}
	printf("%c",'\\');
	v++;
	printf("\n");
}

for(o=atoi(argv[1]);o>0;o--){
	for(z=1;z<x;z++){
		printf(" ");
	}
	x+=1;

	printf("%c",'\\');
	for(p=y;p>1;p--){
		printf(" ");
		if  (p==1)
		 continue;
		printf(" ");
	}
	y--;

	printf("%c",'/');
	printf("\n");
}

	return 0;
}
