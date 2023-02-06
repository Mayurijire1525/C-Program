#include<stdio.h>
#include<string.h>

union book{
	char bname[20];
	char authorname[20];
	int pages;
	double prize;
};
void main(){
	union book bk/*={"OS","AG",350,450.50}*/;
       printf("%p\n",&bk.bname);	
       printf("%p\n",&bk.authorname);	
       printf("%p\n",&bk.pages);	
       printf("%p\n",&bk.prize);

       strcpy(bk.bname,"OS");
       printf("%s\n",bk.bname);       
       
       strcpy(bk.authorname,"AG");
       printf("%s\n",bk.authorname);	
       
       bk.pages=350;
       printf("%d\n",bk.pages);	
              
       bk.prize=450.50;
       printf("%f\n",bk.prize);
}

