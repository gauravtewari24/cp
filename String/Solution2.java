package Codes;
import java.util.*;
import java.io.*;
import java.util.Arrays;

public class Solution2 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)>=65&&s.charAt(i)<=90){
                count+=1;
            }
        }
        System.out.println("No of capital letters are:"+count);
    }
}
