package Codes;
import java.util.*;
import java.io.*;
import java.util.Arrays;

public class Solution8 {
    public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    String s=sc.nextLine();
    String arr[]=s.split(" ");
    if((arr[0].equals("miss"))||(arr[arr.length-1].equals("Kumari"))){
        System.out.println("Female");
    }else  if(arr[0].equals("mr")){
        System.out.println("Male");
    }else  if(arr[0].equals("mrs")){
        System.out.println("Married Female");
    } else {System.out.println("not determine");}



    }
}
