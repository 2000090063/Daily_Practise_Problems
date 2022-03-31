package AAAA_PRACTISE;
import java.util.*;


public class New {

	public static void main(String[] args) {
		// ------------------Strings
		
//		Scanner sn=new Scanner (System.in);
//		 String s="new string hai";
//		 String[] a=new String[10] ;
	 String s=new String("---- kihKakurulev");
//		 a=s.split(" ");
//		 for(String c:a)
//			 System.out.print(c+"-");
//		 System.out.println("\n"+s.substring(3));
//		 System.out.println(s.charAt(7));
//		 System.out.println(s.indexOf("string"));
//		 System.out.println(s.concat(sb));
//		 System.out.println(s.equalsIgnoreCase(sb));
		 
//--------------------STring Buffer class
		 
		StringBuffer sb=new StringBuffer("karthik reddy");
		System.out.println("lenght "+sb.length());
		sb.append(777);
		System.out.println(sb);
		sb.insert(0, "veluru");
		System.out.println(sb);
		sb.replace(14,15,"----");
		System.out.println(sb);
		sb.reverse();
		System.out.println(sb);
		sb.deleteCharAt(15);
		System.out.println(sb);
		sb.delete(0,7);
		System.out.println(sb);
		System.out.println(sb.substring(4,8));
		System.out.println(sb.charAt(7));
		System.out.println(sb.indexOf("--"));
		System.out.println(sb.lastIndexOf("--"));
		sb.setCharAt(8, 'K');
		System.out.println(sb);

		System.out.println(s.equals(sb.toString())); // ------------returns (true or false)boolean value.
		System.out.println(s.compareTo(sb.toString()));//----------returns integer(0 or 1)
		System.out.println(s.equalsIgnoreCase(sb.toString()));//----returns (true or false)boolean value but ignores(upper or lower)
		String s1=sb.toString();
		
		System.out.println(s.concat(s1));
		String[] a=new String[10] ;
		System.out.println(sb);
		a=sb.toString().split("----");
		for(String i:a)
		System.out.println(" "+i);

		
		

		
		
		
		
		 
		 
	}

}

