#ifndef CVOLUME_H
#define CVOLUME_H

class cVolume {
public:
    cVolume();
    cVolume(const cVolume& orig);
    virtual ~cVolume();
    
    void calcular();
    float volume(float);
private:

};

#endif /* CVOLUME_H */

