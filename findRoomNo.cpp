import java.io.*;
import java.util.*;

class UserMainCode {
    public int findRoomNo(int[] input1, int[] input2, int[] input3, int input4) {
        int[] sumArray = new int[input4];
        int[] resultArray = new int[input4];

        for (int i = 0; i < input4; i++) {
            sumArray[i] = input1[i] + input2[i] + input3[i];
        }

        for (int i = 0; i < input4; i++) {
            int index = sumArray[i] % input4;
            if (index == 0) {
                index = input4;
            }

            if (i % 3 == 0) {
                resultArray[i] = input1[index - 1];
            } else if (i % 3 == 1) {
                resultArray[i] = input2[index - 1];
            } else {
                resultArray[i] = input3[index - 1];
            }
        }

        int roomNumber = 0;
        for (int num : resultArray) {
            roomNumber += num;
        }

        return roomNumber;
    }
}
