#include "tic_tac_toe_3.h"

#include <iostream>
#include <vector>

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/


bool TicTacToe3::check_column_win(){
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





/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/

bool TicTacToe3::check_row_win(){
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

/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8



*/
bool TicTacToe3::check_diagonal_win(){
    
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