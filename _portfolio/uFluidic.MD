---

title: "Microfluidic Device"
excerpt: "Microfluidic device with resin-printed mold designed for precise flow control and size-based particle separation using pinch flow fractionation."
layout: single
classes: full
header:
  image: /assets/img/ufluidic.png
  teaser: /assets/img/ufluidic.png

---

The microfluidic device is a small-scale chip designed to manipulate and sort particles or cells within precisely controlled fluid channels. Applications include biological analysis, chemical testing, and particle separation for research and diagnostics.

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
   * Precise control over filter size and design allows microfluidic chips to isolate specific cell types with high purity and efficiency, which is crucial for separating rare cells like circulating tumor cells (CTCs) from blood.
   * The possibility of complex custom designs means microfluidic devices can adapt to the varying size and deformability of different cell populations, improving sorting accuracy for stem cells or white blood cells.
   * Lab-on-chip integration allows the sorting and analysis of cells to occur in a streamlined, small-scale system, reducing sample loss and contamination and making high-resolution, gentle cell handling feasible for sensitive biomedical applications.

---

# Design

## Placement of Outlet Boundaries for Small Particles, Large Particles, and Buffer Flow

This device was designed to sort two distinct particle size ranges (1) 125–150 µm and (2) 425–500 µm using PFF. Outlet boundaries were determined based on particle trajectories in the broadened section of the channel, calculated from theoretical flow relationships.

### Small Particle Range (125–150 µm)

To determine outlet placement for small particles, the largest size in the range was used since it defines the maximum displacement.  
   * (.7-.15/2)*(40/.7) = 35.714 mm (largest size in the range)
   * (.7-.125/2)*(40/.7) = 36.428 mm (smaller size in range)
Both particle sizes have cutoff points above 20 mm, so both are expected to enter the top outlet.

### Large Particle Range (425–500 µm)

For larger particles, the same relationship was used:  
   * (.7-.5/2)*(40/.7) = 25.714 mm (largest size in the range)
   * (.7-.425/2)*(40/.7) = 27.857 mm (smaller size in the range)
The cutoff between convergence into the top and middle channels occurs at 20 mm, so both large particles are expected to enter the middle outlet. The heaviest particle travels up to 25.714 mm, leaving about 5 mm of clearance before the buffer region begins to ensure no large particles enter the buffer outlet.

### Buffer Flow

The bottom outlet collects the buffer flow and collects fluid from the bottom of the broad section to 20 mm in height from the bottom of the broad section. The buffer region has a 20 mm-wide entrance, twice the width of the particle collection entrances (10 mm each). This ensures adequate buffer capacity and prevents it from diverting into particle outlets.

## Flow Balancing Strategy

To address flow balancing and prevent buffer flow from intruding into particle outlets, on-chip hydraulic resistance was added to the particle collection channels.

   * Buffer outlet channel: 5.56 mm long × 2.2 mm wide  
   * Particle outlet channels: 11.12 mm long × 2.2 mm wide (2× longer → ~2× more resistance)  

The longer, narrower particle channels increase resistance, while the buffer outlet remains shorter and offers less resistance. This ensures the buffer outlet naturally carries the majority of fluid, maintaining proper flow partitioning. The design minimizes contamination between separated particle streams and balances the fluid flow throughout the broad section and as it exits through the tubes.

## Additional Notable Design Choices

### Channel Geometry and Dimensions

   * Pinch width: 0.7 mm (1.4× the largest particle diameter, 500 µm)  
   * Pinch length: 6 mm  
   * Broad section width: ≥ 11 mm  
   * Broad section length: 15 mm  
   * Broad section height: 40 mm → broad section height : pinch width ratio was maximized for dimensions of device 
   * Channel height: 1.5 mm — provides clearance for 0.5 mm particles  

### Structural Design and Printability

   * Inlets/outlets: 2.2 mm posts extruded 1 mm above the mold to fit microfluidic barbs  
   * Edge spacing: ≥ 3 mm from device edge to allow strong glass bonding and prevent leaks  
   * Inlet/outlet spacing: ≥ 11 mm center-to-center  
   * Aspect ratio: Height-to-width ratio kept below 4:1 → (1.5 mm : 0.7 mm) = 2.14:1  
   * No internal undercuts or holes < 0.5 mm to allow clean demolding  

### Bubble Mitigation and Surface Quality

Smooth, rounded channels with fillets were included in the printed mold to minimize bubble accumulation and stress points. Although fillets were not included in CAD dimension drawings (to preserve accurate measurements), they are visible in the printed model. Fillets improve demolding, reduce stress concentrations, and enhance surface flow quality during operation.

## Potential Operational and Outlet Geometry Changes for Device Iteration

The outlet geometry could be modified to address flow instability observed during testing. The primary source of error was the low viscosity of the bulk solution, which caused turbulent flow in the broad section and disrupted the stable streamlines needed for effective pinch flow fractionation.

A key adjustment would be to reduce the overall device size. Previous designs with smaller dimensions maintained laminar flow more effectively. The enlarged version increased flow volume and velocity variation, making laminar conditions harder to sustain, particularly with lower-viscosity fluids. Scaling the device down could restore laminar flow and improve particle trajectory consistency.
Viscosity also influenced separation outcomes. Lower-viscosity fluids promoted turbulence, while higher-viscosity fluids caused large particles to float and move sluggishly.

If changing the device dimensions and fluid viscosity did not fully balance the outlet flow, further geometric modifications could be introduced. Replacing straight outlet channels with tortuous paths would add flow resistance and help balance the flow in the exit channel with the flow in the exit tubes. Additional refinements could include widening the buffer outlet, or further tapering transitions to reduce shear gradients,. These adjustments would stabilize the flow field, enhance separation consistency, and improve device robustness to fluid property variations.

---

# Discussion

## Explanation of Choosing Resin Printing

### Compared to Lithography

Traditional microfluidic mold fabrication techniques, such as photolithography, require expensive specialized equipment, cleanroom environments, and complex multi-step procedures that demand expert handling. This process is time-consuming and costly, which limits opportunities for rapid prototyping and iteration.

### Specific Advantages of Resin Printing

Resin printing, particularly using vat photopolymerization (VPP), offers much finer resolution and smoother surface finishes than filament-based 3D printing (FFF). Its ability to produce small, precise features aligns well with the micro-scale requirements of microfluidic channels, enabling accurate control of flow paths and particle separation.

After printing, resin parts are post-cured to complete polymer crosslinking. This step strengthens the device, enhances temperature resistance, and improves biocompatibility, though excessive curing can increase brittleness. Resin printing also enables materials with uniform mechanical properties, optical transparency, and design flexibility that are difficult to achieve with thermoplastic filaments.
Overall, resin printing provides a cost-effective and accessible method for rapidly prototyping detailed microfluidic molds with superior mechanical and surface characteristics.

## How to Scale-up and Modify to Handle a Wider Range of Particle Sizes

The number of exit channels could be increased to match the number of particle size ranges being separated. For example, separating small, medium, and large particles (three size ranges) would require four exit channels—one for the bulk fluid and three for the particle fractions. The exit channels would maintain consistent widths to ensure uniform flow resistance. The particle exit channels would also be made longer (a multiple of the bulk fluid exit length) to create higher resistance, since only a fraction of the total flow passes through them compared to the bulk outlet.

Practical limits exist on the number of exit channels, as each outlet must be spaced 11 mm apart from adjacent outlets and the device edge. The design also incorporates parameters such as exit channel height, pinch width, and broad channel height as functions of particle size. These parameters can be adjusted as the device is scaled or as the target particle size ranges change.

## What Factors Set the Lower Limit on the Particle Size that can be Separated with PFF

The lower limit on the particle size that can be separated using PFF is determined by fluid dynamics, fabrication constraints, and the tendency for particle stacking. For extremely small particles, Brownian motion dominates, causing random diffusion across streamlines rather than distinct flow paths. Fabrication becomes challenging at small scales because effective separation requires the pinch width to be only slightly larger than the particle diameter. Producing such fine, smooth features is difficult, and thin components are prone to breakage during printing, post-processing, and demolding. Additionally, if the particle diameter is too small relative to the channel and broad section depth, particles are more likely to stack on top of one another, reducing separation efficiency.

---

# Interactive CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b60281172102ed9f100e990?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

---

# Microfluidic Device Testing

<iframe width="560" height="315" src="https://www.youtube.com/embed/1GzNUHW4Ndg?si=39XfhUVnbD3jzACV" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>

---

# Microfluidic Device Gallery

<div style="display:block;">
  <figure style="margin:0 0 1.5rem 0; text-align:center;">
    <img src="/assets/img/ufluidic.png" alt="Resin Printed Mold"
         style="width:100%; height:400px; object-fit:cover; border:1px solid #eee; padding:6px; display:block; margin:auto;">
    <figcaption style="margin-top:8px; font-weight:600;">Resin Printed Mold</figcaption>
  </figure>

  <figure style="margin:0 0 1.5rem 0; text-align:center;">
    <img src="/assets/img/plasmaTreating.jpg" alt="Plasma Treating Process"
         style="width:100%; height:400px; object-fit:cover; border:1px solid #eee; padding:6px; display:block; margin:auto;">
    <figcaption style="margin-top:8px; font-weight:600;">Plasma Treating Process</figcaption>
  </figure>

  <figure style="margin:0 0 1.5rem 0; text-align:center;">
    <img src="/assets/img/updatedCAD.png" alt="Resin Print Mold CAD Drawing"
         style="width:100%; height:400px; object-fit:cover; border:1px solid #eee; padding:6px; display:block; margin:auto;">
    <figcaption style="margin-top:8px; font-weight:600;">Updated CAD Model</figcaption>
  </figure>

  <figure style="margin:0 0 1.5rem 0; text-align:center;">
    <img src="/assets/img/parametersCAD.png" alt="CAD Model Parameters"
         style="width:100%; height:400px; object-fit:cover; border:1px solid #eee; padding:6px; display:block; margin:auto;">
    <figcaption style="margin-top:8px; font-weight:600;">CAD Model Parameters</figcaption>
  </figure>

  <figure style="margin:0 0 1.5rem 0; text-align:center;">
    <img src="/assets/img/printandmold.png" alt="Device and Mold"
         style="width:100%; height:400px; object-fit:cover; border:1px solid #eee; padding:6px; display:block; margin:auto;">
    <figcaption style="margin-top:8px; font-weight:600;">Device and Mold</figcaption>
  </figure>

  <figure style="margin:0 0 1.5rem 0; text-align:center;">
    <img src="/assets/img/device.png" alt="Device"
         style="width:100%; height:400px; object-fit:cover; border:1px solid #eee; padding:6px; display:block; margin:auto;">
    <figcaption style="margin-top:8px; font-weight:600;">Device</figcaption>
  </figure>
</div>

---

# How to Create a Microfluidic Device with Resin Printing

1. Design the Mold in CAD (Fusion 360):
   * Sketch a microfluidic device mold using Autodesk Fusion.
   * Make sure your design follows all required dimensions (50 mm × 75 mm) and specifications for inlets, outlets, and channel spacing.
   * Constrain and label all sketches and features for clarity and printability.

2. Prepare and Print the Mold:
   * Export your completed CAD model and arrange multiple devices on a single printer build plate if possible.
   * Set printer resolution parameters to match minimum feature sizes and ensure the mold’s bottom face is flat and parallel to the resin vat.
   * Print the mold with the Form 3+/4 SLA printer, paying attention to required layer thickness and avoiding tall, thin features with aspect ratio above 4:1.

3. Post-Process the Print:
   * Wash the printed mold for 5 minutes in each FormWash station; do not exceed 15 total minutes.
   * Air dry the mold upside down for 30 minutes; make sure the surface is evenly matte.
   * Cure the mold briefly (60 seconds) at room temperature, with supports left in place to prevent warping.
   * Remove all support material carefully, without touching or damaging the internal features.

4. Inspect and Clean the Mold:
   * Use compressed air to clear any debris or resin from the channels.
   * Double-check for smoothness, lack of bubbles, and correct geometry.

5. Challenge: Leaching
   * Uncured resin monomers may leach out of the printed mold during curing.
   * These monomers interfere with PDMS crosslinking, causing incomplete curing and weak or loose device features.
   * This issue negatively affects device performance and bonding quality.
   * To prevent leaching, the mold surface can be coated with parylene.
   * The parylene coating acts as a barrier, blocking monomer diffusion and allowing complete PDMS curing.

6. Cast and Bond the Microfluidic Device:
   * After post-processing, use the mold to cast PDMS and let it cure.
   * Peel off the cured PDMS device and bond it to a clean glass slide, ensuring the perimeter adheres tightly.

---

