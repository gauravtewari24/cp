
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Deque;
import java.util.HashMap;
import java.util.LinkedList;

 public class Level_Statistics {


  public static void main(String[] args) throws NumberFormatException, IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int t1=Integer.parseInt(br.readLine());
    for(int t=0;t<t1;++t)
    {
      int n=Integer.parseInt(br.readLine());
      String s[]=br.readLine().trim().split(" ");
      int p=Integer.parseInt(s[0]);
      int c=Integer.parseInt(s[1]);
      boolean flag=true;
      if(c>p)
      {
        System.out.println("NO");
       flag=false;
      }
      int i=0;
      if(flag)
      {
        for( i=1;i<n;++i)
        {
          s=br.readLine().trim().split(" ");
          int p1=Integer.parseInt(s[0]);
          int c1=Integer.parseInt(s[1]);

          if(p1-p<0||c1-c<0||p1-p<(c1-c)||p1<c1)
          {
            System.out.println("NO");
            flag=false;
            break;
          }
          p=p1;
          c=c1;
        }
      }
      for(int j=i+1;j<n;++j)
        s=br.readLine().trim().split(" ");
      if (flag) {
        System.out.println("YES");
      }


    }


  }
}


