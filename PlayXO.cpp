#include<iostream>
using namespace std;
char Matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char Player='X';

void printMatrix(){
	
	system("cls");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<Matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}

void play(){
	char pos;
	cout<<"Choose Your Position - Player ( "<<Player<<" ) : ";
	cin>>pos;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(Matrix[i][j]==pos){
				Matrix[i][j]==Player;
			}
		}}
		if(Player =='X'){
			Player='O';
		}else{
			Player='X';
		}
}
char WhoWin(){
	int Xcounter=0,Ycounter=0;int counter=0;
    for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(Matrix[i][j]!='X'&& Matrix[i][j]!='O')counter++;
			if(Matrix[i][j]='X')Xcounter++;
			else if(Matrix[i][j]='Y')Ycounter++;
			if(Xcounter==3||Ycounter==3){
				return Xcounter>Ycounter ?'X':'O';
			}}Ycounter=0;Xcounter=0;
		}
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(Matrix[j][i]='X')Xcounter++;
			else if(Matrix[j][i]='O')Ycounter++;
			if(Xcounter==3||Ycounter==3){
				return Xcounter>Ycounter ?'X':'O';
			}}Ycounter=0;Xcounter=0;
		}
			for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		if(Matrix[0][0]='X' && Matrix[1][1]='X' && Matrix[2][2]='X')
		{	return 'X';
		}else if(Matrix[0][0]='O' && Matrix[1][1]='O' && Matrix[2][2]='O'){
		return 'O';}
			if(Matrix[0][2]='X' && Matrix[1][1]='X' && Matrix[2][0]='X'){
		return 'X';
			}else if(Matrix[0][2]='O' && Matrix[1][1]='O' && Matrix[2][0]='O'){
			return 'O';}}}
			
		if(counter==0)return'z';
		return '.';
}


int main(){
	while(WhoWin() =="."){
		printMatrix();
		Play();
	}
		printMatrix();
		if(WhoWin() =="Z")cout<<"\n NO Winner!!\n";
		else
		cout<<"\n The Winner Is Player ("<<WhoWin()<<") Congratulation !!";
	system("pause");
	return 0;
}
