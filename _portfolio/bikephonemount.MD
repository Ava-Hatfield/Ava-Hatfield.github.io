---
title: "Bike Phone Mount"
excerpt: "Top-down-designed bike phone holder with a spring-loaded detent for tool-free rotation between portrait and landscape orientations."
layout: single
classes: wide
header:
  image: /assets/img/upviewholder.png
  teaser: /assets/img/horzviewholder.png
---

The rotating phone holder is a functional prototype engineered to mount on a bike handlebar and provide stable, tool-free orientation changes while riding.

# Introduction

## Top-Down Modeling Description

Top-down modeling is a CAD approach where you begin with a main reference component and create all other parts in relation to it. In Fusion 360, bodies don’t store positional information, so turning a body into a component is essential for building assemblies. Every new part must start by creating a new component, making it active, and keeping all sketches and features inside it so they don’t appear in the parent assembly. With this structure, each component holds its own sketches, dimensions, and position in space. When parts are already modeled in the correct location, as-built joints can be used to define their relationships without moving anything. This method keeps the design organized and ensures all parts fit together as the assembly develops.

## Top-Down Modeling in the Phone-Holder Design

For this project, top-down modeling allowed for a clear and organized structure by enabling the phone holder to be designed directly in its assembled context. The process began with a parent component (“Bike Phone Holder”) and grounded handlebar component as the fixed reference. All other parts—such as the grip that holds the phone and the mount that attaches to the handlebars—were each created as new components so their sketches and features stayed separate and easy to edit. This approach made it straightforward to view and adjust different portions of the design without losing track of where sketches belonged. Within the mount, subcomponents for the spring and ball in the detent rotation mechanism were added, along with the imported iPhone model and hardware fasteners. Modeling everything in place enabled the use of as-built joints and ensured that the rotation mechanism, phone grip, and mounting assembly fit together from the start.

## Parts Used in the Design

| Part                                                   | Material / Off-the-Shelf | Quantity |
|--------------------------------------------------------|---------------------------|----------|
| Phone Case Body                                        | TPU 95A                   | 1        |
| Rotating Mechanism Body                                | PLA                       | 1        |
| Fastener Body                                          | PLA                       | 1        |
| Mount Base Body                                        | PLA                       | 1        |
| Mount Base Cover                                       | PLA                       | 1        |
| 8 mm Diameter Ball for Detent Rotation Mechanism       | Off the Shelf             | 1        |
| 6 mm Diameter Spring for Detent Rotation Mechanism     | Off the Shelf             | 1        |
| M3 Heat Set Insert                                     | Off the Shelf             | 8        |
| M3x6 Bolt                                              | Off the Shelf             | 4        |
| M3x10 Bolt                                             | Off the Shelf             | 6        |
| M3 Nut                                                 | Off the Shelf             | 2        |

---

# Design

## Rotation Mechanism

The rotation mechanism utilizes a detent system designed to allow the phone to snap between vertical and horizontal orientations through 90 degrees of rotation. The mechanism consists of an 8 mm steel ball and a spring that compresses to 7.5 mm and expands to approximately 15 mm, providing the necessary preload. The rotating component is a cylindrical body with 8 mm circular recesses positioned along one quarter of its perimeter; each recess is offset 0.5 mm from the cylinder’s outer surface. This geometry enables the ball to seat securely within each recess, creating a tactile lock at the target orientations while maintaining low enough resistance for smooth user-driven rotation.

The mechanism works well, as shown in the videos below. A potential improvement for future iterations would be to increase the height of the mount (so the phone would have clearance for 360-degree rotation) and add 8 mm circular detent cuts around the full perimeter of the rotating cylinder to enable full 360-degree indexed rotation.

## Type of 3D Printing Used and Chosen Material

FFF filament printing was used for the phone holder, enabling rapid iteration and material selection based on mechanical performance. TPU 95A was chosen for the phone case due to its flexibility, allowing the phone to snap securely past a tight retaining lip while maintaining enough strength to support the device. PLA was used for the fastener, mount, and rotation mechanism because it provided the necessary stiffness and stability to clamp onto the handlebars and support the rotating assembly. A potential future refinement could involve adding a TPU dovetail interlock on the fastener’s contact surface to enhance grip, although the current design’s intentional gap in the fastener legs creates an interference fit that already provides sufficient friction on the handlebars.

## Changes to Account for 3D Printing Process

Several print iterations were required to refine material choices, component geometry, and print orientation. Early prototypes printed entirely in ABS lacked adequate structural strength, and an attempt to print the rotating component directly onto the phone-holding body failed when the supporting post snapped during support removal. These iterations highlighted the need for increased clearance around the spring and ball, as well as the benefit of printing parts separately and assembling them with heat-set inserts and screws rather than relying on single-piece prints with excessive support material. The 8 mm detent cuts were ultimately offset by 0.5 mm from the cylinder’s perimeter to ensure smooth rotation. Later attempts to print the mount and handlebar fastener as a single piece also failed due to unfavorable print orientation, reinforcing the decision to fabricate these components as separate, mechanically joined parts.

<figure style="text-align:center;">
  <img src="/assets/img/printfailPLA.png" alt="PLA Print Failure" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">PLA Print Fail Due to Print Orientation</figcaption>
</figure>

<figure style="text-align:center;">
  <img src="/assets/img/printfailABS.png" alt="ABS Print Failure" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">ABS Print Failure</figcaption>
</figure>

<figure style="text-align:center;">
  <img src="/assets/img/showprintfailABS.png" alt="ABS Print Failure" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Details of ABS Print Failure</figcaption>
</figure>

---

# Interactive CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b6028110d547df6bd7a375f?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

---

# Phone-Holder Demonstration

<iframe width="560" height="315" src="https://www.youtube.com/embed/_Zew6penxaM" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

---

# Gallery of Final Phone Holder Iteration

## Rendered Images

<figure style="text-align:center;">
  <img src="/assets/img/assemblyrender.png" alt="Render of Phone Holder" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Render of Phone Holder</figcaption>
</figure>

<figure style="text-align:center;">
  <img src="/assets/img/barrender.png" alt="Individual Top-Down Component ~ Handle Bars" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Individual Top-Down Component ~ Handle Bars</figcaption>
</figure>

<figure style="text-align:center;">
  <img src="/assets/img/griprender.png" alt="Individual Top-Down Component ~ Phone Grip and Rotation Mechanism Front View" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Individual Top-Down Component ~ Phone Grip and Rotation Mechanism Front View</figcaption>
</figure>

<figure style="text-align:center;">
  <img src="/assets/img/gripbackrender.png" alt="Individual Top-Down Component ~ Phone Grip and Rotation Mechanism Back View" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Individual Top-Down Component ~ Phone Grip and Rotation Mechanism Back View</figcaption>
</figure>

<figure style="text-align:center;">
  <img src="/assets/img/mountrender.png" alt="Individual Top-Down Component ~ Phone Holder Mount" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Individual Top-Down Component ~ Phone Holder Mount</figcaption>
</figure>

## Additional Images

<figure style="text-align:center;">
  <img src="/assets/img/reallifeholder.png" alt="Holder in Use" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Holder in Use</figcaption>
</figure>

<figure style="text-align:center;">
  <img src="/assets/img/mechanism.png" alt="Rotation Mechanism" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Rotation Mechanism</figcaption>
</figure>

<figure style="text-align:center;">
  <img src="/assets/img/mechanismcrosssection.png" alt="Cross Section View Displaying Rotation Mechanism" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Cross Section View Displaying Rotation Mechanism</figcaption>
</figure>

---

# GIF of Phone Holder Rotating

<img src="/assets/img/IMG_7103.gif" alt="Phone Holder Demonstration" width="480">

---

# How to Assemble and Use the Phone Holder

1. Install all eight M3 heat-set inserts into their designated locations.
2. Place the spring and 8 mm ball into the detent pocket at the base of the mount.
3. Insert the rotating cylinder above the spring-and-ball mechanism.
4. Position the mount cover over the cylinder and secure it to the mount base using four M3×10 screws.
5. Attach the phone case to the rotating cylinder using two M3×6 screws.
6. Join the mount base post to the top fastener with two M3×6 screws.
7. Fasten the assembly to the handlebars by securing the top and bottom fastener pieces together with two M3×10 screws and two M3 nuts, tightening to the desired fit.
8. Insert the phone into the holder and rotate it 90° counterclockwise (vertical → horizontal) or 90° clockwise (horizontal → vertical) to switch orientations.
