
import java.util.*;
import java.lang.*;
import java.io.*;

class UniqueNumber{
	public static void main (String[] args) {
		Scanner in =new Scanner (System.in);
		
		int t=in.nextInt();
		while(t-->0){
		    long num=0;
		    Set<Long> st = new HashSet<Long>();
		    long rev=in.nextLong();
		    long num2=0;
		    while(rev>0){
		        num2=(num2*10)+rev%10;
		        rev/=10;
		    }
		    rev=num2;
		    while(rev>0){
		        long d=rev%10;
		        if(st.add(d)) {
		            num=(num*10)+d;
		        }
		        st.add(d);
		        rev/=10;
		    }
		    System.out.println(num);
		}
	}
}