package Codes;
import java.util.*;
import java.io.*;
import java.util.Arrays;

public class Solution4 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s1=sc.nextLine();
        String s2=sc.nextLine();
        int c=s1.compareTo(s2);
        if(c>0){
            System.out.println(s1+" is greator than "+s2);
        }else if(c<0){
            System.out.println(s1+" is less than "+s2);
        }
        else{
            System.out.println(s1+" is equal than "+s2);
        }
    }
}
