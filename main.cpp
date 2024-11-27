#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>


void display()
{
//KATHARIZOUN THN OTHONI
glClearColor(1,1,1,1);
glClear(GL_COLOR_BUFFER_BIT);


//Ouranos
glBegin(GL_QUADS);
glColor3ub(0,236,255); // 
//xrwma me coords
glVertex2f(-400,300); // panw aristera
glVertex2f(-400,-300); //katw aristera
glVertex2f(400,-300); //katw deksia
glVertex2f(400,300); //panw deksia
glEnd();


//grasidi
glBegin(GL_QUADS);
glColor3ub(124, 252, 0);  //xrwma grasidi
//cords grasidi
glVertex2f(-400,-80); // panw aristera
glVertex2f(-400,-300); //katw aristera
glVertex2f(400,-300); //katw deksia
glVertex2f(400,-80); //panw deksia
glEnd();


//Spiti
glBegin(GL_QUADS);
glColor3ub(255,201,14); // na allaksw xrwma
//toixoi spiti cords
glVertex2f(-160,180);//panw aristera
glVertex2f(-160,-80); //katw aristera
glVertex2f(160,-80);//katw deksia
glVertex2f(160,180);//panw deksia
glEnd();

//OUTLINES toixwn SPITIOU
glLineWidth(4);
glBegin(GL_LINE_LOOP);
 
glColor3ub(0,0,0);
glVertex2f(-160,180);//panw aristera
glVertex2f(-160,-80);//katw aristera
glVertex2f(160,-80);//katw deksia
glVertex2f(160,180);//panw deksia
glEnd();

//PROSOXH
//PROSOXH
//PROSOXH
//PROSOXH
//PROSOXH
// EBALA PRWTA THN KAMINADA WSTE OTAN MPEI H OROFH NA KALIPSEI TH MISH
//KAMINADA cords
glBegin(GL_QUADS);
glColor3ub(188, 74, 60);
glVertex2f(75,275);// panw aristera
glVertex2f(75,200);// katw aristera
glVertex2f(110,200);// katw deksia
glVertex2f(110,275);// panw deksia
glEnd();

//OUTLINES kaminadas SPITIOU
glLineWidth(3);
glBegin(GL_LINE_LOOP);
 
glColor3ub(0,0,0);
glVertex2f(75,275);// panw aristera
glVertex2f(75,200);// katw aristera
glVertex2f(110,200);// katw deksia
glVertex2f(110,275);// panw deksia
glEnd();



//ROOF spitiou
glBegin(GL_TRIANGLES);
glColor3ub(255,0,0); // na allaksw xrwma
//coords trigwnou orofhs
glVertex2f(0,280); //korufh
glVertex2f(-180,180); //aristera
glVertex2f(180,180); //deksia
glEnd();

//OUTLINES orofis SPITIOU
glLineWidth(4);
glBegin(GL_LINE_LOOP);
 
glColor3ub(0,0,0);
glVertex2f(0,280); //korufh
glVertex2f(-180,180); //aristera
glVertex2f(180,180); //deksia
glEnd();



//PORTA
glBegin(GL_QUADS);
glColor3ub(133,87,62);
glVertex2f(-30,50);// panw aristera
glVertex2f(-30,-80);// katw aristera
glVertex2f(30,-80);// katw deksia
glVertex2f(30,50);// panw deksia
glEnd();


//OUTLINE PORTAS
glLineWidth(4);
glBegin(GL_LINE_LOOP);
glColor3ub(0,0,0);
glVertex2f(-30,50);// panw aristera
glVertex2f(-30,-80);// katw aristera
glVertex2f(30,-80);// katw deksia
glVertex2f(30,50);// panw deksia
glEnd();

//PARATHIRO 1
glBegin(GL_QUADS);
glColor3ub(190,238,255);

glVertex2f(-110,150);//panw aristera
glVertex2f(-110,75);//katw aristera
glVertex2f(-45,75);//katw deksia
glVertex2f(-45,150);//panw deksia
glEnd();

//OUTLINE PARATHIRO 1
glLineWidth(4);
glBegin(GL_LINE_LOOP);

glColor3ub(0,0,0);
glVertex2f(-110,150);//panw aristera
glVertex2f(-110,75);//katw aristera
glVertex2f(-45,75);//katw deksia
glVertex2f(-45,150);//panw deksia
glEnd();

//lines sta parathira

//Parathiro 1 ORIZONTIA GRAMMH
glLineWidth(4);
glBegin(GL_LINES);
glVertex2f(-110,115);//ARXH GRAMMHS
glVertex2f(-45,115);
glEnd();

//Parathiro 1 KATHETH GRAMMH
glLineWidth(4);
glBegin(GL_LINES);
glVertex2f(-77,150);//ARXH GRAMMHS
glVertex2f(-77,75);
glEnd();

//PARATHIRO 2
glBegin(GL_QUADS);
glColor3ub(190,238,255);

glVertex2f(50,150);//panw aristera
glVertex2f(50,75);//katw aristera
glVertex2f(110,75);//katw deksia
glVertex2f(110,150);//panw deksia
glEnd();

//lines sta parathira

//Parathiro 2 ORIZONTIA GRAMMH
glLineWidth(4);
glColor3ub(0,0,0);
glBegin(GL_LINES);
glVertex2f(50,113);//ARXH GRAMMHS
glVertex2f(110,113);
glEnd();

//Parathiro 2 KATHETH GRAMMH
glLineWidth(4);
glBegin(GL_LINES);
glVertex2f(80,150);//ARXH GRAMMHS
glVertex2f(80,75);
glEnd();


//OUTLINE PARATHIRO 2
glLineWidth(4);
glBegin(GL_LINE_LOOP);

glColor3ub(0,0,0);
glVertex2f(50,150);//panw aristera
glVertex2f(50,75);//katw aristera
glVertex2f(110,75);//katw deksia
glVertex2f(110,150);//panw deksia
glEnd();
//
//sinefo MESH

glBegin(GL_POLYGON);
glColor3ub(246,246,246);

glVertex2f(200, 250);  // V0
glVertex2f(215, 225);  // V1
glVertex2f(230, 215);  // V2
glVertex2f(255, 210);  // V3
glVertex2f(300, 215);  // V4
glVertex2f(315, 225);  // V5
glVertex2f(325, 250);  // V6

glVertex2f(325, 250);  // V6
glVertex2f(315, 275);  // V7 
glVertex2f(300, 285);  // V8 
glVertex2f(255, 290);  // V9 
glVertex2f(230, 285);  // V10 
glVertex2f(215, 275);  // V11 
glVertex2f(200, 250);  // V0 

glEnd();
//sinefo ARISTERA
glBegin(GL_POLYGON);
glColor3ub(246,246,246);

glVertex2f(145, 235);  // V0
glVertex2f(160, 210);  // V1
glVertex2f(175, 200);  // V2
glVertex2f(200, 195);  // V3
glVertex2f(245, 200);  // V4
glVertex2f(260, 210);  // V5
glVertex2f(270, 235);  // V6

glVertex2f(270, 235);  // V6
glVertex2f(260, 260);  // V7 
glVertex2f(245, 270);  // V8 
glVertex2f(200, 275);  // V9 
glVertex2f(175, 270);  // V10 
glVertex2f(160, 260);  // V11 
glVertex2f(145, 235);  // V0 
glEnd();

//sinefo DEKSIA
glBegin(GL_POLYGON);
glColor3ub(246,246,246);

glVertex2f(270, 235);  // V0
glVertex2f(285, 210);  // V1
glVertex2f(300, 200);  // V2
glVertex2f(325, 195);  // V3
glVertex2f(370, 200);  // V4
glVertex2f(385, 210);  // V5
glVertex2f(395, 235);  // V6

glVertex2f(395, 235);  // V6
glVertex2f(385, 260);  // V7 
glVertex2f(370, 270);  // V8 
glVertex2f(325, 275);  // V9 
glVertex2f(300, 270);  // V10 
glVertex2f(285, 260);  // V11  
glVertex2f(270, 235);  // V0 




glEnd();


//Dentro
glBegin(GL_POLYGON);
glColor3ub(29,150,65);

glVertex2f(-350, 95);   // V0 
glVertex2f(-370, 135);  // V1 
glVertex2f(-375, 160);  // V2 
glVertex2f(-375, 195);  // V3 
glVertex2f(-370, 220);  // V4 
glVertex2f(-360, 235);  // V5 
glVertex2f(-350, 245);  // V6 
glVertex2f(-325, 250);  // V7 
glVertex2f(-300, 245);  // V8 
glVertex2f(-290, 235);  // V9 
glVertex2f(-280, 220);  // V10 
glVertex2f(-275, 195);  // V11
glVertex2f(-275, 160);  // V12
glVertex2f(-280, 135);  // V13
glVertex2f(-290, 95);   // V14 
glEnd();

//KORMOS DENTROU

glBegin(GL_QUADS);
glColor3ub(94,62,44);

glVertex2f(-350,100);// panw aristera
glVertex2f(-350,-80);// katw aristera
glVertex2f(-290,-80);// katw deksia
glVertex2f(-290,100);// panw deksia
glEnd();

glBegin(GL_QUADS);
glColor3ub(133,87,62);
glVertex2f(-30,50);// panw aristera
glVertex2f(-30,-80);// katw aristera
glVertex2f(30,-80);// katw deksia
glVertex2f(30,50);// panw deksia
glEnd();

//kolona simaias

glBegin(GL_QUADS);
glColor3ub(190,190,190);

glVertex2f(195,160);// panw aristera
glVertex2f(195,-80);// katw aristera
glVertex2f(215,-80);// katw deksia
glVertex2f(215,160);// panw deksia
glEnd();

//outline kolonas
glBegin(GL_LINE_LOOP);
glColor3ub(0,0,0);
glLineWidth(2);
glVertex2f(195,160);// panw aristera
glVertex2f(195,-80);// katw aristera
glVertex2f(215,-80);// katw deksia
glVertex2f(215,160);// panw deksia
glEnd();

//border shmaias
glBegin(GL_QUADS);
glColor3ub(255,0,0);

glVertex2f(216,160);// panw aristera
glVertex2f(216,50);// katw aristera
glVertex2f(395,50);// katw deksia
glVertex2f(395,160);// panw deksia
glEnd();

//border outline shmaias
glLineWidth(4);
glBegin(GL_LINE_LOOP);
glColor3ub(0,0,0);

glVertex2f(216,160);// panw aristera
glVertex2f(216,50);// katw aristera
glVertex2f(395,50);// katw deksia
glVertex2f(395,160);// panw deksia
glEnd();

//border LEUKO INSIDE shmaias

glBegin(GL_QUADS);
glColor3ub(255,255,255);

glVertex2f(260,160);// panw aristera
glVertex2f(260,50);// katw aristera
glVertex2f(351,50);// katw deksia
glVertex2f(351,160);// panw deksia
glEnd();

//border outline LEUKO shmaias
glBegin(GL_LINE_LOOP);
glColor3ub(0,0,0);

glVertex2f(260,160);// panw aristera
glVertex2f(260,50);// katw aristera
glVertex2f(352,50);// katw deksia
glVertex2f(352,160);// panw deksia
glEnd();

//sima kanadas 
glLineWidth(1);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255,0,0);

glVertex2f(307, 77);   //V0
glVertex2f(279, 70);   //V1

glVertex2f(285, 78);   //V2
glVertex2f(265, 98);   //V3

glVertex2f(277, 101); //V4
glVertex2f(269, 110); //V5

glVertex2f(281, 107);  //V6
glVertex2f(275, 117);  //V9

glVertex2f(289, 110);  //V7
glVertex2f(282, 130);  //V8

glVertex2f(297, 127); //V9
glVertex2f(307, 148); //V10

glVertex2f(307, 77); //V11 
glVertex2f(335, 70); //V12
 
glVertex2f(329, 78); //V13 
glVertex2f(349, 98); //V14
 
glVertex2f(337, 101); //V15 
glVertex2f(345, 110); //V16
 
glVertex2f(333, 107); //V17
glVertex2f(339, 117); //V18
 
glVertex2f(325, 110); //V19 
glVertex2f(332, 130); //V20
 
glVertex2f(317, 127); //V21 
glVertex2f(307, 148); //V22 


glEnd();

//klonari

glLineWidth(4);
glBegin(GL_LINES);

glColor3ub(255,0,0);

glVertex2f(307,77);
glVertex2f(307,62);

glEnd();


//POMOLO PORTAS
glLineWidth(4);
glBegin(GL_LINES);
glColor3ub(0,0,0);
glVertex2f(10,-25);// arxh grammhs
glVertex2f(24,-25);// panw aristera

glEnd();


//thamnos A
glLineWidth(4);
glBegin(GL_POLYGON);
glColor3ub(50, 205, 50);
glVertex2f(-237,-26);// V0
glVertex2f(-250,-30);// V1
glVertex2f(-257,-38);// V2
glVertex2f(-268,-51);// V3

glVertex2f(-260,-71);// V4
glVertex2f(-254,-78);// V5
glVertex2f(-242,-80);// V6
glVertex2f(-225,-78);// V7

glVertex2f(-225,-75);// V8
glVertex2f(-210,-68);// V9
glVertex2f(-200,-59);// V10
glVertex2f(-200,-46);// V11
glEnd();


//thamnos b
glLineWidth(4);
glBegin(GL_POLYGON);
glColor3ub	(50, 205, 50);
glVertex2f(277,-26);// V0
glVertex2f(290,-30);// V1
glVertex2f(297,-38);// V2
glVertex2f(318,-51);// V3

glVertex2f(300,-71);// V4
glVertex2f(304,-78);// V5
glVertex2f(302,-80);// V6
glVertex2f(265,-78);// V7

glVertex2f(265,-75);// V8
glVertex2f(250,-68);// V9
glVertex2f(240,-59);// V10
glVertex2f(240,-46);// V11
glEnd();




glEnd();
//
glEnd();
glFlush();

}



int main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitWindowPosition(20,20);
glutInitWindowSize(800,600);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutCreateWindow("DHMHTRHS MHRTSIOS");
glMatrixMode(GL_PROJECTION);
gluOrtho2D(-400,400,-300,300);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
