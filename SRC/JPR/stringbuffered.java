class stringbuffered {
public static void main(String arg[])
{
StringBuffer s1=new StringBuffer("Hello");
StringBuffer s2=new StringBuffer("Java");
System.out.println(s1.append(s2));
StringBuffer s3=new StringBuffer("Hello");
StringBuffer s4=new StringBuffer("Java");
System.out.println(s3.insert(2,s4));
StringBuffer s5=new StringBuffer("Hello");
s3.replace(1,3,"Java");
System.out.println(s5);
StringBuffer s6=new StringBuffer("Hello");
s6.delete(1,3);
System.out.println(s6);
StringBuffer s7=new StringBuffer("Java");
s7.reverse();
System.out.println(s7);
StringBuffer s8=new StringBuffer("Java");
s8.setCharAt(3,'e');
System.out.println(s8);
StringBuffer s9=new StringBuffer("Welcome");
s9.deleteCharAt(2);
System.out.println(s9);
StringBuffer s10=new StringBuffer("Java Programming");
System.out.println(s10+"\nlength=" + s10.length());
s10.setLength(4);
System.out.println(s10+"\nlength=" + s10.length());
}
}
