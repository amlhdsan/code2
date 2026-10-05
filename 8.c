#include <stdio.h>

#define N 100005

int n, nums[N];

int main() {

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &nums[i]);}

    for (int i = 0; i < n; ++i) {
        while (nums[i] >= 1 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
            int x = nums[i];
            int t = nums[i];
            nums[i] = nums[x - 1];
            nums[x - 1] = t;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (nums[i] != i + 1) {
            printf("%d\n", i + 1);
            return 0;
        }
    }

    printf("%d\n", n + 1);

    return 0;
}