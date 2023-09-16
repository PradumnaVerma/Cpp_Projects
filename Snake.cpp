//SNAKE


#include<iostream>
#include<conio.h>
#include<windows.h>           //used to access the win32 API functions and it makes easir for the user to use in-built functionality
#include<dos.h>               //used for handling interrupts ,producing sound,date and time functions.
#include<time.h>

#define MAXSIZE 100
using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoxy(int x, int y){
CursorPosition.X =x;
CursorPosition.Y =y;
SetConsoleCursorPosition(console, CursorPosition);
}
class Point{
private:
int x;
int y;
public:
Point(){
x=y=10;
}
Point(int x,int y){
this->x =x;
this->y =y;
}
void SetPoint(int x, int y){
this->x =x;
this->y =y;
}
int GetX(){                  //return x coordinate of the cursor position
return x;
}
int GetY(){               //return y coordinate of the cursor position
return y;
}
void MoveUp(){
y--;
}
void MoveDown(){
y++;
}
void MoveLeft(){
x--;
}
void MoveRight()
{
x++;
}

void Draw(){
gotoxy (x,y);
cout<<"*";
}
void Erase(){
gotoxy(x,y);
cout<<" ";
}
void CopyPos(Point* p){
p->x=x;
p->y=y;
}

void Debug(){
cout<<"("<<x<<","<<y<<")";
}
};


class Snake{
private:
Point* cell[MAXSIZE];    //array of points to represent snake
int size;   //current snake size
char dir;   //current Direction


Point fruit;
public:
Snake(){
size =1;//default size
cell[0] = new Point(20,20);   //default position
for(int i =1;i<MAXSIZE;i++)
{
cell[i] =NULL;
}
fruit.SetPoint(rand()%50 ,rand()%25);
}
void AddCell(int x,int y){
cell[size++] = new Point(x,y);
}
void TurnUp(){
dir ='w';    //key for tuning upward
}
void TurnDown(){
dir ='s';        //key for turning downward
}
void TurnLeft(){
dir ='a';         //key for turning left
}
void TurnRight(){
dir ='d';             //key for turning right
}
void Move(){
system("cls");         //clear screen

for (int i = size-1;i>0;i--){
cell[i-1] ->CopyPos(cell[i]);
}
//turning snake's head
switch(dir){
case 'w':
cell[0]->MoveUp();
break;
case 's':
cell[0]->MoveDown();
break;
case 'a':
cell[0]->MoveLeft();
break;
case 'd':
cell[0]->MoveRight();
break;
}
//collision with fruit

if(fruit.GetX()==cell[0]->GetX() &&fruit.GetY() == cell[0]->GetY())
{
AddCell(0,0);
fruit.SetPoint(rand()%50,rand()%25);
}

//drwaing snake
for(int i=0;i<size;i++)
cell[i]->Draw();
fruit.Draw();

Sleep(50);
}
void Debug(){
for(int i=0;i<size ;i++)
{
cell[i]->Debug();
}
}
};


int main(){


srand((unsigned)time(NULL));             //random no genertion

//Testing Snake

Snake snake;
char op ='l';
do{
if(kbhit())
{                        //kbhit is present in conio.h and used to determine if a key has been pressed or not.
op =getch();
}
switch(op){
case 'w':
case 'W':
snake.TurnUp();
break;


case 's':
case 'S':
snake.TurnDown();
break;


case 'a':
case 'A':
snake.TurnLeft();
break;



case 'd':
case 'D':
snake.TurnRight();
break;

}
snake.Move();
}

while(op !='e');
return 0;
}


