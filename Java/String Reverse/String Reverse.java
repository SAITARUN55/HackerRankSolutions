import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String s,rev="";
        s=sc.nextLine();
        int length=s.length();
        for(int i=length-1;i>=0;i--)
        {
           rev=rev+s.charAt(i);
        }
        if(s.equals(rev))
        {
           System.out.println("Yes");
        }
        else
        {
            System.out.println("No");
        }
    }
}
