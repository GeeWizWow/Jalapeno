#include "jalapeno.h"
#include "analog.h"
#include "debug.h"
#include "outputselect.h"

#ifdef BATTERY_PIN
uint8_t battery_level(void) {
    float voltage = analogRead(BATTERY_PIN) * 2 * 3.3 / 1024;

    if (voltage < MIN_VOLTAGE) return 0;
    if (voltage > MAX_VOLTAGE) return 100;

    return voltage * 100 / MAX_VOLTAGE;
}
#endif


void matrix_init_kb(void) {
    matrix_init_user();
    set_output(OUTPUT_AUTO);
}

void matrix_scan_kb(void) {
    #ifdef BATTERY_PIN
    static uint16_t counter = BATTERY_POLL;
    counter++;

    if (counter > BATTERY_POLL) {
        counter = 0;
        // battery_level();
        dprintf( "%u\n", (unsigned int) battery_level() );
    }
    #endif

    matrix_scan_user();
}