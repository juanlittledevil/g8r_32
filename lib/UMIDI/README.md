# UMIDI (UART MIDI)

I'm a fan of taking the path of least resistance. I'm also not that great with low level programming. But,
I really needed to handle MIDI input for an old project originally done with Teensy using the Arduino MIDI
library, which works with teensy but doesn't work with the ST STM32 BluePill. So, this library got created.

I'm only implementing the things I need for my project, but hope others may add to it. The library is probably
not going to work as efficiently as others but I'm hoping that by working at a much higher level we can
make this very portable. I'm also hoping that by utilizing the same invocation methods as the Arduino MIDI
library we can make this easy to drop in replace.

Creative Commons Share Alike License

This work is licensed under the Creative Commons Attribution-ShareAlike 4.0 International License. To view a copy of this license, visit <http://creativecommons.org/licenses/by-sa/4.0/> or send a letter to Creative Commons, PO Box 1866, Mountain View, CA 94042, USA.

You are free to:

- Share — copy and redistribute the material in any medium or format
- Adapt — remix, transform, and build upon the material for any purpose, even commercially.

Under the following terms:

- Attribution — You must give appropriate credit, provide a link to the license, and indicate if changes were made. You may do so in any reasonable manner, but not in any way that suggests the licensor endorses you or your use.
- Share Alike — If you remix, transform, or build upon the material, you must distribute your contributions under the same license as the original.
- No additional restrictions — You may not apply legal terms or technological measures that legally restrict others from doing anything the license permits.

Notices:

- You do not have to comply with the license for elements of the material in the public domain or where your use is permitted by an applicable exception or limitation.
- No warranties are given. The license may not give you all of the permissions necessary for your intended use. For example, other rights such as publicity, privacy, or moral rights may limit how you use the material.
