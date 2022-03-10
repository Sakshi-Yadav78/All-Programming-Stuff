class nest {
	int x = 10, y = 20;

	void display(){
		System.out.println(" Value of x " + x);
		System.out.println(" Value of y " + y);

}

	void add() {
		display();
		System.out.printf(" X + Y = " + (x + y));
	}
}

class method 
{
	public static void main(String arg[]) 
	{
		nest n = new nest();
		n.add();
	}
}
