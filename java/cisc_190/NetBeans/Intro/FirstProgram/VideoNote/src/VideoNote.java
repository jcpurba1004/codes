public class VideoNote 
{
    public static void main(String[] args) 
    {
        int s1, s2, s3;
        String p1, p2, p3;
        
        s1 = 100;
        s2 = 3;
        s3 = 41000;
        p1 = "sephiroth";
        p2 = "chell";
        p3 = "bowser";
        System.out.println("Player     Score");
        System.out.printf("%-10s %d %4.1\n", p1, s1, 3.5);
        System.out.printf("%-10s %d\n", p2, s2);
        System.out.printf("%-10s %d\n", p3, s3);
    }   
}