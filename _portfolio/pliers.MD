---

title: "MultiMaterial Pliers"
excerpt: "Multimaterial needle-nose pliers with integrated flexible spring designed for precision gripping of through-hole resistors and automatic return-to-open motion using 95A TPU for elastic recovery."
layout: single
classes: full
header:
  image: /assets/img/ufluidic.png
  teaser: /assets/img/ufluidic.png

---

The multimaterial needle-nose pliers are a functional prototype designed to grip and manipulate small components with precision. Applications include assembly INSERT APPLICATIONS!!!

# Introduction 

## Project Description and About Print-in-Place Parts

The print-in-place (PIP) pliers are fully functional and fabricated in a single printing process without requiring extra fasteners or materials. Motion is enabled by combining rigid PLA handles and jaws with a flexible TPU spring hinge, while assembly uses a material-locking dovetail connection. This project demonstrates how multimaterial additive manufacturing and thoughtful PIP design can produce working mechanisms straight from the printer. These models rely on precise clearances and material choices, allowing hinged or moving components (whether printed together or separately with different materials) to remain distinct and mobile. The specific objective was to design needle nose pliers capable of picking up through-hole resistors, with a TPU spring that returns the jaws to the open position when not in use. This approach highlights how 3D printing can replace traditional multi-step manufacturing with a single, integrated process.

## Specific Applications of Print-in-Place Parts

General features achievable with PIP parts include gears, chain links, and hinges. Specific applications of these features range from phone and tablet stands that lock at different angles and fold flat, to figurines, fidget tools, pliers, and objects with working wheels ([source](https://3dspro.com/resources/blog/the-best-print-in-place-3d-models)).

PIP parts are also valuable in specialized fields like healthcare and aerospace, where “the simplified production of non-assembly mechanisms makes them advantageous” ([source](https://www.sciencedirect.com/science/article/pii/S2214860421000117?utm_source=chatgpt.com).

## Successful Combinations of Materials for Print-in-Place Parts

Common material combinations that work well for print-in-place parts include PLA and TPU, PLA and PVA, ABS and HIPS, as well as using fresh and recycled materials. Water-soluble supports like PVA are especially useful due to their low bonding with primary materials, enabling easy removal.
Successful bonding between two plastics depends on multiple factors:
   * Surface Energy: Materials with similar surface energies and intermolecular forces bond better. For example, PLA (hydrogen bonding) and ABS (van der Waals forces) do not bond well together.
   * Chemical Composition: Compatibility in chemical structures influences adhesion.
   * Shrinkage and Cooling Rates: Differing shrinkage during cooling can result in warping, distortion, or layer separation.
   * Mechanical Compatibility: Materials with vastly different flexibility or rigidity may not bond effectively.

Surface energy, the energy required to create or maintain a material’s surface, is a key factor. Polar materials have higher surface energy and tend to bond better, as seen in polymers like polycarbonate and nylon (medium surface energy), compared to low surface energy materials like polyethylene or PVA. Measuring contact angle helps quantify surface energy, which guides material selection to ensure good adhesion in print-in-place designs.

---

# Design

## Iterative Process
INSERT DESCRIPTION

## About the Design
INSERT DESCRIPTION

## Spring Component Creation
INSERT DESCRIPTION

## Spring Component Performance
INSERT DESCRIPTION...what material is used

## Relevant Specifications

The pliers feature an 80 mm jaw length, measured along the inner face from the tip to the lowest point before the hinge. The top 55 mm of each jaw is printed in TPU for flexibility and enhanced grip, while the lower section and legs are PLA for rigidity and strength. The internal square spring is composed of TPU, providing the necessary flex for operation. The jaw rests at a 14.14 mm open position.

Design parameters, including the flexible square dimensions, dovetail triangle size, key distances for interlocks, flexible jaw length, and extrusion height, were implemented to streamline the iterative CAD process. The dovetail interlock was designed using the rectangular pattern sketch feature and was designed with a 0.1 mm clearance fit. To maximize grip, 55 1 mm equilateral triangles were added to the internal face of the TPU section of plier tip. This was designed using the pattern along path body feature. The final printed model was scaled to 75% of the CAD size. Additional dimensions and parameters are viewable in the gallery section and CAD drawings.

## Print Settings
INSERT DESCRIPTION

---

# Interactive CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811a51cbcefb62cecdd?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

---

# MultiMaterial Plier Testing
could insert video
<iframe width="560" height="315" src="https://www.youtube.com/embed/1GzNUHW4Ndg?si=39XfhUVnbD3jzACV" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>

---

# MultiMaterial Plier Gallery

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

# How to Operate the MultiMaterial Pliers

1. 
---
