public class CommandLineDemo {

    public static void main(String[] args) {
        for (int i = 0; i < args.length; i++){
            System.out.println(i);
        }
        System.out.println("There are " + args.length + " elements in the array.");
    }
}