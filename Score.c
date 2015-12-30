#include "main.h"

void Score(int AllPengs, int idRow, int Row, int Col, int NumOfCols, int FishArray[][NumOfCols], int PengArray[][3]) {

    static int ScoreP1, ScoreP2;

    if(CheckEnd(NumOfCols, FishArray, AllPengs, PengArray) == 0) {
        if(idRow % 2 == 0) {
            ScoreP1 += CheckBoard(Row, Col, NumOfCols, FishArray);
            printf("\nNow Player1 has %i points.\n", ScoreP1);
            getch();
        }
        else {ScoreP2 += CheckBoard(Row, Col, NumOfCols, FishArray);
            printf("\nNow Player2 has %i points.\n", ScoreP2);
            getch();
        }
    } else {
        if (ScoreP1 > ScoreP2)
            printf("Player1 won! with %i points!", ScoreP1);
        else if(ScoreP1 == ScoreP2)
            printf("It's a tie! Both players have %i points!", ScoreP1);
        else
            printf("Player2 won! with %i points!", ScoreP2);
    }
}
