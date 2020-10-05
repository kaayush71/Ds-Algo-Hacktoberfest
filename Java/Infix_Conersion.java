/*
1. You are given an infix expression.
2. You are required to evaluate and print it's value.

Sample Input:
2 + 6 * 4 / 8 - 3

Sample Output:
2

*/



import java.io.*;
import java.util.*;

public class Infix_Conersion{
  

public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String exp = br.readLine();
    Stack<Character> op = new Stack<>();
    Stack<Integer> abc = new Stack<>();
    

    for(int i=0; i<exp.length(); i++)
    {
        if(Character.isDigit(exp.charAt(i)))
        {
            abc.push(exp.charAt(i)-'0');
        }
        
        else if(exp.charAt(i)=='(' )
        {
            op.push(exp.charAt(i));
        }
        
        else if(exp.charAt(i)==')')
        {
            while(op.peek()!='(')
            {
                int v2=abc.pop();
                int v1=abc.pop();
                char o = op.pop();
                
                int sol = opr(v1,v2,o);
                
                abc.push(sol);
                
            }
            op.pop();
        }
        
        else if(Character.isDigit(exp.charAt(i)))
        {
            abc.push(exp.charAt(i)-'0');
        }
        
        else if(exp.charAt(i)=='+' || exp.charAt(i)=='-' || exp.charAt(i)=='*' || exp.charAt(i)=='/')
        {
            while( op.size()!= 0 && op.peek()!='(' && pref(exp.charAt(i)) <= pref(op.peek()) )
            {
                char o=op.pop();
                int p2=abc.pop();
                int p1=abc.pop();
                
                int sl =opr(p1,p2,o);
                abc.push(sl);
                
                
            }
            op.push(exp.charAt(i));
            
        }
        
        
       // else{op.push(exp.charAt(i));}
    
        
    }
    while(op.size()>0)
    {
        int v2=abc.pop();
        int v1=abc.pop();
        char o = op.pop();
                
        int sol = opr(v1,v2,o);
                
        abc.push(sol);
                
    }
            System.out.println(abc.peek());
    
    
    
 }
 
 static int opr(int v1, int v2, char a)
 {
      if(a=='+')
     {
         return v1 + v2;
     }
     else if(a=='-')
     {
         return v1-v2;
     }
     else if(a=='*')
     {
         return v1*v2;
     }else{
         return v1/v2;
     }
 }
 
 static int pref(char a)
 {
     if(a=='+')
     {
         return 1;
     }
     else if(a=='-')
     {
         return 1;
     }
     else if(a=='*')
     {
         return 2;
     }else{
         return 2;
     }
 }
 
}