import java.io.*;
import java.math.*;
import java.util.*;
import java.time.Duration;

class Honoi {
    static void toursHonoi(int n, char D, char A, char I) {
        if (n == 1) {
            return;
        }
        toursHonoi(n - 1, D, I, A);
        System.out.println("Disque " + n + " de " + D + " a " + A);
        toursHonoi(n - 1, I, A, D);
    }

    public static void main(String args[]) {
        int N = 5; // NOMBRE DE DISQUE
        double start, end, time;
        start = System.currentTimeMillis();
        toursHonoi(N, 'A', 'C', 'B');
        end = System.currentTimeMillis();
        time = (end - start) / 1000F;
        System.out.println("Temps d'execution: " + time + " secondes");
    }
}