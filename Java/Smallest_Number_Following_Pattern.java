/* 
Smallest Number Following Pattern
Question
1. You are given a pattern of upto 8 length containing characters 'i' and 'd'.
2. 'd' stands for decreasing and 'i' stands for increasing
3. You have to print the smallest number, using the digits 1 to 9 only without repetition, such that 
the digit decreases following a d and increases follwing an i.

e.g.
d -> 21
i -> 12
ddd -> 4321
iii -> 1234
dddiddd -> 43218765
iiddd -> 126543

Sample Input
ddddiiii
Sample Output
543216789
*/


import java.io.*;
import java.util.*;

public class Main{
  

public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String str = br.readLine();

    // code
    Stack<Integer> st = new Stack<>();
    char c;
    int n=0;
    for(int i =0; i<str.length(); i++)
    {
        c=str.charAt(i);
        if(c=='d')
        {   n++;
            st.push(n);
        }
        else{
            n++;
            st.push(n);
            while(st.size()>0)
            {
                System.out.print(st.pop());
            }
        }
        
    }
    n++;
            st.push(n);
     while(st.size()>0)
            {
                System.out.print(st.pop());
            }
 }
}