import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;



public class Solution {
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
        int userinput = sc.nextInt();
        
        ArrayList<Integer> A1 = new ArrayList<Integer>();        
        for(int i=0;i<userinput;i++)
        {
            A1.add(sc.nextInt());
        }
             
        Collections.reverse(A1);
        
        for(int i=0;i<A1.size();i++)
        {
        System.out.print(A1.get(i));
        System.out.print(" ");
        }
        
        
    }
}
