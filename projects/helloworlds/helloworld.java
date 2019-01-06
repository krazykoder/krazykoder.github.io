public class helloworld {

    public static int addme (int a , int b) {
		return a+b;
	}

	public static int multme (int a , int b) {
		return a*b;
	}

	public static int divideme (int a , int b) {
		return a/b;
	}
    
	// main function -> entrypoint
	public static void main (String args []) {
		System.out.print ( "Hello World!");
		System.out.print ( "\n");
		System.out.println ( "Add 5 + 2 = " + addme (5,2));
		System.out.println ( "multiply 5 + 2 = " + multme (5,2));
		System.out.println ( "divide 5 + 2 = " + divideme(5,2));

	}
}