---

title: "Syringe Pump"
excerpt: "Syringe pump with 3D printed components capable operating syringes of varying size at varying flow rates"
header:
  image: /assets/img/Syringe-Thumbnail.png
  teaser: /assets/img/Syringe-Thumbnail.png
gallery:
  - image_path: assets/img/Syringe-3D-Printing.png
  - image_path: assets/img/simplified-wiring.png
  - image_path: assets/img/syringe-3D-rending.png

---

The syringe pump is a compact device designed to steadily deliver precise volumes of liquid. Applications include healthcare (accurate drug delivery) and scientific research (controlled reagent addition).  

# Key Features:

* Adjustable Flow Rate: theoretical maximum flow rate of 60.26 mL/min (5 mL syringe) and 103.96 mL/min (20 mL syringe), controlled in Arduino.  
* LED Status Indicators: Green = running, Yellow = paused, Red = syringe empty.  
* Single-Button Control: Simplifies operation for quick start/pause.  
* Safety Measures: Limit switch prevents over-travel; enclosed electronics reduce contamination risk. 
* Modular Design: 3D-printed supports allow syringes of varying diameters to be used interchangeably. 
* Cost-Effective Fabrication: Most parts printed in PLA; high-heat components in ABS.  

---

# Interactive CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e046d047d8a8a1c5f?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

---

# Syringe Pump Gallery

{% include gallery %}

---

# Off-the-Shelf Parts

| Item Description                                                | Quantity |
|-----------------------------------------------------------------|----------|
| 250 mm lead screw with 2 mm pitch and 2 mm lead                 | 1        |
| 250 mm lead screw with 2 mm pitch and 8 mm lead                 | 1        |
| 1/4" x 8 mm Flexible Coupling                                   | 1        |
| 200 mm linear rod with 8 mm diameter                            | 2        |
| LM8UU Linear bearing for 8 mm diameter rod                      | 2        |
| 2040 Aluminum Extrusion 1' Length                               | 1        |
| Nema 17 Stepper Motor                                           | 1        |
| MEAN WELL RQ-65D AC-DC Power Supply Quad (5V, 12V, 24V, 12V, 4A)| 1        |
| Arduino Uno                                                     | 1        |
| A4988 Stepper Driver                                            | 1        |
| Small Breadboard                                                | 1        |
| Panel Mount Latching Push Buttons                               | 1        |
| Limit Switch                                                    | 1        |
| RGB Common Cathode LED (Supplied by group)                      | 1        |

---

# 3D Printed Parts

| Part                      | Material | Function                                       |
|---------------------------|----------|------------------------------------------------|
| Motor Mounting Plate      | ABS      | Heat resistant; holds stepper motor            |
| Carriage                  | PLA      | Transfers motor motion to syringe plunger      |
| End Support (closed)      | PLA      | Holds back of syringe securely                 |
| End Support (Syringe)     | PLA      | Holds syringe end at correct height            |
| Custom End Support (tip)  | PLA      | Holds syringe tip at correct height            |
| Enclosure (housing)       | PLA      | Protects circuitry; water-resistant design     |

---

# Arduino Code

[View Arduino Code](https://ava-hatfield.github.io/assets/Arduino_Syringe_Pump_Code.ino)

---

# How to Operate the Syringe Pump

1. Prepare Setup  
   * Upload Arduino code to the microcontroller.  
   * Load syringe with desired liquid.  

2. Insert Syringe  
   * Rest syringe tip on front support.  
   * Slide plunger into back support.  

3. Adjust Carriage  
   * Twist coupler until carriage rests against plunger.  

4. Input Parameters  
   * Enter syringe internal diameter (mm) and desired flow rate (mL/min).  

5. Run Pump  
   * Press the button once to start.  
   * LED color indicates status: Green = running, Yellow = paused, Red = out of liquid.  

---

