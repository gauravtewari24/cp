
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Deque;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.Queue;

public class Cut_Ribbon {


  public static void main(String[] args) throws NumberFormatException, IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    String s[]=br.readLine().trim().split(" ");
    int n=Integer.parseInt(s[0]);
    int a=Integer.parseInt(s[1]);
    int b=Integer.parseInt(s[2]);
    int c=Integer.parseInt(s[3]);
    int dp[]=new int[n+1];
    dp[0]=0;
    for(int i=1;i<n+1;++i)
    {
      if(i<Math.min(a,Math.min(b,c)))
      dp[i]=-1;
      else
      {
        int aa=i-a;
        int bb=i-b;
        int cc=i-c;
        int aaa=-1;
        int bbb=-1;
        int ccc=-1;
        if(aa>=0&&dp[aa]!=-1)
        {
          aaa=dp[aa]+1;
        }
        if(bb>=0&&dp[bb]!=-1)
        {
          bbb=dp[bb]+1;
        }
        if(cc>=0&&dp[cc]!=-1)
        {
          ccc=dp[cc]+1;
        }
        dp[i]=Math.max(aaa,Math.max(bbb,ccc));



      }
    }
    System.out.println(dp[n]);

  }
}

