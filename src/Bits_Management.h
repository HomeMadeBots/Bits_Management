#ifndef BITS_MANAGEMENT_H
#define BITS_MANAGEMENT_H

#include <stdint.h>
#include <stdbool.h>


/*============================================================================*/
void Set_Bit_Uint8( uint8_t* carrier, uint8_t bit);
void Reset_Bit_Uint8( uint8_t* carrier, uint8_t bit);
int Test_Bit_Uint8( uint8_t* carrier, uint8_t bit);


/*============================================================================*/
void Set_Bit_Block( uint8_t* block, uint8_t bit_index );
void Reset_Bit_Block( uint8_t* block, uint8_t bit_index );
int Test_Bit_Block( const uint8_t* block, uint8_t bit_index );
void Permute_Bits(
    const uint8_t* initial_block,
    uint8_t block_size,
    uint8_t* result,
    const uint8_t* permutation_table );


/*============================================================================*/
bool Is_Byte_Even( uint8_t a_byte );


#endif