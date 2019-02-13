#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int xmax,ymax,xmid,ymid;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c://turboc3//bgi");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   setcolor(getmaxcolor());
   xmax=getmaxx();
   ymax=getmaxy();
   xmid=xmax/2;
   ymid=ymax/2;
   circle(xmid,ymid,50);
   line(xmid,100,xmid+50,ymid);
   circle(xmid,ymid,10);
   circle(xmid-20,ymid-20,5);
   circle(xmid+20,ymid-20,5);
   line(xmid-20,ymid+20,xmid+20,ymid+20);
   line(xmid,100,xmid-50,ymid);


   /* clean up */
   getch();
   closegraph();
   return 0;
}

