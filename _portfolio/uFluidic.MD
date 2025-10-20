---

title: "uFluidic Device"
excerpt: "INSERT EXCERPT"
layout: single
classes: full
header:
  image: /assets/img/ufluidic.png
  teaser: /assets/img/ufluidic.png

---

Description on what a microfluidic device is

# Introduction 
## Introduction
---

# Design 

---

# Discussion 

---

# Interactive CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811ac3e7928ce4a2e9f?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

---

# Syringe Pump Gallery

<p style="display:flex;gap:1rem;flex-wrap:wrap;align-items:flex-start;">
  <figure style="flex:1 1 300px;text-align:center;margin:0;">
    <img src="/assets/img/ufluidic.png" alt="Resin Printed Mold" style="max-width:100%;height:auto;border:1px solid #eee;padding:6px;">
    <figcaption style="margin-top:8px;font-weight:600;">Resin Printed Mold</figcaption>
  </figure>


  <figure style="flex:1 1 300px;text-align:center;margin:0;">
    <img src="/assets/img/fusionUFluidicDrawing.png" alt="Resin Print Mold CAD Drawing" style="max-width:100%;height:auto;border:1px solid #eee;padding:6px;">
    <figcaption style="margin-top:8px;font-weight:600;">Resin Print Mold CAD Drawing</figcaption>
  </figure>


  <figure style="flex:1 1 300px;text-align:center;margin:0;">
    <img src="/assets/img/plasmaTreating.jpg" alt="Plasma Treating Process" style="max-width:100%;height:auto;border:1px solid #eee;padding:6px;">
    <figcaption style="margin-top:8px;font-weight:600;">Plasma Treating Process</figcaption>
  </figure>
</p>


---

# How to Operate the Microfluidic Device

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
