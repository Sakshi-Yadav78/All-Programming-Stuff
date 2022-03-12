import java.io.*; 
public class MyIntegerToBinary{
public static void main(String args[])throws IOException 
{ 
int i; 
BufferedReader obj = new BufferedReader (new InputStreamReader(System.in)); 
System.out.print("Enter number that you want to convert to binary: "); 
i=Integer.parseInt(obj.readLine());
String binary = Integer.toBinaryString(i); //Converts integer to binary 
System.out.println("Binary value: "+binary);
}
}
