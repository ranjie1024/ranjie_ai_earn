#include <stdio.h>

#define MAX_ALLOWED_SPEED_KMH 120.0f

/**
 * limit_speed
 * 将当前车速限制在最高允许车速以内。
 */
float limit_speed(float current_speed_kmh)
{
    if (current_speed_kmh < 0.0f)
    {
        return 0.0f;
    }

    if (current_speed_kmh > MAX_ALLOWED_SPEED_KMH)
    {
        return MAX_ALLOWED_SPEED_KMH;
    }

    return current_speed_kmh;
}

int main(void)
{
    float current_speed = 0.0f;

    printf("请输入当前车速(km/h): ");
    if (scanf("%f", &current_speed) != 1)
    {
        printf("输入无效，程序结束。\n");
        return 1;
    }

    float limited_speed = limit_speed(current_speed);

    printf("原始车速: %.2f km/h\n", current_speed);
    printf("限制后车速: %.2f km/h\n", limited_speed);

    if (current_speed > MAX_ALLOWED_SPEED_KMH)
    {
        printf("触发限速：车辆最高车速被限制为 %.2f km/h\n", MAX_ALLOWED_SPEED_KMH);
    }

    return 0;
}
