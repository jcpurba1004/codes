/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package stockmarket;

/**
 *
 * @author jpurba
 */
public class Stock 
{
    //private instance fields
    private String name;
    private double stockPrice;
    
    public Stock(String n, double s) {
        name = n;
        stockPrice = s;
    }
    
    //getters
    public String getName() {
        return name;
    }
    public double getStockPrice(){
        return stockPrice;
    }
    //setters
    public void setName(String a) {
        name = a;
    }
    public void setStockPrice(double b) {
        stockPrice = b;
    }
    
    //Override the toString() method
    @Override
    public String toString() {
        String result = "";
        result = result + getName() + " " + getStockPrice();
        return result;
    }
    public static void main(String[] args) {
        //APPL 172.41
        Stock a = new Stock("APPL",172.41);
        System.out.println(a);
    }
}