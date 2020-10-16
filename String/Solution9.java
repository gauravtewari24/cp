package Codes;
import java.util.*;
import java.io.*;
import java.util.Arrays;

public class Solution9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        int i=0;
        while (t != 0) {

            String s = sc.nextLine();
            if ((s.charAt(i) == 'a') || (s.charAt(i) == 'e') || (s.charAt(i) == 'i') || (s.charAt(i) == 'o') || (s.charAt(i) == 'u') || (s.charAt(i) == 'A') || (s.charAt(i) == 'E') || (s.charAt(i) == 'I') || (s.charAt(i) == 'O') || (s.charAt(i) == 'U')) {
                System.out.println(s);
            }
            t--;
        }
    }}

