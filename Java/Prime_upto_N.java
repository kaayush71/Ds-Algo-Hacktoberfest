import java.util.*;
public class Prime_upto_N
{
	public static void main(String[] args) {
	    Scanner in=new Scanner(System.in);
	    int num=in.nextInt();
		boolean isPrime[]= prime(num);
		
		for(int i=0;i<isPrime.length;i++)
		    if(isPrime[i]==true)
		    System.out.print(i+" ");
	}
	static boolean[] prime(int n){
	    
	    boolean isPrime[]=new boolean[n+1];
	    
	    Arrays.fill(isPrime,true);
	    
	    isPrime[0]=false; isPrime[1]=false;
	    
	    for(int i=2; i*i <= n; i++){
	        
	        for(int j=2*i; j<=n; j+=i){
	            
	            isPrime[j]=false;
	        }
	    }
	    return isPrime;
	}
}
