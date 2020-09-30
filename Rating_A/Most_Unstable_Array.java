import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Deque;
import java.util.HashMap;
import java.util.LinkedList;



public class Most_Unstable_Array {

  public static void main(String[] args) throws NumberFormatException, IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    HashMap<String, Boolean> hm = new HashMap<>();

    int t1=Integer.parseInt(br.readLine());
    for(int t=0;t<t1;++t) {
      String s1[]=br.readLine().trim().split(" ");
      long l=Long.parseLong(s1[0]);
      long m=Long.parseLong(s1[1]);
      if (l == 1) {
        System.out.println(0);
        continue;
      }
      if (l == 2) {
        System.out.println(m);
        continue;
      }
      System.out.println(2*m);


    }

  }
}