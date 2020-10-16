package Codes;
import java.util.*;
import java.io.*;
import java.util.Arrays;


public class Solution7 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        String s1="";
        for(int i=s.length()-1;i>=0;i--){
            s1=s1+s.charAt(i);
        }
        if(s1.equals(s)){
            System.out.println("yes it is palidrome");
        }
        else{
            System.out.println("no it is not a palidrome");
        }

    }
}

