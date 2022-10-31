/* Author: NgTienHungg */

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

class Number implements Comparable<Number> {

    public int value, firstIndex, count;

    public Number(int value, int firstIndex, int count) {
        this.value = value;
        this.firstIndex = firstIndex;
        this.count = count;
    }

    @Override
    public int compareTo(Number o) {
        if (this.count == o.count) {
            return this.firstIndex - o.firstIndex;
        }
        return -(this.count - o.count);
    }
}

public class TH_SapXepTheoThuTuXuatHien {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            Map<Integer, Integer> mapIndex = new HashMap<>();
            Map<Integer, Integer> mapCount = new HashMap<>();

            int n = sc.nextInt();
            for (int i = 0; i < n; i++) {
                int x = sc.nextInt();
                if (!mapIndex.containsKey(x)) {
                    mapIndex.put(x, i);
                    mapCount.put(x, 1);
                } else {
                    mapCount.put(x, mapCount.get(x) + 1);
                }
            }
            List<Number> list = new ArrayList<>();
            for (Integer i : mapIndex.keySet()) {
                int firstIndex = mapIndex.get(i);
                int count = mapCount.get(i);
                list.add(new Number(i, firstIndex, count));
            }

            Collections.sort(list);
            for (Number e : list) {
                for (int i = 0; i < e.count; i++) {
                    System.out.print(e.value + " ");
                }
            }
            System.out.println();
        }
    }
}

//2
//8
//2 5 2 8 5 6 8 8
//10
//2 5 2 6 -1 9999999 5 8 8 8
