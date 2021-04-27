package localvars;
public class ExchangeRates {
    public static void main(String[] args) {
        double result1 = dollarsToEuros(100);
        double result2 = eurosToDollars(100);
        System.out.printf("100.00 dollars is %.2f euros.\n", result1);
        System.out.printf("100.00 euros is %.2f dollars.\n", result2);
    }
    public static double dollarsToEuros(double x) {
        double rate = 0.86;
        return x * rate;
    }
    public static double eurosToDollars(double x) {
        double rate = 1.17;
        return x * rate;
    }
}