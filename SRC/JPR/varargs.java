public class varargs {
	static void display(String... values) {
		System.out.println(" Display method invoked ");
		for (String s : values) {
			System.out.println(s);
		}
	}

public static void main(String args[])
{ 
display(); //zero argument 
display(" Hello "); // one argument
display("My","name","is","varargs"); //four arguments 
}
}