public class Car {
    private int modelYear;
    private int purchasePrice;
    private int currentValue;

    public int getModelYear() {
        return modelYear;
    }

    public void setModelYear(int modelYear) {
        this.modelYear = modelYear;
    }

    public int getPurchasePrice() {
        return purchasePrice;
    }

    public void setPurchasePrice(int purchasePrice) {
        this.purchasePrice = purchasePrice;
    }

    public int getCurrentValue() {
        return currentValue;
    }

    public void calcCurrentValue(int year) {
        currentValue = (int) Math.round(purchasePrice * Math.pow(0.85, year - modelYear));
    }

    public void printInfo() {
        System.out.println("Car's information:");
        System.out.println("   Model year: " + modelYear);
        System.out.println("   Purchase price: " + purchasePrice);
        System.out.println("   Current value: " + currentValue);
    }
}