import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Random;
import java.util.Scanner;

public class TicTacToe {
		
		static ArrayList<Integer> playerPositions = new ArrayList<Integer>();
		static ArrayList<Integer> cpuPositions = new ArrayList<Integer>();
		
		
		public static void main(String[] args) {
			
			char[] [] gameBoard = {{' ', '|', ' ', '|', ' '},
					{'-', '+', '-', '+', '-'},
					{' ', '|', ' ', '|', ' '},
					{'-', '+', '-', '+', '-'},
					{' ', '|', ' ', '|', ' '}};
	
		
		while(true) {
			Scanner scan = new Scanner(System.in);
			System.out.println("Enter your placement (1-9):");
			int pos = scan.nextInt();
			while(playerPositions.contains(playerPos) || cpuPositions.contains(playerPositions)) {
				System.out.println("Position taken! Enter a correct Position");
				playerPos = scan.hasNextInt();
			}
		
			placePiece(gameBoard, playerPos, "player");
		
			String result = checkWinner();
			
			Random rand = new Random();
			int cpuPos = rand.nextInt(9) + 1;
			while(playerPositions.contains)
			placePiece(gameBoard, pos, "cpu");
		
			printGameBoard(gameBoard);
			
			String result = checkWinner();
			System.out.println(result);
		}
	
	}
		
	public static void printGameBoard(char[][] gameBoard) {
		for(char [] row : gameBoard) {
			for(char c : row) {
				System.out.print(c);
			}
			System.out.println();
		}
	}
	
	
	public static void placePiece(char[] [] gameBoard, int pos, String user) {
		
		char symbol = ' ';
		
		if(user.contentEquals("player")) {
			symbol = 'X';
			playerPositions.add(pos);
		} else if(user.contentEquals("cpu")) {
			symbol = '0';
			cpuPositions.add(pos);
		}
	
		
		switch(pos) {
			case 1:
				gameBoard[0] [0] = 'X';
				break;
			case 2:
				gameBoard[0] [2] = 'X';
				break;
			case 3:
				gameBoard[0] [4] = 'X';
				break;
			case 4:
				gameBoard[2] [0] = 'X';
				break;
			case 5:
				gameBoard[2] [2] = 'X';
				break;
			case 6:
				gameBoard[2] [4] = 'X';
				break;
			case 7:
				gameBoard[4] [0] = 'X';
				break;
			case 8:
				gameBoard[4] [2] = 'X';
				break;
			case 9:
				gameBoard[4] [4] = 'X';
				break;
			default:
				break;
		}
	}
		
	public static String checkWinner() {
		
		List topRow = Arrays.asList(1, 2, 3);
		List midRow = Arrays.asList(4, 5, 6);
		List botRow = Arrays.asList(7, 8, 9);
		List leftCol = Arrays.asList(1, 4, 7);
		List midCol = Arrays.asList(2, 5, 8);
		List rightCol = Arrays.asList(3, 6, 9);
		List cross1 = Arrays.asList(1, 5, 9);
		List cross2 = Arrays.asList(7, 5, 3);
		
		List<List> winningConditions = new ArrayList<List>();
		Object winning;
		((ArrayList<Integer>) winning).add(topRow);
		winning.add(midRow);
		winning.add(botRow);
		winning.add(leftCol);
		winning.add(midCol);
		winning.add(rightCol);
		winning.add(cross1);
		winning.add(cross2);
		
		return "";
	}
}