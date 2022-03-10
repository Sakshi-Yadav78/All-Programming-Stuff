class garbagecollection{
		int p, q;

		garbagecollection()
		{
			p = 10;
			p = 20;
		}
}

class Test {
	public static void main(String args[]) {
		new garbagecollection();
	    new garbagecollection();
	}
}
