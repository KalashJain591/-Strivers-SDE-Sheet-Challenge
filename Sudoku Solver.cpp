#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(int x, int y, char num, vector<vector<char>>& board) {
        int gr = (x / 3) * 3;
        int gc = (y / 3) * 3;

        for (int i = 0; i < 9; i++) {
            if (board[x][i] == num || board[i][y] == num)
                return false;
            if (board[gr + i / 3][gc + i % 3] == num)
                return false;
        }

        return true;
    }

    bool solve(vector<vector<char>>& board) {
        char ch;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    ch='0';
                    for (int p=0;p<9;p++) {
                        ch++;
                        if (isValid(i, j, ch, board)) {
                            board[i][j] = ch;

                            if (solve(board))
                                return true;

                            board[i][j] = '.';
                        }
                    }
                    return false; // No valid number can be placed here, backtrack
                }
            }
        }
        return true; // Puzzle is solved
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};