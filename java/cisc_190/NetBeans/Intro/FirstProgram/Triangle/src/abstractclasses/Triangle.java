/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author jpurba
 */

package abstractclasses;

public class Triangle extends Shape {
    private double base;
    private double height;
    
    public Triangle(double b, double h) {
        base = b;
        height = h;
    }
    @Override
    public double calculateArea() {
        return base * height / 2.0;
    }
    public static void main(String[] args) {
        // TODO code application logic here
    }   
}