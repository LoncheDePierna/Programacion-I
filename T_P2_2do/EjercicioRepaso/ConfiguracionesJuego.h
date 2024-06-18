//
// Created by Alumnos on 18/06/2024.
//

#ifndef EJERCICIOREPASO_CONFIGURACIONESJUEGO_H
#define EJERCICIOREPASO_CONFIGURACIONESJUEGO_H


class ConfiguracionesJuego {

public:
    ConfiguracionesJuego();
    ConfiguracionesJuego(int resolution, int volume, int difficult);
    virtual ~ConfiguracionesJuego();

    int getResolution() const;
    void setResolution(int resolution);

    int getlvlVolume() const;
    void setlvlVolume(int volume);

    int getlvlDifficult() const;
    void setlvlDifficult(int difficult);

private:
    int resolution;
    int volume;
    int difficult;
};


#endif //EJERCICIOREPASO_CONFIGURACIONESJUEGO_H
