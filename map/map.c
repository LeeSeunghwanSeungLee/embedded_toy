#include <stdio.h>

#define MAP_X 30
#define MAP_Y 15

#define TOTAL_MAP_X 100
#define TOTAL_MAP_Y 20

// 전역변수
int now_x;
int now_y;
// 함수
void gotoxy(int x, int y){

	printf("\033[%d;%df",y,x);
	fflush(stdout);

}

void DrawGameBox(){


	for(int x = 1; x <= MAP_X ; x++){
		for(int y=1; y <= MAP_Y ; y++){
			
			if(x == 1){
				gotoxy(x,y);
				printf("|");
			}else if(y == 1){
				gotoxy(x,y);
				printf("=");

			}else if(x == MAP_X){
				gotoxy(x,y);
				printf("|");
			}else if(y == MAP_Y){
				gotoxy(x,y);
				printf("=");
			}

		}
	}

}

void clear(){

	for(int i = 1; i <= MAP_X ; i++){
		for(int j=1; j <= MAP_Y ; j++){
			gotoxy(i,j);
			printf(" ");
		}
	}

}

void startStar() {
	gotoxy(now_x, now_y);
	printf("*");
}

void removeStar() {
	gotoxy(now_x, now_y);
	printf(" ");
}

void upStar() {
	removeStar();
	gotoxy(++now_x, ++now_y);
	printf("*");
}

void rightStar() {
	removeStar();
	gotoxy(++now_x, now_y);
	printf("*");
}

void downStar() {
	removeStar();
	gotoxy(now_x, --now_y);
	printf("*");
}

void leftStar() {
	removeStar();
	gotoxy(--now_x, now_y);
	printf("*");
}
void removeScreenAtXY(int x, int y) {
	gotoxy(x, y);
	printf(" ");
}
int main(){
	now_x = MAP_X / 2;
	now_y = MAP_Y / 2;


	clear();
	DrawGameBox();
	startStar();
	rightStar();
	rightStar();
	rightStar();
	rightStar();
	rightStar();



	//removeScreenAtXY(MAP_X / 2, MAP_Y / 2);
	gotoxy(0,TOTAL_MAP_Y);

	return 1;

}

