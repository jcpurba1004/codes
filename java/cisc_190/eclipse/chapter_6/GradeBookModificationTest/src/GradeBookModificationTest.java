import java.util.Scanner;

public class GradeBookModificationTest{
	public static void main(String[ ] args) {
		Scanner keyboard = new Scanner( System.in );
		String studentName;
		double studentScore;
		double [ ][ ] studentTestScores;
		double studentAverage;
		char studentLetterGrade;
		double [ ] newStudentTestScoresDetails;
		
		final int NUMBER_OF_STUDENTS = 5;
		final int NUMBER_OF_TESTSCORES_PER_STUDENT = 4;
		
		GradeBookModification classOf2018 = new GradeBookModification( NUMBER_OF_STUDENTS, NUMBER_OF_TESTSCORES_PER_STUDENT );
		studentTestScores = classOf2018.getStudentTestScoresArray();
		
		for( int currentStudentIndex = 0; currentStudentIndex < NUMBER_OF_STUDENTS; currentStudentIndex++ ) {
			System.out.println( "Please enter the name of student " + ( currentStudentIndex + 1 ) );
			studentName = keyboard.nextLine();
			classOf2018.setStudentName( studentName );
			
			for( int currentStudentScoreIndex = 0; currentStudentScoreIndex < NUMBER_OF_TESTSCORES_PER_STUDENT; currentStudentScoreIndex++ ) {
				System.out.println( "Please enter score " + ( currentStudentScoreIndex + 1 ) + " of " + studentName );
				studentScore = keyboard.nextDouble();
				
				while( studentScore < 0 || studentScore > 100 ) {
					System.out.println( "Please enter a VALID score " + ( currentStudentScoreIndex + 1 ) + " of " + studentName );
					studentScore = keyboard.nextDouble();
				}
				
				keyboard.nextLine();
				classOf2018.setStudentScore( currentStudentIndex, currentStudentScoreIndex, studentScore );
				
			}
		}
		
		for( int currentStudentIndex = 0; currentStudentIndex < NUMBER_OF_STUDENTS; currentStudentIndex++ ) {
			System.out.print( classOf2018.getStudentName( currentStudentIndex ) + " has scores " );
			studentAverage = classOf2018.calculateAverageTestScore( studentTestScores[ currentStudentIndex ] );
			studentLetterGrade = classOf2018.getStudentLetterGrade( studentAverage );
			
			newStudentTestScoresDetails = classOf2018.calculateAverageTestScoreWithTheLowestScoreDropped( studentTestScores[ currentSudentIndex ] );
			
			for( int currentStudentIndex1 = 0; currentStudentIndex1 < NUMBER_OF_STUDENTS; currentStudentIndex1++ ) {
			    if ( currentStudentScoreTest != NUMBER_OF_TESTSCORES_PER_STUDENT - 1 ) {
			    	 System.out.print ( studentTestScores[ currentStudentIndex1 ][ currentStudentScoreIndex ] + ", " );
			    } else {
			    	System.out.print( studentTestScores[ currentStudentIndex1 ][ currentStudentScoreIndex ] + " " );
			    }
			}
			System.out.println( "with average " + String.format( "%.2f", studentAverage ) + ", letter grade " + studentLetterGrade );
			System.out.println();
		}
		
		
		
	}
}