package Codes;
import java.util.*;
import java.io.*;
import java.util.Arrays;
public class Solution17 {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        String s1=s.nextLine();
        String s2=s.nextLine();
        int c=s1.compareTo(s2);
        if(c>0){
            System.out.println(s2+" comes before "+s1);
        }
        else if(c<0){
            System.out.println(s2+" comes after "+s1);
        }
        else {
            System.out.println("both are equal");
        }
    }
}
