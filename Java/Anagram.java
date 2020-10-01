import java.util.*;
class Main
{
	public static void main(String[] args) {
	    Scanner in=new Scanner(System.in);
	    String a,b;
	    a=in.nextLine();
	    b=in.nextLine();
	    
	    int arr[]=new int[256];
	    
	    for(char ch:a.toCharArray()){
	        int index=(int)ch;
	        arr[index]++;
	    }
	    for(char ch:b.toCharArray()){
	        int index=(int)ch;
	        arr[index]--;
	    }
	    boolean check=true;
	    for(int i=0;i<256;i++){
	        if(arr[i]!=0) 
	        {   
	            check=false;
	            break;
	        }
	    }
	    
	    if (check) System.out.println("Anagram");
	    else System.out.println("Not Anagram");
		
	}
}
