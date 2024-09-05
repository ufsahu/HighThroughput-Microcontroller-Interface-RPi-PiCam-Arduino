# High-Throughput System developed using Microcontroller Interface [RPi-PiCam-Arduino]

My Master's Thesis was Developing a High-Throughput System for Monitoring Zebrafish Animal Behaviour.

The system was based on a Microcontroller Interface Setup, using a Raspberry Pi Microcontroller (PiBoard Microcontroller RPi Zero W V1.1), the PiCam camera counterpart  (PiCam V2.1), and Arduino Uno R3.

The system was synced with a white LED Planar Light Source providing different lighting protocols programmed in the Arduino.

The lighting protocols consisted of a few seconds of darkness and then a few seconds of light stimuli. These protocols were developed simply by improvising the Arduino C script. Having a variety of lighting protocols allowed us to analyze the neurological behaviours and responses of the animal model towards those light stimuli. 
The time for light and dark frames was taken from the literature review. 

Following is the basic pipeline of the entire High-Throughput System:

![image](https://github.com/user-attachments/assets/1ac18795-51f4-4cf9-ad2b-82d22b3ae8d1)


The recorded videos were retrieved from the Raspbian environment. The idea was to execute PiCam recording and Arduino LED lighting protocols simultaneously. Once the protocol ends, Arduino sends a signal to the RPi Board to end the recording. This was repeated for different lighting protocols.

The main thesis can be accessed here: https://www.doria.fi/handle/10024/169613


The actual system is shown below. The light source is underneath the cardboard box. The rest of the circuit components are present on top of the box. This figure shows the outlook of the system. The circuit board on top was removed and the wet laboratory well-plate was placed inside the box for zebrafish experimentation. The box helps block the ambient light.


![image](https://github.com/user-attachments/assets/57c2fe24-e16f-4501-809d-1c1217f32941)




The system's circuitry and component placement is shown below as the top view of the system. Arduino, PiBoards and PiCam were placed on a plastic surface and the entire surface was placed on top of the box



![image](https://github.com/user-attachments/assets/6d87698a-fe6d-4671-869b-58203d8590ca)


