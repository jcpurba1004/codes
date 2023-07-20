public class Main {

	public static void main(String[] args) {
		
		// System.out.println(Thread.activeCount());
		
		// Thread.currentThread().setName("MAINNNNNNNN");
		// System.out.println(Thread.currentThread().getName());
		
		// Thread.currentThread().setPriority(10);
		// System.out.println(Thread.currentThread().getPriority());
		
		// System.out.println(Thread.currentThread().isAlive());

		for(int i = 3; i > 0; i--) {
			System.out.println(i);
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		
		System.out.println("You are done!");
		
	}
}