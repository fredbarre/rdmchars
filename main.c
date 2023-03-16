#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	int defaultnbchar=10;
	int nbchar=10;
	int maxEntrySize=30;
	char *charnbchar=(char*)malloc(maxEntrySize*sizeof(char));
	printf("Number of characters ? ");
    	if(fgets(charnbchar, maxEntrySize, stdin)==NULL){
    		nbchar=10;
    	}else{
    	nbchar=atoi(charnbchar);
    	}
    	
	char c='a';
	srand(time(NULL));
	char* rdmchars=(char*)malloc(nbchar*sizeof(char));
	for(int i=0;i<nbchar;i++){
		int rdmnumber=rand()%(25-1);
		printf("%c",c+rdmnumber);
		rdmchars[i]=c+rdmnumber;
	}
	free(rdmchars);
	printf("\n");
	return 0;
}
