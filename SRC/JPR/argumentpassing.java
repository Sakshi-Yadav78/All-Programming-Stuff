class argumentpassing {
	int id;
	String name;

	argumentpassing(int id, String name) {
		this.id = id;
		this.name = name;
	}

	void display() {
		System.out.println(id+""+name);
	}

public static void main(String args[]){
student s1=new student(1, " Ram ");
student s2=new student(2, " Shyam ");
s1.display();
s2.display();
}
}
