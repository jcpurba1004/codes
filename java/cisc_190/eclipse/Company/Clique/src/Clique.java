package com.company.hackerrank;

import java.util.Scanner;

public class Clique {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
        int T = s.nextInt();
        while (T-->0) {
            int N = s.nextInt();
            int M = s.nextInt();

            double x = -1.0;
            int r = 1;
            int n2 = (int)Math.pow(N,2.0);
            while (x < M) {
                x = n2/(2*r);
                ++r;
            }
            System.out.println(r);
        }
    }
}