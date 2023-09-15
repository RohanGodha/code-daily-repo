import java.io.*;
import java.util.*;

class UserMainCode {
    public int findRepArray(int[] input1, int input2) {
        Set<Integer> seen = new HashSet<>();

        for (int i = input2 - 1; i >= 0; i--) {
            int num = input1[i];
            
            if (num > 0 && !seen.contains(num)) {
                seen.add(num);
            } else if (num > 0) {
                return num;
            }
        }

        return 0;
    }
}
