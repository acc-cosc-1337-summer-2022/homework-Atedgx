//h
#include<vector>
#include<string>
#include<memory>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include <iostream>

using std::string;
using std::unique_ptr;
using std::make_unique;






class TicTacToe{

public:
    
    TicTacToe(int size): pegs(size*size,""){};
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const{return player;}
    virtual void display_board() const;
    string get_winner();
    virtual int check_board_position(int p);
private:
    std::string player;
    void clear_board();
    void set_next_player();
    bool check_board_full();
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();
    void set_winner();
    string winner;

    protected:
    std::vector<std::string> pegs;

};
#endif

