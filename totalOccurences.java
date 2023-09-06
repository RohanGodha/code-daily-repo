import java.io.*;
import java.util.*;

class UserMainCode {
    public int findKey(int input1, int input2, int input3) {
        int thousands = Math.max(Math.max(input1 / 1000, input2 / 1000), input3 / 1000);
        int hundreds = Math.max(Math.max((input1 / 100) % 10, (input2 / 100) % 10), (input3 / 100) % 10);
        int tens = Math.max(Math.max((input1 / 10) % 10, (input2 / 10) % 10), (input3 / 10) % 10);
        int units = Math.max(Math.max(input1 % 10, input2 % 10), input3 % 10);
        
        return thousands * 1000 + hundreds * 100 + tens * 10 + units;
    }
}
