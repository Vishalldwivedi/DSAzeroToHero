import java.io.*;
import java.util.*;

public class Main {
    
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter out = new PrintWriter(System.out);

    public static void main(String[] args) throws IOException {
        // Faster input and output
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int t = Integer.parseInt(st.nextToken()); // t test cases
        while (t-- > 0) {
            solve();
        }
        out.close();
    }

    static void solve() throws IOException {
        // Add your solution here
    }
}
