package Codes;
import java.util.*;
import java.io.*;
import java.util.Arrays;

public class Solution5 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter day");
        String s=sc.nextLine();
        switch (s){
            case "Monday":
                System.out.println(s+"-1");
                break;
            case "Tuesday":
                System.out.println(s+"-2");
                break;
            case "Wednesday":
                System.out.println(s+"-3");
                break;
            case "Thursday":
                System.out.println(s+"-4");
                break;
            case "Friday":
                System.out.println(s+"-5");
                break;
            case "Saturday":
                System.out.println(s+"-6");
                break;
            case "Sunday":
                System.out.println(s+"-7");
                break;

        }

    }
}
