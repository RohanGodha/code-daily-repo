package codechef;

import java.util.Scanner;

public class JELLYVOL {
    public static void main(String[] args) {
        solution();
    }

    private static void solution() {
        /*Pellentesque sit amet fermentum sem. Morbi id rutrum sapien.
        Pellentesque ac ex vestibulum, mattis arcu eget, accumsan odio.
        Cras auctor felis nec erat vehicula, in volutpat justo gravida.
        Sed venenatis sed felis non imperdiet. Donec vel feugiat orci.
        Aliquam erat volutpat. Orci varius natoque penatibus et magnis dis parturient
        montes, nascetur ridiculus mus. Fusce pellentesque commodo lacus quis porttitor.*/

        Scanner input = new Scanner(System.in);
        int tc = input.nextInt();

        while (tc-- > 0) {
            int N = input.nextInt();
            long U = input.nextLong();
            long[] volumes = new long[N];

            for (int i = 0; i < N; i++) {
                volumes[i] = input.nextLong();
            }

            double low = 0;
            double high = 1e9;
            double temperature = 0;

            while (Math.abs(high - low) > 1e-9) {
                temperature = (low + high) / 2;
                double sum = 0;

                for (int i = 0; i < N; i++) {
                    sum += Math.pow(volumes[i] + temperature, 3);
                }

                if (sum < U) {
                    low = temperature;
                } else {
                    high = temperature;
                }
            }

            System.out.printf("%.2f\n", temperature);
        }
    }
}
