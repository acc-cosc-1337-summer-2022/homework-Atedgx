#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::string;
using std::unique_ptr;

int main() 
{
	unique_ptr<TicTacToe> game;
	unique_ptr<TicTacToe3> game3;
	unique_ptr<TicTacToe4> game4;
	string first_player;
	string* first_player2 = &first_player;
	char user_choice = 'y';
	int choice;

	do{
		cout<<"Would you like to play TicTacToe3 or TicTacToe4?(Enter 3 or 4)"<<"\n";
		cin>>choice;
		int choice2 = choice;
		if(choice == 3){
			 game3 = make_unique<TicTacToe3>();
		}
		else if (choice == 4){

			game4 = make_unique<TicTacToe4>();
		}
		cout<<"Enter first player (X/O)"<<"\n";
		cin>>first_player;

		while (first_player != "X" && first_player != "O") {
  			cout << "Invalid character entered.\n";
  			cout << "Please Enter a valid character: ";
  			cin >> first_player;}
			cout << "\n";

		if(choice2 == 3){
			game3->start_game(*first_player2);
			int position;
			int position2;
			while(!game3->game_over()){
				position2 = position;
				cout<<"Enter a position: ";
				cin>>position;
				if(position2 != position){
				game3->mark_board(position);
				game3->display_board();}
				else if(position2 == position){
					while(position2 == position){
						cout<<"You did not enter a valid position"<<"\n";
						cout<<"Please enter one now"<<"\n";
						cin>>position;}

				game3->mark_board(position);
				game3->display_board();}}
				
			

			cout<<"Congratulations!!: "<<game3->get_winner();
			cout<<" You won!!"<<"\n";}

		else if(choice2 == 4){
			game4->start_game(*first_player2);
			int position;
			int position2;
			while(!game4->game_over()){
				position2 = position;
				cout<<"Enter a position: ";
				cin>>position;
				if(position2 != position){
				game4->mark_board(position);
				game4->display_board();}
				else if(position2 == position){
					while(position2 == position){
					cout<<"You did not enter a valid position"<<"\n";
					cout<<"Please enter one now"<<"\n";
					cin>>position;
				}
				game4->mark_board(position);
				game4->display_board();}}

			cout<<"Congratulations!!: "<<game3->get_winner();
			cout<<" You won!!"<<"\n";}
						
			cout<<"Play again? "<<"\n";
			cin>>user_choice;}while(user_choice == 'y' || user_choice == 'Y');
			return 0;}