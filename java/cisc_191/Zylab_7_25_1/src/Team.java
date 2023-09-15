public class Team {
    
    private String name;
    private int wins;
    private int losses;

    public void setName(String name) {
        this.name = name;
    }

    public void setWins(int wins) {
        this.wins = wins;
    }

    public void setLosses(int losses) {
        this.losses = losses;
    }

    public String getName() {
        return name;
    }

    public int getWins() {
        return wins;
    }

    public int getLosses() {
        return losses;
    }

    public double getWinPercentage() {
        double percent = (double) wins / (wins + losses);
        return percent;
    }

    public void printStanding() {
        
        System.out.printf("Win percentage: %.2f\n", getWinPercentage());
       
        if (getWinPercentage() >= 0.5) {
            System.out.println("Congratulations, Team " + getName() +
                    " has a winning average!");
        } else {
            System.out.println("Team " + getName() +
                    " has a losing average.");
        }
    }
}