public class SingleGenericHolder<T> {
	T obj;
	
	SingleGenericHolder(T obj) {
		this.obj = obj;
	}
	
	public T getObject() {
		return this.obj;
	}
	public static void main(String[] args) {
		
		SingleGenericHolder<Integer> iObj = new SingleGenericHolder<Integer>(10);
		System.out.println(iObj.getObject());
		
		SingleGenericHolder<String> sObj = new SingleGenericHolder<String>("SimpliCode");
		System.out.println(sObj.getObject());
	}
}