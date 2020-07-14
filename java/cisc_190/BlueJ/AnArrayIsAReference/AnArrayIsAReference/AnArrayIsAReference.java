public class AnArrayIsAReference
{
    //Main array used in demo
    private int[] testScores = {58, 70, 81, 68, 94, 91, 94, 72, 69, 85};
    //Used in copying and comparing arrays
    private int[] copyToArray = new int[testScores.length];
    private int[] differentTestScores = {58, 69, 58, 91, 99, 91, 68, 72, 69, 85};
    //Variables used to compare arrays
    private int index;
    private int testScore;
    private int size;
    //Purpose: Uses index to call element
    public int getAnyArrayElement(int givenIndex)
    {
        return testScore = testScores[givenIndex];
    }
    //Purpose: Returns first element in testScores array
    public int getFirstElement()
    {
        return testScores[0];
    }
    //Purpose: Uses index to select an element to increase by 5
    public void increaseAnArrayElementByFive(int givenIndex)
    {
        testScores[givenIndex] = testScores[givenIndex] + 5;
    }
    //Purpose: Returns testScores array length (# of elements)
    public int getArrayLength()
    {
        return size = testScores.length;
    }
    //Purpose: Returns last element in testScores array
    public int getLastElement()
    {
        return testScore = testScores[testScores.length - 1];
    }
    //Purpose: Uses = to copy and array's reference
    public void badCopyingSyntax()
    {
        //Only points to testScores array's reference
        copyToArray = testScores;
    }
    //Purpose: Copies an array using a for loop
    public void copyArrayUsingForLoop()
    {
        //Starting at index 0 copies array element by element
        for (index = 0; index < testScores.length; index++)
        {
            copyToArray[index] = testscores[index];
        }
    }
    //Purpose: Compares arrays using a while loop
    public String compareTestScoresArraysWhileLoop()
    {
        boolean arraysEqual = true;
        index = 0;
        while (arraysEqual && index < testScores.length)
        {
            //If elements being compared are not equal
            if (testScores[index] != copyToArray[index])
            {
                //Causes loop to terminate
                arraysEqual = false;
            }
            index++;
        }
    //Purpose: Demos comparing two arrays that are the same
    public int StringcompareSameTestScoresArrays()
    {
           if(arraysEqual)
            {
                return "Arrays are the same";
            }
            else
                return "Arrays are not the same";
    }
    //Purpose: Searches array for highest value
    public int getHighestTestScore()
    {
        for (index = 0; index < testScores.length; index++)
        {
            if (testScores[index] > testScore)
            {
                testScore = testScores[index];
            }
        }
        return testScore;
    }
}