#include <stdio.h>
#include "pump_controller.c"

int main() {
    int waterLevel;

    printf("Enter water level (0-100): ");
    scanf("%d", &waterLevel);

    if(waterLevel < 20) {
        turnPumpOn();
    } else if(waterLevel > 80) {
        turnPumpOff();
    } else {
        printf("Water Level Normal → Pump OFF\n");
    }

    return 0;
}
