#include<iostream>
#include<ctime>
#include<conio.h>
#include<windows.h>
using namespace std;
//-------------Properties----------------//
enum Direction{Top=1,Down,Right,Left};

struct Map{
	int Width,Height,FruitX,FruitY;
};
struct Snake{
int	HeadX,HeadY,Tail_N,Tail_X[50],Tail_Y[50];Direction Dir;
};
struct Player{
	int Score;
	bool Lose;
};
//-------------------------------------//
Map Map1;
Snake Snake1;
Player Player1;
//-----------Function-----------------//
//-------setting------------------//
//Func make shift to element;tail
void Shift_Right(int arr[],int size){
	for(int i= size-2;i>=0;i--){
		arr[i+1]=arr[i];
	}
}
void Generate_fruit(){
	srand(time(NULL));//dependent on time
	//Function rand() dependent on same result in same num it got ; to change result use function srand()
	Map1.FruitX=rand()%(Map1.Width-2)+1;//Randam 1 to 38
	Map1.FruitY=rand()%(Map1.Height-2)+1;//Randam 1 to 18
	
}
void Setup(){
	
	Map1.Width=40;// 0 to 39
	Map1.Height=20;// 0 to 19
	Generate_fruit();
	//------End Properties Map--------//
	Snake1.HeadX=Map1.Width/2;
	Snake1.HeadY=Map1.Height/2;
	Snake1.Tail_N=0;
	//------------------
	Player1.Score=0;
		Player1.Lose=false;
}
void Draw(){
	system("cls");
	
	for (int i=0;i<Map1.Height;i++){
		for (int j=0;j<Map1.Width;j++){
			if(i==0||i==Map1.Height-1)cout<<"*";
			else if(j==0||j==Map1.Width-1)cout<<"*";
			else if(i==Snake1.HeadY && j==Snake1.HeadX)cout<<"O";
			else if(i==Map1.FruitY && j==Map1.FruitX)cout<<"$";
			else {
				bool printed=false;
				for(int z=0;z<Snake1.Tail_N;z++){
					if(Snake1.Tail_X[z]==j && Snake1.Tail_Y[z]==i ){
					cout<<'o';
					printed=true;
					break;
					}
				}
				if(!printed)cout<<" ";
		}}
		cout<<endl;
	}
	cout<<"Player Score : "<<Player1.Score<<endl;
}
void Input(){
	if(_kbhit()){
		char c=_getch();
		//define direction
		switch(c){
			case'w': Snake1.Dir =Top;break;
			case's': Snake1.Dir =Down;break;
			case'd': Snake1.Dir =Right;break;
			case'a': Snake1.Dir =Left;break;
			case'x': exit(0);
			
		}
	}
}
void Move(){ //control
Shift_Right(Snake1.Tail_X,50);
Shift_Right(Snake1.Tail_Y,50);
Snake1.Tail_X[0]=Snake1.HeadX;
Snake1.Tail_Y[0]=Snake1.HeadY;
	switch (Snake1.Dir){
		case Top: Snake1.HeadY--;
		case Down: Snake1.HeadY++;
		case Right: Snake1.HeadX++;
		case Left: Snake1.HeadX--;
	}//when player lose
	if(Snake1.HeadY>=Map1.Height || Snake1.HeadY<=0 || Snake1.HeadX>=Map1.Width || Snake1.HeadX<= 0)
       Player1.Lose=true;
       //to remove fruit
       if( Snake1.HeadX==Map1.FruitX && Snake1.HeadY==Map1.FruitY ){
       	Generate_fruit();//new one
       	Player1.Score+=1;
       	Snake1.Tail_N++;
	   }
}

int main(){
	Setup();
	//loops
	while(!Player1.Lose){
		Draw();
		Input();
		Move();
	Sleep(50);//to slowly
	}
	system("pause");
	return 0;
}
