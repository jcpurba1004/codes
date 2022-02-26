public class Business {
   public String name;
   public String address;
   
   public Business() {}
   
   public Business(String busName, String busAddress) {
      name = busName;
      address = busAddress;
   }
   
   @Override
   public String toString() {
      return name + ": " + address;
   }
}	