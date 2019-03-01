//
// Created by jglrxavpok on 14/01/19.
//

#ifndef TECHTHETACHYON_LOWLEVEL_SICKDT35_B15851_H
#define TECHTHETACHYON_LOWLEVEL_SICKDT35_B15851_H

#include <stdint.h>

class SICKDT35_B15851 {

public:
    SICKDT35_B15851() = default;

    /**
     * Constructeur de la représentation des capteurs SICK. Le câble gris (MF) n'est pas pris en compte.
     * @param pin pin connectée au câble blanc (QA/Q2 -> sortie)
     * @param bord bas de l'intervalle de détection du SICK
     * @param bord haut de l'intervalle de détection du SICK
     */
    explicit SICKDT35_B15851(uint8_t pin, uint16_t rangeMin = 60, uint16_t rangeMax = 300);

    /**
     * Lis la distance avec le capteur (prend en compte le range configuré)
     * @return
     */
    uint16_t readDistance();
    /**
     * Configure l'intervalle de détection du capteur
     * @param min
     * @param max
     */
    void setRange(uint16_t min, uint16_t max);

private:
    uint8_t pin = 255;
    uint16_t rangeMin;
    uint16_t rangeMax;
};


#endif //TECHTHETACHYON_LOWLEVEL_SICKDT35_B15851_H
