import java.util.ArrayList;

public class ItemInventory {
	public static void main(String[] args) {
	   BaseItem baseItemPtr;
	   DerivedItem derivedItemPtr;
	   ArrayList<BaseItem> itemList = new ArrayList<BaseItem>();
	   int i;
	   
	   baseItemPtr = new BaseItem();
	   baseItemPtr.setLastName("Smith");
	   
	   derivedItemPtr = new DerivedItem();
	   derivedItemPtr.setLastName("Jones");
	   derivedItemPtr.setFirstName("Bill");
	   
	   itemList.add(baseItemPtr);
	   itemList.add(derivedItemPtr);
	   
	   for (i = 0; i < itemList.size(); ++i) {
		  itemList.get(i).printItem();
	   }
	}
}