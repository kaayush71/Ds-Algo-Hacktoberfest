/*
Question-
1. You are given a string exp representing an expression.
2. You are required to check if the expression is balanced i.e. closing brackets and opening brackets match up well.

e.g.
[(a + b) + {(c + d) * (e / f)}] -> true
[(a + b) + {(c + d) * (e / f)]} -> false
[(a + b) + {(c + d) * (e / f)} -> false
([(a + b) + {(c + d) * (e / f)}] -> false
______________________________________________________________
Sample Question - 
[(a + b) + {(c + d) * (e / f)}]

Sample Answer -
true
 
*/

import java.io.*;
import java.util.*;

public class Balanced_Brackets{

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        Stack<Character> st = new Stack<>();
        
        for(int i=0; i<str.length(); i++)
        {
            if(str.charAt(i)=='(' || str.charAt(i)=='[' || str.charAt(i)=='{')
            {
                st.push(str.charAt(i));
            }
            else if(str.charAt(i)==')')
            {
             
                if(st.size() ==0)
                {
                System.out.println(false);
                return;
                }
                else if(st.peek() !='(')
                {
                System.out.println(false);
                return;
                }
                else
                {
                st.pop();
                }
            }
            else if(str.charAt(i)==']')
            {
                if(st.peek() !='[')
                {
                System.out.println(false);
                return;
                }
                else if(st.size() ==0)
                {
                System.out.println(false);
                return;
                }
                else
                {
                st.pop();
                }
            }
            else if(str.charAt(i)=='}')
            {
                if(st.peek() !='{')
                {
                System.out.println(false);
                return;
                }
                else if(st.size() ==0)
                {
                System.out.println(false);
                return;
                }
                else
                {
                st.pop();
                }
            }
        }
        if(st.size()==0)
        System.out.println(true);
        else
        System.out.println(false);
    }

}