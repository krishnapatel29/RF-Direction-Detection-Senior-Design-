README
The following file will explain how to install and use the RF Direction Detection system.  

Stepping Motor Directions:
1. Download Ardiuno onto tyour laptop.
2. Upload the Stepping_Motor_Final.ino code from the Source Code folder.  
2. Connect the Arduino Uno Board USB to the laptop and connect that port to Arduino to upload the file form step 2.
3. Plug in the CNC shield to a 12 volt battery supply. 
4. Compile and upload the Arduino code to the boards.
5. Stepping motor with the loop antenna attached to it should start rotating.

Airspy Directions:
1. Download SDR package on RTL-SDR page
2. Launch SDRSharp.exe from the folder package. 
3. Connect the RTL-SDR dongle through USB. 
4. Change the source to "RTL-SDR(USB)". 
5. Select the wanted  frequency. 
6. Press play and observe data display. 

Mission Planner Directions:
1. Download Mission Planner. 
2. Open Mission Planner. 
3. Plug in the Pixhawk with telemetry radio 1 connected to the laptop. 
4. Connect the GPS to the Pixhawk.
5. Select "Connect" with the appropriate COM (USB port to which the Pixhawk is connected). 
6. Mission planner should display the map and flight parameters of the Pixhawk.
7. When outside, the user should see the geographical position of the Pixhawk on Mission planner. 

