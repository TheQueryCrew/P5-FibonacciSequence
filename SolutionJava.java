
import java.util.*;

class Main {
	public static void main (String[] args) {
	    //no of elements to be printed
		int elements=4;
		
		//we know in fibonacci series 1st two elements are
		//0 and 1 respectively 
		int num1=0;
		int num2=1;
		
		//we print these two numbers
		System.out.print(num1+" "+num2+" ");
		
		//we take res to store new values
		int res=0;
		
		//counter to track how many elements are left to be printed 
		int cnt=2;
		
		while(++cnt<=elements){
		    
		    //new number = sum of previous two numbers
		    res=num1+num2;
		    System.out.print(res+" ");
		    
		    //updating previous two numbers
		    num1=num2;
		    num2=res;
		}
	}
}
