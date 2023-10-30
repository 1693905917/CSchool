#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define PI 3.14
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	
//	float r,ss,dd;
//  	void mycircle(float r,float *s,float *d);
//	float circle(float r,float *d);
//  	r=10;
	//第一题 
  	//mycircle(r,&ss,&dd);
	//printf("radius=%.2f area=%.2f  cicum=%.2f\n",r,ss,dd);
//第二题 
//	ss=circle(r,&dd);
//	printf("radius=%.2f area=%.2f  cicum=%.2f\n",r,ss,dd);
	
	 //第三题 
//	char s[]= "123ABC",*p;
//  	void adverse(char * a );
//  	p=s;
//   	adverse(p);
// 	printf(" \n\n%s\n",s);
 	
 	
 	//第四题 
// 	int a=3,b=4;
// 	
// 	swap(&a,&b);
// 	
// 	printf("%d  %d",a,b);
	return 0;
}


void swap(int *a,int *b)
{
	int temp;
	temp=*(a);
	*(a)=*(b);
	*(b)=temp;
} 


//第三题 
void adverse(char * a )
{
    //......书写程序内容  123ABC
    int size,i;
	size=strlen(a);
	char *b;
	char temp;
	b=a+size-1;
	for(i=0;i<size/2;i++){
		temp=*(a+i);
		*(a+i)=*(b-i);
		*(b-i)=temp;
	}
}


//第二题
float circle(float r,float *d)
{
	float s;
	*d=2*PI*r;
	s=PI*r*r;
	return s;
}

//第一题
void mycircle(float r,float *s,float *d)
{
     //......书写程序内容
     *s=PI*r*r;
     *d=2*PI*r;
}


