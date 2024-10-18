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
//    // ���带 �ʱ�ȭ�Ѵ�.
//    for (x = 0; x < 3; x++)
//        for (y = 0; y < 3; y++) board[x][y] = ' ';
//
//    // ����ڷκ��� ��ġ�� �޾Ƽ� ���忡 ǥ���Ѵ�.
//    for (k = 0; k < 9; k++) {
//        do {
//            printf("(x, y) ��ǥ: ");
//            scanf_s(" %d %d", &x, &y);
//            if (x < 0 || x > 2 || y < 0 || y > 2) {
//                printf("�߸��� ��ǥ�Դϴ�. �ٽ� �Է��ϼ���.\n");
//                continue;
//            }
//            if (board[x][y] != ' ') {
//                printf("�̹� ���� �ڸ��Դϴ�. �ٽ� �����ϼ���.\n");
//            }
//        } while (board[x][y] != ' ');
//
//        board[x][y] = (k % 2 == 0) ? 'X' : 'O';  // ������ ������ ���� 'X', 'O' �� ����
//
//        // ���带 ȭ�鿡 �׸���.
//        for (i = 0; i < 3; i++) {
//            printf("---|---|---\n");
//            printf("%c  | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//        }
//        printf("---|---|---\n");
//
//        // �¸� ���θ� Ȯ���Ѵ�.
//        winner = check_winner(board);
//        if (winner == 1) {
//            printf("�÷��̾� X�� �̰���ϴ�!\n");
//            break;
//        }
//        else if (winner == 2) {
//            printf("�÷��̾� O�� �̰���ϴ�!\n");
//            break;
//        }
//    }
//
//    if (winner == 0 && k == 9) {
//        printf("���º��Դϴ�!\n");
//    }
//
//    return 0;
//}
//
//// ������ ����Ǿ����� Ȯ���ϴ� �Լ�
//int check_winner(char board[3][3])
//{
//    int i;
//
//    // ���� �˻�
//    for (i = 0; i < 3; i++) {
//        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
//            if (board[i][0] == 'X') return 1;
//            if (board[i][0] == 'O') return 2;
//        }
//    }
//
//    // ���� �˻�
//    for (i = 0; i < 3; i++) {
//        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
//            if (board[0][i] == 'X') return 1;
//            if (board[0][i] == 'O') return 2;
//        }
//    }
//
//    // �밢�� �˻�
//    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
//        if (board[0][0] == 'X') return 1;
//        if (board[0][0] == 'O') return 2;
//    }
//    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
//        if (board[0][2] == 'X') return 1;
//        if (board[0][2] == 'O') return 2;
//    }
//
//    // ���� �¸��ڰ� ����
//    return 0;
//}
