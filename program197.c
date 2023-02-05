#include<stdio.h>

struct MovieInfo{
	char actor[10];
	float imdb;
};
struct Movie{
	char mname[20];
	struct MovieInfo obj1;
};
void main(){
	struct Movie obj2={"Tumbad",{"sohanshan",8.8}};
	
	printf("%s\n",obj2.mname);
	printf("%s\n",obj2.obj1.actor);
	printf("%f\n",obj2.obj1.imdb);
}
