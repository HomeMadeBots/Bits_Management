# Bits_Management

This repository defines a package gathering software elements allowing to manage bits on carriers.

The package is designed following
[this meta-model](https://github.com/HomeMadeBots/Embedded_Software_Meta_Model) and implemented
according to [these C language
patterns](https://github.com/HomeMadeBots/C-language-patterns-for-Embedded-Software-Meta-Model).

## Content

The Bits_Management package gathers :
* Functions :
  * Set_Bit_Uint8
  * Reset_Bit_Uint8
  * Test_Bit_Uint8
  * Set_Bit_Block
  * Reset_Bit_Block
  * Test_Bit_Block
  * Permute_Bits
  * Is_Byte_Even

## Dependencies

![Packages dependencies](http://www.plantuml.com/plantuml/proxy?cache=no&src=https://raw.github.com/HomeMadeBots/Bits_Management/master/doc/dependencies.puml)

The following repositories shall be retrieved :
* [Embedded_C_Framework](https://github.com/HomeMadeBots/Embedded_C_Framework)

## Use

### With the Arduino IDE

This repository shall be clone within the _libraries_ folder of the _Arduino sketchbook folder_.