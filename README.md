#G8r_32

## Description

This is a STM32 BluePill sketch for transforming MIDI data into gates, hence the name. It is a port of another DIY module I made for myself years ago using a Teensy.
With this build I wanted to accoumplish two things. The first is I wanted to use a BluePill and save myself some money that way. And second I wanted an excuse to clean up my code and organize it into more proper OOP paradigm.

## Checking out the repo

I'm making use of git submodules here for the UMIDI library.  If you want to use this repo you have two choices. You can recursively checkout the repos as shown below:

1. Clone the repository:

```bash
git clone https://github.com/juanlittledevil/g8r_32.git
```

2. Navigate into the cloned repository:

```bash
cd g8r_32
```

3. Initialize and update the submodules:

```bash
git submodule update --init --recursive
```

This command will initialize any submodules defined in the .gitmodules file and update them to their latest commits.

If you want to make sure that your git pull fetches all submodules just run this command too, but be aware that if there are breaking changes to UMIDI later it may affect your code.

```bash
git config submodule.recurse true
```

Alternatively, You can choose not to checkout any of the submodules and instead download UMIDI directly from the repo and unpack it's content directly into the lib folder as such:

```bash
lib/UMIDI/
```

So you end up with:

```bash
lib/UMIDI/src/UMIDI.h
lib/UMIDI/src/UMIDI.cpp
```

## License

This project is licensed under the Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License. To view a copy of this license, visit [https://creativecommons.org/licenses/by-nc-sa/4.0](https://creativecommons.org/licenses/by-nc-sa/4.0).

### You are free to:

- **Share** — copy and redistribute the material in any medium or format
- **Adapt** — remix, transform, and build upon the material

Under the following terms:

- **Attribution** — You must give appropriate credit, provide a link to the license, and indicate if changes were made. You may do so in any reasonable manner, but not in any way that suggests the licensor endorses you or your use.
- **NonCommercial** — You may not use the material for commercial purposes.
- **ShareAlike** — If you remix, transform, or build upon the material, you must distribute your contributions under the same license as the original.

### No additional restrictions

You may not apply legal terms or technological measures that legally restrict others from doing anything the license permits.

For commercial licensing options, please contact juanlittledevil (at) gmail dot com.
