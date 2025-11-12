---
title: "MultiMaterial Pliers"
excerpt: "Multimaterial needle-nose pliers with integrated flexible spring designed for precision gripping of through-hole resistors and automatic return-to-open motion using 95A TPU for elastic recovery."
layout: single
classes: wide
header:
  image: /assets/img/plierthumbnail.png
  teaser: /assets/img/plierthumbnail.png
---

The multimaterial needle-nose pliers are a functional prototype designed to grip and manipulate small components with precision.

# Introduction

## Project Description and About Print-in-Place Parts

The multimaterial pliers incorporate the essence of print-in-place (PIP) design, functioning immediately upon removal from the print bed without the need for fasteners, adhesives, or post-processing. Motion is achieved by combining rigid PLA handles and jaws with a flexible TPU spring hinge, joined through a mechanical dovetail connection. While the model operates as a fully assembled mechanism straight from printing, it differs slightly from a traditional single-material PIP design. Instead of relying on printed clearances between moving joints, motion arises from the integration of a separate flexible element, the TPU hinge, which provides elasticity and allows the jaws to return to the open position. This approach captures the functional intent of PIP manufacturing while demonstrating how multimaterial additive processes can achieve similar outcomes through mechanical and material innovation. The objective of the project was to design and print needle-nose pliers that follow print-in-place principles. The pliers were designed to pick up through-hole resistors and return to an open position when not in use.

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

The first iteration followed a common print-in-place plier design consisting of two legs and two arms made of PLA and an internal flexible square made of TPU. A key modification was the integration of TPU plier jaws, intended to enhance grip when picking up resistors.

However, several issues were identified. The CAD model was initially oversized and required scaling to 75% in SuperSlicer, yet the reduced version remained too large for functional movement. The leg width also restricted the jaws’ ability to fully close (see image First Iteration Closed).

Additionally, the internal flexible square was designed with edges aligned to the X and Y axes, leading the TPU grid pattern to print at an incorrect 45-degree angle and causing incorrect motion (see image First Iteration of Flexible Component). These flexible squares differed from those shown in First Iteration and First Iteration Closed. The first iteration also had no clearance between TPU and PLA components, still allowing for assembly but making separation very difficult.

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

Iteration 2 maintained similar dimensions to the first design and was again scaled to 75% in SuperSlicer. Several modifications were made, including rotating the internal flexible TPU square by 45 degrees to achieve the correct motion orientation and adding a -0.1 mm offset to the TPU dovetail faces to provide clearance. The legs were made wider and slightly thinner to increase the plier’s closing range, and a 1 mm equilateral triangle pattern was added to the internal TPU jaw surfaces for additional grip (see image Second Iteration of Tips).

Despite these adjustments, the pliers remained too large for effective functionality. From a rapid prototyping perspective, scaling in SuperSlicer prevented the pliers from being a truly parametric model. The -0.1 mm offset introduced excessive clearance, reducing visual precision, while the added jaw texture offered minimal functional benefit, as the TPU already provided sufficient grip. Additionally, the internal flexible square, printed with only three perimeters, proved too weak at this size (see image Second Iteration of Flexible Component).

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

The final iteration followed a similar overall structure to the first two but was fully redesigned in CAD to ensure accurate print dimensions. The internal flexible square was modeled with a rectangular perimeter of interlocking triangular features to form a dovetail mechanism between TPU and PLA components. Because the PLA and TPU components were printed separately and joined through a dovetail interface, the connection relies primarily on mechanical interlock. The TPU’s flexibility and surface friction, rather than molecular adhesion, result in a stable connection while still allowing separation. However, as mentioned earlier TPU and PLA are a popular combination for dual material extrusion. The triangular jaw pattern from Iteration 2 was removed, as the TPU alone provided sufficient grip for handling resistors. The finalized plier size operate smoothly and allow one-handed use. Multiple parameters are implemented in the CAD model to support easy scaling or refinement in future iterations (see image Plier CAD Parameters).

## Spring Component Creation and Performance of the Final Iteration

The internal flexible square underwent several design and print tests using varying infill percentages and patterns (see image Alternate Infill Percentages of Internal Flexible Square and Print Settings for All Iterations table). The final selected spring component was printed in TPU with 0 top layers, 0 bottom layers, three perimeters, a grid infill pattern, and 27% infill density. This combination provided an effective balance of flexibility and durability, resulting in consistent spring motion and reliable structural performance.

## Relevant Specifications of the Final Iteration

- Jaws have an internal face length of 29 mm and a depth of 10 mm.
- TPU flexibility allows the jaws to close over a surface area instead of a single contact point.
- A -0.05 mm offset on the TPU dovetail triangle faces enabled proper clearance fit.
- At rest, the jaws remain 8.29 mm apart.
- Jaws come to a close with a force compressing the legs in.
- Jaws have a capacity of 18.5 mm when a force is applied to pull the legs apart.
- The final pliers successfully picked up 10 through-hole resistors in 30 seconds.

<figure style="text-align:center;">
  <img src="/assets/img/squarefinal.png" alt="Alternate Infill Percentages of Internal Flexible Square" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Alternate Infill Percentages of Internal Flexible Square</figcaption>
</figure>

## GIF of Final Iteration Working

<video src="assets/img/ezgif-635096b60ad545fc.gif" autoplay loop muted playsinline width="400"></video>

---

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

## Potential Changes for Future Iterations

Future designs could focus on improving precision, grip, and overall usability. Adding an extrusion to the inner face of both jaws would allow them to meet in parallel over a greater surface area, improving contact and control when gripping components. Reducing the overall extrusion height could make the pliers more compact and better suited for accessing tight spaces. Gaining experience with a dual-material 3D printer would also enable more seamless integration of rigid and flexible elements in a single print. Increasing the hinge’s resting angle could expand the pliers’ opening capacity for larger components. Finally, fabricating the jaws entirely from PLA for strength and then applying a dovetail-connected or coated TPU layer to the inner surfaces could combine rigidity with enhanced grip performance.

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
  <img src="/assets/img/finalparameterplier.png" alt="Plier CAD Parameters" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
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
