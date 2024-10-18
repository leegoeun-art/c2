//#include <stdio.h>
//
//int check_winner(char board[3][3]);
//
//int main(void)
//{
//    char board[3][3];
//    int x, y, k, i;
//    int winner = 0;
//
//    // 보드를 초기화한다.
//    for (x = 0; x < 3; x++)
//        for (y = 0; y < 3; y++) board[x][y] = ' ';
//
//    // 사용자로부터 위치를 받아서 보드에 표시한다.
//    for (k = 0; k < 9; k++) {
//        do {
//            printf("(x, y) 좌표: ");
//            scanf_s(" %d %d", &x, &y);
//            if (x < 0 || x > 2 || y < 0 || y > 2) {
//                printf("잘못된 좌표입니다. 다시 입력하세요.\n");
//                continue;
//            }
//            if (board[x][y] != ' ') {
//                printf("이미 놓인 자리입니다. 다시 선택하세요.\n");
//            }
//        } while (board[x][y] != ' ');
//
//        board[x][y] = (k % 2 == 0) ? 'X' : 'O';  // 현재의 순번에 따라 'X', 'O' 중 선택
//
//        // 보드를 화면에 그린다.
//        for (i = 0; i < 3; i++) {
//            printf("---|---|---\n");
//            printf("%c  | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//        }
//        printf("---|---|---\n");
//
//        // 승리 여부를 확인한다.
//        winner = check_winner(board);
//        if (winner == 1) {
//            printf("플레이어 X가 이겼습니다!\n");
//            break;
//        }
//        else if (winner == 2) {
//            printf("플레이어 O가 이겼습니다!\n");
//            break;
//        }
//    }
//
//    if (winner == 0 && k == 9) {
//        printf("무승부입니다!\n");
//    }
//
//    return 0;
//}
//
//// 게임이 종료되었는지 확인하는 함수
//int check_winner(char board[3][3])
//{
//    int i;
//
//    // 가로 검사
//    for (i = 0; i < 3; i++) {
//        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
//            if (board[i][0] == 'X') return 1;
//            if (board[i][0] == 'O') return 2;
//        }
//    }
//
//    // 세로 검사
//    for (i = 0; i < 3; i++) {
//        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
//            if (board[0][i] == 'X') return 1;
//            if (board[0][i] == 'O') return 2;
//        }
//    }
//
//    // 대각선 검사
//    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
//        if (board[0][0] == 'X') return 1;
//        if (board[0][0] == 'O') return 2;
//    }
//    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
//        if (board[0][2] == 'X') return 1;
//        if (board[0][2] == 'O') return 2;
//    }
//
//    // 아직 승리자가 없음
//    return 0;
//}
