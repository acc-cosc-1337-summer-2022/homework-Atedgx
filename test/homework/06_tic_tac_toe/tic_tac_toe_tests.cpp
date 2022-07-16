#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over class function"){

	class TicTacToe3 game;
	game.start_game("X");
	

	game.mark_board(1);
	REQUIRE(!game.game_over() == false);
	game.mark_board(2);
	REQUIRE(!game.game_over() == false);
	game.mark_board(3);
	REQUIRE(!game.game_over() == false);
	game.mark_board(4);
	REQUIRE(!game.game_over() == false);
	game.mark_board(5);
	REQUIRE(!game.game_over() == false);
	game.mark_board(7);
	REQUIRE(!game.game_over() == false);
	game.mark_board(6);
	REQUIRE(!game.game_over() == false);
	game.mark_board(9);
	REQUIRE(!game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Set first player to X"){

	class TicTacToe3 game1;
	game1.start_game("X");
	REQUIRE(game1.get_player() == "X");

}

TEST_CASE("Set first player to O"){

	class TicTacToe3 game2;
	game2.start_game("O");
	REQUIRE(game2.get_player() == "O");

}

TEST_CASE("Test win by first column"){

	class TicTacToe3 game3;
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

	class TicTacToe3 game3;
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

	class TicTacToe3 game3;
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

	class TicTacToe3 game3;
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

	class TicTacToe3 game3;
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

	class TicTacToe3 game3;
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

	class TicTacToe3 game3;
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

	class TicTacToe3 game3;
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






TEST_CASE("Test game over class function 4"){

	class TicTacToe4 game;
	game.start_game("X");


	game.mark_board(1);
	REQUIRE(!game.game_over() == false);
	game.mark_board(2);
	REQUIRE(!game.game_over() == false);
	game.mark_board(3);
	REQUIRE(!game.game_over() == false);
	game.mark_board(4);
	REQUIRE(!game.game_over() == false);
	game.mark_board(5);
	REQUIRE(!game.game_over() == false);
	game.mark_board(7);
	REQUIRE(!game.game_over() == false);
	game.mark_board(6);
	REQUIRE(!game.game_over() == false);
	game.mark_board(9);
	REQUIRE(!game.game_over() == false);
	game.mark_board(8);
	REQUIRE(!game.game_over() == false);
	game.mark_board(10);
	REQUIRE(!game.game_over() == false);
	game.mark_board(11);
	REQUIRE(!game.game_over() == false);
	game.mark_board(12);
	REQUIRE(!game.game_over() == false);
	game.mark_board(13);
	REQUIRE(!game.game_over() == false);
	game.mark_board(14);
	REQUIRE(!game.game_over() == false);
	game.mark_board(15);
	REQUIRE(!game.game_over() == false);
	game.mark_board(16);
	REQUIRE(game.game_over() == true);
	
}

TEST_CASE("Set first player to X 4"){

	class TicTacToe4 game1;
	game1.start_game("X");
	REQUIRE(game1.get_player() == "X");

}

TEST_CASE("Set first player to O 4"){

	class TicTacToe4 game2;
	game2.start_game("O");
	REQUIRE(game2.get_player() == "O");

}

TEST_CASE("Test win by first column 4"){

	class TicTacToe4 game3;
	game3.start_game("X");
	game3.mark_board(1);
	game3.mark_board(2);
	game3.mark_board(5);
	game3.mark_board(3);
	game3.mark_board(9);
	game3.mark_board(6);
	game3.mark_board(13);
	game3.mark_board(7);
	game3.mark_board(8);
	game3.mark_board(10);
	game3.mark_board(11);
	game3.mark_board(12);
	game3.mark_board(13);
	game3.mark_board(14);
	game3.mark_board(15);
	game3.mark_board(16);

	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Test win by second column 4"){

	class TicTacToe4 game3;
	game3.start_game("X");
	game3.mark_board(2);
	game3.mark_board(1);
	game3.mark_board(6);
	game3.mark_board(3);
	game3.mark_board(10);
	game3.mark_board(5);
	game3.mark_board(14);
	game3.mark_board(7);
	game3.mark_board(8);
	game3.mark_board(9);
	game3.mark_board(11);
	game3.mark_board(12);
	game3.mark_board(4);
	game3.mark_board(13);
	game3.mark_board(15);
	game3.mark_board(16);
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Test win by third column 4"){

	class TicTacToe4 game3;
	game3.start_game("X");
	game3.mark_board(3);
	game3.mark_board(1);
	game3.mark_board(7);
	game3.mark_board(2);
	game3.mark_board(11);
	game3.mark_board(4);
	game3.mark_board(15);
	game3.mark_board(5);
	game3.mark_board(6);
	game3.mark_board(8);
	game3.mark_board(9);
	game3.mark_board(10);
	game3.mark_board(12);
	game3.mark_board(13);
	game3.mark_board(14);
	game3.mark_board(16);
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Test win by fourth column 4"){

	class TicTacToe4 game3;
	game3.start_game("X");
	game3.mark_board(4);
	game3.mark_board(1);
	game3.mark_board(8);
	game3.mark_board(2);
	game3.mark_board(12);
	game3.mark_board(3);
	game3.mark_board(16);
	game3.mark_board(5);
	game3.mark_board(6);
	game3.mark_board(7);
	game3.mark_board(9);
	game3.mark_board(10);
	game3.mark_board(11);
	game3.mark_board(13);
	game3.mark_board(14);
	game3.mark_board(15);
	REQUIRE(game3.game_over() == true);
}


TEST_CASE("Test win by first row 4"){

	class TicTacToe4 game3;
	game3.start_game("X");
	game3.mark_board(1);
	game3.mark_board(5);
	game3.mark_board(2);
	game3.mark_board(6);
	game3.mark_board(3);
	game3.mark_board(7);
	game3.mark_board(4);
	game3.mark_board(8);
	game3.mark_board(9);
	game3.mark_board(10);
	game3.mark_board(11);
	game3.mark_board(12);
	game3.mark_board(13);
	game3.mark_board(14);
	game3.mark_board(15);
	game3.mark_board(16);
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Test win by second row 4"){

	class TicTacToe4 game3;
	game3.mark_board(5);
	game3.mark_board(1);
	game3.mark_board(6);
	game3.mark_board(2);
	game3.mark_board(7);
	game3.mark_board(3);
	game3.mark_board(8);
	game3.mark_board(4);
	game3.mark_board(9);
	game3.mark_board(10);
	game3.mark_board(11);
	game3.mark_board(12);
	game3.mark_board(13);
	game3.mark_board(14);
	game3.mark_board(15);
	game3.mark_board(16);
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Test win by third row 4"){

	class TicTacToe4 game3;
	game3.mark_board(9);
	game3.mark_board(1);
	game3.mark_board(10);
	game3.mark_board(2);
	game3.mark_board(11);
	game3.mark_board(3);
	game3.mark_board(12);
	game3.mark_board(4);
	game3.mark_board(5);
	game3.mark_board(6);
	game3.mark_board(7);
	game3.mark_board(8);
	game3.mark_board(13);
	game3.mark_board(14);
	game3.mark_board(15);
	game3.mark_board(16);
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Test win by fourth row 4"){

	class TicTacToe4 game3;
	game3.mark_board(13);
	game3.mark_board(1);
	game3.mark_board(14);
	game3.mark_board(2);
	game3.mark_board(15);
	game3.mark_board(3);
	game3.mark_board(16);
	game3.mark_board(4);
	game3.mark_board(5);
	game3.mark_board(6);
	game3.mark_board(7);
	game3.mark_board(8);
	game3.mark_board(9);
	game3.mark_board(10);
	game3.mark_board(11);
	game3.mark_board(12);
	REQUIRE(game3.game_over() == true);
}


TEST_CASE("Test win by diagonally from top left 4"){

	class TicTacToe4 game3;
	game3.mark_board(1);
	game3.mark_board(2);
	game3.mark_board(6);
	game3.mark_board(3);
	game3.mark_board(11);
	game3.mark_board(4);
	game3.mark_board(16);
	game3.mark_board(5);
	game3.mark_board(7);
	game3.mark_board(8);
	game3.mark_board(9);
	game3.mark_board(10);
	game3.mark_board(12);
	game3.mark_board(13);
	game3.mark_board(14);
	game3.mark_board(15);
	REQUIRE(game3.game_over() == true);
}

TEST_CASE("Test win by diagonally from bottom left 4"){

	class TicTacToe4 game3;
	game3.mark_board(4);
	game3.mark_board(1);
	game3.mark_board(7);
	game3.mark_board(2);
	game3.mark_board(10);
	game3.mark_board(3);
	game3.mark_board(13);
	game3.mark_board(5);
	game3.mark_board(6);
	game3.mark_board(8);
	game3.mark_board(9);
	game3.mark_board(11);
	game3.mark_board(12);
	game3.mark_board(14);
	game3.mark_board(15);
	game3.mark_board(16);
	REQUIRE(game3.game_over() == true);
}

