/*___________ WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL ____________*/
//------------ C++ PROGRAM TO CREATE CAR ANIMATION ON ROAD ----------------//

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{

int g=0,d;
initgraph(&g,&d,"c:\\tc\\bgi");
for(float i=0,j=0,k=0,l=0,angle=360,angle1=0;i<80,j<100,k<301,
    l<82,angle>0,angle1<=360;i+=1,j+=0.5,k+=2,l+=3,angle-=1,angle1+=6)
{
  if(kbhit())
  {
  break;
  }
  delay(50);
  clearviewport();
  setfillstyle(1,15);               //road divider starts
  setcolor(15);
  bar(k-150,290,0+k,300);
  bar(150+k,290,300+k,300);
  bar(450+k,290,600+k,300);
  if(k==300)
  {
  k-=300;
  }                               //road divider ends
  setfillstyle(1,7);             //footpath starts
  setcolor(7);
  rectangle(0,200,640,220);
  rectangle(i-80,200,i-40,220);
  bar(i-40,200,0+i,220);
  rectangle(0+i,200,40+i,220);
  bar(40+i,200,80+i,220);
  rectangle(80+i,200,120+i,220);
  bar(120+i,200,160+i,220);
  rectangle(160+i,200,200+i,220);
  bar(200+i,200,240+i,220);
  rectangle(240+i,200,280+i,220);
  bar(280+i,200,320+i,220);
  rectangle(320+i,200,360+i,220);
  bar(360+i,200,400+i,220);
  rectangle(400+i,200,440+i,220);
  bar(440+i,200,480+i,220);
  rectangle(480+i,200,520+i,220);
  bar(520+i,200,560+i,220);
  rectangle(560+i,200,600+i,220);
  bar(600+i,200,640+i,220);
  if(i==79)
  {
  i-=79;
  }                                   //footpath ends
  if(angle>=90&&angle<=270)          //Day starts
  {
   int x=340*sin(angle*3.14/180);
   int y=130*cos(angle*3.14/180);
   setcolor(14);
   setfillstyle(1,14);
   pieslice(x+320,y+180,0,360,30);                        //SUN
  }
  //Day ends
  if((angle>270&&angle<360)||(angle>=0&&angle<90))       //Night starts
  {
   int x1=340*sin((angle+180)*3.14/180);
   int y1=130*cos((angle+180)*3.14/180);
   setcolor(7);
   setfillstyle(1,7);
   pieslice(x1+320,y1+180,0,360,20);         //MOON
  }

  if(angle==1)
  {
  angle+=359;
  }                                 //Night ends
  setfillstyle(1,6);               //Pole starts
  setcolor(6);
  bar(0,155,640,160);
  setfillstyle(1,6);
  bar(j-100,140,j-95,200);
  bar(0+j,140,5+j,200);
  bar(100+j,140,105+j,200);
  bar(200+j,140,205+j,200);
  bar(300+j,140,305+j,200);
  bar(400+j,140,405+j,200);
  bar(500+j,140,505+j,200);
  bar(600+j,140,605+j,200);
  if(j==99)
  {
  j-=99;
  }
   //Pole ends

  setfillstyle(1,7);                  //2footpath starts
  setcolor(7);
  rectangle(0,400,640,420);
  rectangle(l-80,400,l-40,420);
  bar(l-40,400,0+l,420);
  rectangle(0+l,400,40+l,420);
  bar(40+l,400,80+l,420);
  rectangle(80+l,400,120+l,420);
  bar(120+l,400,160+l,420);
  rectangle(160+l,400,200+l,420);
  bar(200+l,400,240+l,420);
  rectangle(240+l,400,280+l,420);
  bar(280+l,400,320+l,420);
  rectangle(320+l,400,360+l,420);
  bar(360+l,400,400+l,420);
  rectangle(400+l,400,440+l,420);
  bar(440+l,400,480+l,420);
  rectangle(480+l,400,520+l,420);
  bar(520+l,400,560+l,420);
  rectangle(560+l,400,600+l,420);
  bar(600+l,400,640+l,420);

  if(l==81)
  {
  l-=81;
  }                                         //2footpath ends
  setcolor(2);                              //Grass starts
  setfillstyle(9,2);
  line(0,421,640,421);
  floodfill(0,470,2);                       //Grass ends
  setcolor(12);                              //Car starts
  setfillstyle(7,14);
  sector(340,280,0,180,70,45);
  setfillstyle(1,12);
  bar(240,280,410,320);
  setcolor(7);
  setfillstyle(1,7);
  pieslice(265,315,0,360,15);
  pieslice(380,315,0,360,15);
  setcolor(0);
  int x1=15*sin(angle1*3.14/180);
  int y1=15*cos(angle1*3.14/180);
  line(265,315,265+x1,315+y1);
  int x2=15*sin((angle1+90)*3.14/180);
  int y2=15*cos((angle1+90)*3.14/180);
  line(265,315,265+x2,315+y2);
  int x3=15*sin((angle1+180)*3.14/180);
  int y3=15*cos((angle1+180)*3.14/180);
  line(265,315,265+x3,315+y3);
  int x4=15*sin((angle1+270)*3.14/180);
  int y4=15*cos((angle1+270)*3.14/180);
  line(265,315,265+x4,315+y4);
  line(380,315,380+x1,315+y1);
  line(380,315,380+x2,315+y2);
  line(380,315,380+x3,315+y3);
  line(380,315,380+x4,315+y4);
  if(angle1==360)
  {
  angle1-=360;
  }               //car ends
 }
}


/*------------------ I HOPE YOU LIKE THIS PROGRAMMING ---------------------*/
/*_____________= LIKE =_______= SHARE =_________= SUBSCRIBE =_____________*/

