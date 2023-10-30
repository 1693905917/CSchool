#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct student {
                          char  xh[4];    /* 代表学号     */
                          int   sx;       /* 代表数学成绩   */
                          int   jsj;       /* 代表计算机成绩 */
                          int   yy;       /* 代表英语成绩   */
}xs;

int main(int argc, char *argv[]) {
  	//改用数组a操作
	  xs a[5],*p;
    int i;
    float t;
    p=a;
   	for(i=0;i<4;i++)
    {
      scanf("%s%d%d%d",a[i].xh,&(a[i].sx),&(a[i].jsj),&(a[i].yy));
      //p++;
	}
	printf("学号  数学 计算机 英语 平均成绩 \n");
	p=a;
	for(i=0;i<4;i++)
    {
      t=(a[i].sx+a[i].jsj+a[i].yy)/3.;
      printf("%s    %d    %d     %d  %.2f\n",a[i].xh,a[i].sx,a[i].jsj,a[i].yy,t);
      //p++;
  	} 
  	
	return 0;
	
	//	xs a[5],*p;
//    int i;
//    float t;
//    p=a;
//   	for(i=0;i<4;i++)
//    {
//      scanf("%s%d%d%d",p->xh,&p->sx,&p->jsj,&p->yy);
//      p++;
//	}
//	printf("学号  数学 计算机 英语 平均成绩 \n");
//	p=a;
//	for(i=0;i<4;i++)
//    {
//      t=(p->sx+p->jsj+p->yy)/3.;
//      printf("%s    %d    %d     %d  %.2f\n",p->xh,p->sx,p->jsj,p->yy,t);
//      p++;
//  	}
}
