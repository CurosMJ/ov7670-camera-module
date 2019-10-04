#ifndef ov7670_camera_h
#define ov7670_camera_h

class Camera {
  public:
    void setup_arduino();
    void setup_camera();
    void capture_and_transmit(unsigned short, unsigned short);
};

#endif