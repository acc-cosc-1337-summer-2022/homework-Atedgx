#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over class function"){

	class TicTacToe game;

	

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Set first player to X"){

	class TicTacToe game1;
	game1.start_game("X");
	REQUIRE(game1.get_player() == "X");

}

TEST_CASE("Set first player to O"){

	class TicTacToe game2;
	game2.start_game("O");
	REQUIRE(game2.get_player() == "O");

}

TEST_CASE("Test win by first column"){

	class TicTacToe game3;
	game3.start_game("X");
	game3.mark_board(1);
	game3.mark_board(2);
	game3.mark_board(4);
	game3.mark_board(3);
	game3.mark_board(7);
	game3.mark_board(5);
	game3.mark_board(8);
	game3.mark_board(6);
	game3.mark_board(9);
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Test win by second column"){

	class TicTacToe game3;
	game3.start_game("X");
	game3.mark_board(2);
	game3.mark_board(1);
	game3.mark_board(5);
	game3.mark_board(3);
	game3.mark_board(8);
	game3.mark_board(4);
	game3.mark_board(7);
	game3.mark_board(6);
	game3.mark_board(9);
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Test win by third column"){

	class TicTacToe game3;
	game3.start_game("X");
	game3.mark_board(3);
	game3.mark_board(1);
	game3.mark_board(6);
	game3.mark_board(2);
	game3.mark_board(9);
	game3.mark_board(4);
	game3.mark_board(7);
	game3.mark_board(5);
	game3.mark_board(8);
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Test win by first row"){

	class TicTacToe game3;
	game3.start_game("X");
	game3.mark_board(1);
	game3.mark_board(4);
	game3.mark_board(2);
	game3.mark_board(5);
	game3.mark_board(3);
	game3.mark_board(6);
	game3.mark_board(7);
	game3.mark_board(8);
	game3.mark_board(9);
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Test win by second row"){

	class TicTacToe game3;
	game3.start_game("X");
	game3.mark_board(4);
	game3.mark_board(1);
	game3.mark_board(5);
	game3.mark_board(3);
	game3.mark_board(6);
	game3.mark_board(9);
	game3.mark_board(7);
	game3.mark_board(8);
	game3.mark_board(2);
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Test win by third row"){

	class TicTacToe game3;
	game3.start_game("X");
	game3.mark_board(7);
	game3.mark_board(1);
	game3.mark_board(8);
	game3.mark_board(3);
	game3.mark_board(9);
	game3.mark_board(6);
	game3.mark_board(4);
	game3.mark_board(5);
	game3.mark_board(2);
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Test win by diagonally from top left"){

	class TicTacToe game3;
	game3.start_game("X");
	game3.mark_board(1);
	game3.mark_board(7);
	game3.mark_board(5);
	game3.mark_board(3);
	game3.mark_board(9);
	game3.mark_board(6);
	game3.mark_board(4);
	game3.mark_board(8);
	game3.mark_board(2);
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Test win by diagonally from bottom left"){

	class TicTacToe game3;
	game3.start_game("X");
	game3.mark_board(7);
	game3.mark_board(1);
	game3.mark_board(5);
	game3.mark_board(9);
	game3.mark_board(3);
	game3.mark_board(6);
	game3.mark_board(4);
	game3.mark_board(8);
	game3.mark_board(2);
	REQUIRE(game3.game_over() == true);
}

