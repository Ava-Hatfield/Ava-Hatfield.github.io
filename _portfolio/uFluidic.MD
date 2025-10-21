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

## What is pinch flow fractionation?
Pinch flow fractionation (PFF) is a passive microfluidic method that separates particles by size using steady laminar flow. It doesn’t require external forces or moving parts, making it simple and reliable for small-scale separations.

## How does PFF work?
In a PFF device, a mixture of particles flows beside a faster buffer stream that “pinches” the sample against one wall of a narrow channel. At this pinch region, the particles align on nearly the same streamline. As the channel widens, larger particles shift farther from the wall due to hydrodynamic lift, while smaller ones stay close, allowing each group to exit through separate outlet channels downstream.

## Specific Applications that Require Sorting Small Particles
Specific applications of small particle sorting facilitated by microfluidic devices span areas such as environmental monitoring, food and chemical processing, and biomedical research ([source](https://www.flow3d.com/microfluidics-particle-sorting-hydrodynamics/#:~:text=Microfluidic%20particle%20sorting%20has%20applications,hydrodynamics%20of%20the%20microfluidic%20platform)).

In particular, within biomedical applications, particle-sorting technology enables the separation of biological cells—such as blood cells, stem cells, and tumor cells—for research and medical testing. Microfluidic devices are well suited for this task because they precisely control fluid movement at the microscale, allowing cells to be sorted with high efficiency and purity. Many of these methods operate label-free, distinguishing healthy and diseased cells based on properties like size or flexibility. This approach is especially valuable in cancer studies, stem cell therapy, and precision medicine, where isolating specific cell types is essential for testing or treatment. Compared to large-scale separation methods, microfluidic systems are faster, more accurate, and require smaller sample volumes, making them highly effective for biomedical applications ([source](https://pmc.ncbi.nlm.nih.gov/articles/PMC11853672/#:~:text=These%20studies%20demonstrate%20the%20broad,clinical%20diagnostics%20and%20personalized%20medicine)).

## Benefits of PFF over Traditional Techniques/Filters for Sorting Small Particles
Compared to conventional membrane filters, pinch flow fractionation (PFF) offers several key advantages for sorting small particles. Standard filters often need large sample volumes, lack precise size cutoff control, and provide limited options for adjusting pore size or geometry. It's also uncommon to analyze samples directly on the filter device during sorting.

On the other hand, PFF and other microfluidic methods make it possible to design filters with very sharp size cutoffs. These systems can be tailored easily for different experiments, giving excellent control over both filter structure and how particles are managed. PFF technology also allows for the development of lab-on-a-chip devices, combining efficient sorting with compact design and integration ([source](https://pmc.ncbi.nlm.nih.gov/articles/PMC7082176/table/t1/)).

How PFF is advantageous in the context of separating biological cells:
Precise control over filter size and design allows microfluidic chips to isolate specific cell types with high purity and efficiency, which is crucial for separating rare cells like circulating tumor cells (CTCs) from blood.
The possibility of complex custom designs means microfluidic devices can adapt to the varying size and deformability of different cell populations, improving sorting accuracy for stem cells or white blood cells.
Lab-on-chip integration allows the sorting and analysis of cells to occur in a streamlined, small-scale system, reducing sample loss and contamination and making high-resolution, gentle cell handling feasible for sensitive biomedical applications.

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
