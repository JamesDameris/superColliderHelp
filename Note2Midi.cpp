/* Created By James Dameris
** October 21, 2021
** Santa Clara University
** email me at jdameris@scu.edu for feature requests
**/

#include <iostream>
#include <cassert>
#include <cmath>
#include <string>

/* Program to convert piano note names to midinotes */ 
namespace midinote 
{

class midiNote 
{
    private:
        int midi;
        int octave;
        std::string pNote;

    public:
        // Constructors
        midiNote() {
            this->midi = 0;
            this->pNote = "";
            this->octave = 0;
        }
        // prints the midi
        void midiPrint() {
            std::cout << midi << std::endl;
        }
        // Converts piano note to midi
        void midiConv() {
            std::cout << "Insert A-G and octave (0-8). Use # for sharp and b for flat. Example format is C0# for C# octave 0." << std::endl;
            std::cin >> pNote;
            if (pNote.length() >= 4 && pNote.length() <= 1) {
                std::cout << "incorrect format" << std::endl;
                return;
            }
            switch (pNote[0]) {
                case 'A': case 'a':
                    midi = 9;
                    if (pNote[2] == '#') {
                        ++midi;
                    }
                    else if (pNote[2] == 'b') {
                        --midi;
                    }
                    break;

                case 'B': case 'b':
                    midi = 11;
                    if (pNote[2] == '#') {
                        ++midi;
                    }
                    else if (pNote[2] == 'b') {
                        --midi;
                    }
                    break;

                case 'C': case 'c':
                    midi = 0;
                    if (pNote[2] == '#') {
                        ++midi;
                    }
                    else if (pNote[2] == 'b') {
                        --midi;
                    }
                    break;

                case 'D': case 'd':
                    midi = 2;
                    if (pNote[2] == '#') {
                        ++midi;
                    }
                    else if (pNote[2] == 'b') {
                        --midi;
                    }
                    break;

                case 'E': case 'e':
                    midi = 4;
                    if (pNote[2] == '#') {
                        ++midi;
                    }
                    else if (pNote[2] == 'b') {
                        --midi;
                    }
                    break;

                case 'F': case 'f':
                    midi = 5;
                    if (pNote[2] == '#') {
                        ++midi;
                    }
                    else if (pNote[2] == 'b') {
                        --midi;
                    }
                    break;

                case 'G': case 'g':
                    midi = 7;
                    if (pNote[2] == '#') {
                        ++midi;
                    }
                    else if (pNote[2] == 'b') {
                        --midi;
                    }
                    break;
                default:
                    break;
            }
            octave = pNote[1] - 48;
            midi += 24 + 12 * octave;
        }
};


}