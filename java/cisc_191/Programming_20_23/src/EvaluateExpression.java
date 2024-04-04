import java. util.Scanner;

public class EvaluateExpression {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System. out.print("Enter an expression: ");

        String expression = input.next line();

        input.close();

        // Evaluate the expression

        try {

            double result = evaluate(expression);

            System .out.println("Result: " + result);

        } catch (Exception e) {

            System. out.println("Error: Invalid expression.");

        }

    }

    public static double evaluate(String expression) {

        return new Object() {

            int pos = -1, ch;

            void nextChar() {

                ch = (++pos < expression.length()) ? expression.charAt(pos) : -1;

            }

            boolean eat(int charToEat) {

                while (ch == ' ') next car();

                if (ch == charToEat) {

                    next car();

                    return true;

                }

                return false;

            }

            double parse() {

                nextChar();

                double x = parseExpression();

                if (pos < expression.length()) throw new RuntimeException("Unexpected: " + (char) ch);

                return x;

            }

            double parseExpression() {

                double x = parseTerm();

                for (;;) {

                    if (eat('+')) x += parseTerm(); // Addition

                    else if (eat('-')) x -= parseTerm(); // Subtraction

                    else return x;

                }

            }

            double parseTerm() {

                double x = parseFactor();

                for (;;) {

                    if (eat('*')) x *= parseFactor(); // Multiplication

                    else if (eat('/')) x /= parseFactor(); // Division

                    else if (eat('%')) x %= parseFactor(); // Remainder

                    else return x;

                }

            }

            double parseFactor() {

                if (eat('+')) return parseFactor(); // Unary plus

                if (eat('-')) return -parseFactor(); // Unary minus

                double x;

                int startPos = this.pos;

                if (eat('(')) { // Parentheses

                    x = parseExpression();

                    eat(')');

                } else if ((ch >= '0' && ch <= '9') || ch == '.') { // Numbers

                    while ((ch >= '0' && ch <= '9') || ch == '.') nextChar();

                    x = Double.parseDouble(expression.substring(startPos, this.pos));

                } else {

                    throw new RuntimeException("Unexpected: " + (char) ch);

                }

                return x;

            }

        }.parse();

    }

}