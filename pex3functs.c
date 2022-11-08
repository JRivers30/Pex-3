/** pex3functs.c
 * =============================================================
 * Name: Your Name
 * Section:  Your Section
 * Project:  FILL IN
 * Purpose:  FILL IN
 * ============================================================= */

/** 
 * @brief Converts an integer to binary, and gets a specific bit from the number
 *        the rightmost bit is bit 0.  This function works--don't break it!
 * @param value the integer we want to convert to binary
 * @param bit the bit we want to extract from the binary
 * @return a 1 or a 0, depending on what value is stored at the specified bit
 */ 
int getBit(int value, int bit) {
    unsigned int unsigned_value = value;
    unsigned int mask = 0b00000000000000000000000000000001 << bit;
    return (value & mask) >> bit;
}

