//h
#include "tic_tac_toe.h"
class TicTacToe4 : public TicTacToe{

    private:
    


    public:
    TicTacToe4(): TicTacToe(4){};
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void display_board() const;
};