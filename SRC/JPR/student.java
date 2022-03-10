class student {
	int id;
	String name;

	student(int i, String n) {
		id = i;
		name = n;
	}

	student(student s)// copy constructor
	{
		id = s.id;
		name = s.name;
	}

	void display() {
		System.out.printf(id + "" + name);
	}

	public static void main(String args[]) {
		student s1 = new student(123, " ABC ");
		s1.display();
		student s2 = new student(s1);
		s2.display();
	}
}