---
title: "MultiMaterial Pliers"
excerpt: "Multimaterial needle-nose pliers with integrated flexible spring designed for precision gripping of through-hole resistors and automatic return-to-open motion using 95A TPU for elastic recovery."
layout: single
classes: full
header:
  image: /assets/img/plierthumbnail.png
  teaser: /assets/img/plierthumbnail.png
---

The multimaterial needle-nose pliers are a functional prototype designed to grip and manipulate small components with precision. Applications include assembly INSERT APPLICATIONS!!!

# Introduction

## Project Description and About Print-in-Place Parts

The print-in-place (PIP) pliers are fully functional and fabricated in a single printing process without requiring extra fasteners or materials. Motion is enabled by combining rigid PLA handles and jaws with a flexible TPU spring hinge, while assembly uses a material-locking dovetail connection. This project demonstrates how multimaterial additive manufacturing and thoughtful PIP design can produce working mechanisms straight from the printer. These models rely on precise clearances and material choices, allowing hinged or moving components (whether printed together or separately with different materials) to remain distinct and mobile. The specific objective was to design needle nose pliers capable of picking up through-hole resistors, with a TPU spring that returns the jaws to the open position when not in use. This approach highlights how 3D printing can replace traditional multi-step manufacturing with a single, integrated process.

## Specific Applications of Print-in-Place Parts

General features achievable with PIP parts include gears, chain links, and hinges. Specific applications of these features range from phone and tablet stands that lock at different angles and fold flat, to figurines, fidget tools, pliers, and objects with working wheels ([source](https://3dspro.com/resources/blog/the-best-print-in-place-3d-models)).

PIP parts are also valuable in specialized fields like healthcare and aerospace, where “the simplified production of non-assembly mechanisms makes them advantageous” ([source](https://www.sciencedirect.com/science/article/pii/S2214860421000117)).

## Successful Combinations of Materials for Print-in-Place Parts

Common material combinations that work well for print-in-place parts include PLA and TPU, PLA and PVA, ABS and HIPS, as well as using fresh and recycled materials. Water-soluble supports like PVA are especially useful due to their low bonding with primary materials, enabling easy removal.

Successful bonding between two plastics depends on multiple factors:
- **Surface Energy:** Materials with similar surface energies and intermolecular forces bond better.
- **Chemical Composition:** Compatibility in chemical structures influences adhesion.
- **Shrinkage and Cooling Rates:** Differing shrinkage during cooling can result in warping, distortion, or layer separation.
- **Mechanical Compatibility:** Materials with vastly different flexibility or rigidity may not bond effectively.

Surface energy, the energy required to create or maintain a material’s surface, is a key factor. Polar materials have higher surface energy and tend to bond better, as seen in polymers like polycarbonate and nylon (medium surface energy), compared to low surface energy materials like polyethylene or PVA. Measuring contact angle helps quantify surface energy, which guides material selection to ensure good adhesion in print-in-place designs.

---

# Design

## Iterative Process

### Iteration 1

#### About the Design

#### Images of Iteration 1

<figure style="text-align:center;">
  <img src="/assets/img/iteration1.png" alt="First Iteration" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">First Iteration</figcaption>
</figure>

<figure style="text-align:center;">
  <img src="/assets/img/iteration1closed.png" alt="First Iteration Closed" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">First Iteration Closed</figcaption>
</figure>

<figure style="text-align:center;">
  <img src="/assets/img/squareinitial.png" alt="First Iteration of Flexible Component" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">First Iteration of Flexible Component</figcaption>
</figure>

---

### Iteration 2

#### About the Design

#### Images of Iteration 2

<figure style="text-align:center;">
  <img src="/assets/img/iteration2.png" alt="Second Iteration" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Second Iteration</figcaption>
</figure>

<figure style="text-align:center;">
  <img src="/assets/img/iteration2closed.png" alt="Second Iteration Closed" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Second Iteration Closed</figcaption>
</figure>

<figure style="text-align:center;">
  <img src="/assets/img/tip2.png" alt="Second Iteration of Tips" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Second Iteration of Tips</figcaption>
</figure>

<figure style="text-align:center;">
  <img src="/assets/img/square2.png" alt="Second Iteration of Flexible Component" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Second Iteration of Flexible Component</figcaption>
</figure>

---

## Design of the Final Iteration
INSERT DESCRIPTION

## Spring Component Creation of the Final Iteration
INSERT DESCRIPTION

## Spring Component Performance of the Final Iteration
INSERT DESCRIPTION...what material is used

## Relevant Specifications of the Final Iteration

The pliers feature an 80 mm jaw length, measured along the inner face from the tip to the lowest point before the hinge. The top 55 mm of each jaw is printed in TPU for flexibility and enhanced grip, while the lower section and legs are PLA for rigidity and strength. The internal square spring is composed of TPU, providing the necessary flex for operation. The jaw rests at a 14.14 mm open position.

Design parameters, including the flexible square dimensions, dovetail triangle size, key distances for interlocks, flexible jaw length, and extrusion height, were implemented to streamline the iterative CAD process. The dovetail interlock was designed using the rectangular pattern sketch feature and was designed with a 0.1 mm clearance fit. To maximize grip, 55 1 mm equilateral triangles were added to the internal face of the TPU section of plier tip. This was designed using the pattern along path body feature. The final printed model was scaled to 75% of the CAD size. Additional dimensions and parameters are viewable in the gallery section and CAD drawings. A 5 mm fillet was added to the vertical edges of the circle cut and a 10 mm fillet to the vertical edges of the plier body.

## Print Settings for All Iterations

| Iteration | Component                | Top/Bottom Layers | Perimeters | Fill Pattern | Fill Density | Printer Temperature                        |
|------------|--------------------------|-------------------|-------------|---------------|---------------|---------------------------------------------|
| **1** | original large PLA handles | 3 | 3 | rectilinear | 15% | 215 °C (layer 1), 210 °C (others) |
| **1** | large TPU tips             | 3 | 3 | rectilinear | 15% | 235 °C (layer 1), 230 °C (others) |
| **1** | large TPU square           | 0 | 3 | grid         | 15% | 235 °C (layer 1), 230 °C (others) |
| **1** | large TPU square           | 0 | 3 | grid         | 20% | 235 °C (layer 1), 230 °C (others) |
| **2** | revised large PLA handles  | 3 | 3 | rectilinear  | 15% | 215 °C (layer 1), 210 °C (others) |
| **2** | revised large TPU tips     | 4 | 3 | rectilinear  | 75% | 235 °C (layer 1), 230 °C (others) |
| **2** | revised large TPU square   | 0 | 3 | grid         | 13% | 235 °C (layer 1), 230 °C (others) |
| **2** | revised large TPU square   | 0 | 3 | grid         | 15% | 235 °C (layer 1), 230 °C (others) |
| **2** | revised large TPU square   | 0 | 3 | grid         | 18% | 235 °C (layer 1), 230 °C (others) |
| **2** | revised large TPU square   | 0 | 3 | grid         | 20% | 235 °C (layer 1), 230 °C (others) |
| **3** | **small PLA handles**      | **3** | **3** | **rectilinear** | **15%** | **215 °C (layer 1), 210 °C (others)** |
| **3** | **small TPU tips**         | **3** | **3** | **rectilinear** | **55%** | **235 °C (layer 1), 230 °C (others)** |
| **3** | small TPU square           | 0 | 3 | grid         | 20% | 235 °C (layer 1), 230 °C (others) |
| **3** | small TPU square           | 0 | 3 | grid         | 23% | 235 °C (layer 1), 230 °C (others) |
| **3** | small TPU square           | 0 | 3 | grid         | 25% | 235 °C (layer 1), 230 °C (others) |
| **3** | **small TPU square**       | **0** | **3** | **grid** | **27%** | **235 °C (layer 1), 230 °C (others)** |
| **3** | small TPU square           | 0 | 3 | grid         | 30% | 235 °C (layer 1), 230 °C (others) |

---

# Interactive CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811a51cbcefb62cecdd?mode=embed" width="640" height="480" allowfullscreen frameborder="0"></iframe>

---

# MultiMaterial Plier Testing

<iframe width="560" height="315" src="https://www.youtube.com/embed/l94vqVTBXvw" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

---

# Gallery of Final MultiMaterial Plier Iteration

<figure style="text-align:center;">
  <img src="/assets/img/pliersfinal.png" alt="Final Iteration of MultiMaterial Pliers" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Final Iteration of MultiMaterial Pliers</figcaption>
</figure>

<figure style="text-align:center;">
  <img src="/assets/img/finalcadparameterplier.png" alt="Plier CAD Parameters" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Plier CAD Parameters</figcaption>
</figure>

<figure style="text-align:center;">
  <img src="/assets/img/finalcaddrawplier.png" alt="Final Iteration CAD Drawing" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Final Iteration CAD Drawing</figcaption>
</figure>

---

# How to Operate the MultiMaterial Pliers

1. **Design the Model:** Create the plier assembly in CAD using parametric dimensions to streamline the iterative process.  
2. **Set Clearances:** Apply a 0.05 mm clearance to all interlocking and rotating features to ensure a fit between printed components.  
3. **Prepare for Printing:** Export the design as a multi-body file (STL or 3MF) and import it into SuperSlicer. For each print, delete the components that are not relevant to the selected material (PLA or TPU).  
4. **3D Print:** Print PLA components on one printer for rigid parts and TPU components on a separate printer for flexible parts. For flexible sections, use a grid infill pattern, remove top and bottom layers, and adjust infill percentage to tune flexibility.  
5. **Assemble and Test Fit:** After printing, align the PLA and TPU sections and verify the dovetail interlock and spring fit properly.  
6. **Operate the Pliers:** Compress the PLA handles to close the TPU-tipped jaws, using the TPU square spring to reopen the pliers upon release.
