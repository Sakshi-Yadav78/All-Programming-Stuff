class box {
public static void main(String arg[])
{
String S1="sachin";
String S2="nikita";
System.out.println(S1.toLowerCase()); 
System.out.println(S1.toUpperCase());
String S3=S2.replace("nikita","ratan");
System.out.println(S3);
System.out.println(S1.charAt(0));
System.out.println(S1.charAt(3));
String S4="nikita";
String S5="nikita";
String S6="omkars";
System.out.println(S4.equals(S5)); 
System.out.println(S4.equals(S6)); 
String S7="nikita";
String S8="NIKITA";
System.out.println(S7.equals(S8)); 
System.out.println(S7.equalsIgnoreCase(S8)); 
System.out.println(S1.length()); 
String S9="nikita";
String S10="kumthekar";
String S11=S9.concat(S10);
System.out.println("String S11="+S11); 
String S12="SachinTendulkar";
System.out.println(S12.substring(6)); 
System.out.println(S12.substring(0,6));
System.out.println(S12.substring(5,9));
String S13="samreen";
System.out.println(S13.indexOf('a')); 
String S14="Sanjay";
System.out.println(S14.indexOf('a',4)); 
String S15="sachin";
String S16="sachin";
String S17="ratan";
System.out.println(S15.compareTo(S16));
System.out.println(S15.compareTo(S17));
System.out.println(S17.compareTo(S15));
}
}
