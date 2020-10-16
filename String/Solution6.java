package Codes;
import javax.xml.stream.events.Characters;
import java.util.*;
import java.io.*;
import java.util.Arrays;

public class Solution6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        char a[] = new char[65000];
        for(int i=0;i<s.length();i++){
           a[i]=Character.isUpperCase(s.charAt(i))?Character.toLowerCase(s.charAt(i)):Character.toUpperCase(s.charAt(i));
       }
       System.out.println(String.valueOf(a));
    }
}