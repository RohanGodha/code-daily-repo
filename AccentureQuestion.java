import java.util.*;

class UserMainCode {
    public int[] DuplicateArray(int input1, int[] input2) {
        Map<Integer, Integer> frequencyMap = new HashMap<>();
        List<Integer> result = new ArrayList<>();
        
        for (int num : input2) {
            Integer count = frequencyMap.get(num);
            if (count == null) {
                frequencyMap.put(num, 1);
            } else {
                frequencyMap.put(num, count + 1);
            }
        }
        
        for (Map.Entry<Integer, Integer> entry : frequencyMap.entrySet()) {
            if (entry.getValue() > 1) {
                result.add(entry.getKey());
            }
        }
        
        Collections.sort(result);
        
        // Convert the list to an array
        int[] output = new int[result.size()];
        for (int i = 0; i < result.size(); i++) {
            output[i] = result.get(i);
        }
        
        // If no duplicate elements, return {-1}
        if (output.length == 0) {
            return new int[]{-1};
        }
        
        return output;
    }
}
