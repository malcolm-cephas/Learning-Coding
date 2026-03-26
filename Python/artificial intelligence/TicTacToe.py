'''Aim: 3. Tic-Tac-Toe game in Python.'''

def print_board(board):
    for r in board:
        print(" | ".join(r))
        print("-" * 10)

def check_win(board, p):

    for i in range(3):
        if all(board[i][j] == p for j in range(3)) or all(board[j][i] == p for j in range(3)):
            return True

    if (board[0][0] == board[1][1] == board[2][2] == p) or (board[0][2] == board[1][1] == board[2][0] == p):
        return True
    return False

board = [[" "]*3 for _ in range(3)]
print("Tic-Tac-Toe Demo (Logic loaded).")

