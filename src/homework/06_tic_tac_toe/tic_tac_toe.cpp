//cpp
#include "tic_tac_toe.h"
#include <iostream>


using std::cout;

bool TicTacToe::game_over(){
    if(check_column_win() == true || check_row_win() == true || check_diagonal_win() == true){
        check_board_full();
        set_winner();
        return true;
    }
    else if(check_column_win() == true && check_row_win() != true && check_diagonal_win() != true){
        winner = "C";
        return check_board_full();
        
    }
    
    else return check_board_full();
return 0;
}

void TicTacToe::start_game(std::string first_player){

    player = first_player;
    clear_board();


}

void TicTacToe::mark_board(int position){

    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board() const{

    for(long unsigned int i=0; i < pegs.size(); i += 3){

        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

string TicTacToe::get_winner(){

    return winner;
}
//private functions
void TicTacToe::clear_board(){

    for(auto& peg: pegs){

        peg = " ";
    }
}

void TicTacToe::set_next_player(){

    if(player == "X"){

        player = "O";
    }

    else{

        player = "X";
    }
}

bool TicTacToe::check_board_full(){

    for(long unsigned int i=0; i < pegs.size(); i++){

        if(pegs[i] == " "){

            return false;
        }
    }

    return true;

}

bool TicTacToe::check_column_win(){
    for(long unsigned int i=0; i <pegs.size(); i++){
    if(pegs[i] =="X" && pegs[i+3] =="X" && pegs[i+6]=="X" ){
        return true;
        }
    
    else if(pegs[i+1]=="X" && pegs[i+4]=="X" && pegs[i+7]=="X" ){
        return true;
        }
    
    else if(pegs[i+2]=="X" && pegs[i+5]=="X" && pegs[i+8]=="X" ){
        return true;
        }

    else if(pegs[i]=="O" && pegs[i+3]=="O" && pegs[i+6]=="O" ){
        return true;
        }
    
    else if(pegs[i+1]=="O" && pegs[i+4]=="O" && pegs[i+7]=="O" ){
        return true;
        }
    
    else if(pegs[i+2]=="O" && pegs[i+5]=="O" && pegs[i+8]=="O" ){
        return true;
        }
    else
    return false;
 }return 0;}
        
bool TicTacToe::check_row_win(){
    for(long unsigned int i=0; i <pegs.size(); i++){
    
    if(pegs[i] =="X" && pegs[i+1] =="X" && pegs[i+2] =="X" ){
        return true;
        }
    
    else if(pegs[i+3] =="X" && pegs[i+4] =="X" && pegs[i+5] =="X" ){
        return true;
        }
    
    else if(pegs[i+6] =="X" && pegs[i+7] =="X" && pegs[i+8] =="X" ){
        return true;
        }

    else if(pegs[i]=="O" && pegs[i+1]=="O" && pegs[i+2]=="O" ){
        return true;
        }
    
    else if(pegs[i+3]=="O" && pegs[i+4]=="O" && pegs[i+5]=="O" ){
        return true;
        }
    
    else if(pegs[i+6]=="O" && pegs[i+7]=="O" && pegs[i+8]=="O"){
        return true;
        }
    else
    return false;
}return 0;}

    bool TicTacToe::check_diagonal_win(){
    
    for(long unsigned int i=0; i <pegs.size(); i++){

    if(pegs[i] =="X" && pegs[i+4] =="X" && pegs[i+8] =="X" ){
        return true;
        }
    
    else if(pegs[i+2] =="X" && pegs[i+4] =="X" && pegs[i+6] =="X" ){
        return true;
        }
    

    else if(pegs[i]=="O" && pegs[i+4]=="O" && pegs[i+8]=="O" ){
        return true;
        }
    
    else if(pegs[i+2]=="O" && pegs[i+4]=="O" && pegs[i+6]=="O"){
        return true;
        }
        
    else

    return false;

    }return 0;}

    void TicTacToe::set_winner(){
        if(player == "X"){

            winner = "O";
    }

        else{

            winner = "X";
    }

    }