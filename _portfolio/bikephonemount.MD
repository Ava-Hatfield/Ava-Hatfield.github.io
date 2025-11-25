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

insert

## Top-Down Modeling in the Phone-Holder Design

insert

---

# Design

## Rotation Mechanism

description/does it work well

<figure style="text-align:center;">
  <img src="/assets/img/designfail.png" alt="Iteration of Rotation Mechanism" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Iteration of Rotation Mechanism</figcaption>
</figure>

## Type of 3D Printing Used

rationale behind type of 3d printing

## Changes to Account for 3D Printing Process

talk about iterations here

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

## Printing Technology of Each Part

---

# Interactive CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811a51cbcefb62cecdd?mode=embed" width="640" height="480" allowfullscreen frameborder="0"></iframe>

---

# Phone-Holder Demonstration

<iframe width="560" height="315" src="https://www.youtube.com/embed/_Zew6penxaM" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

---

# Gallery of Final MultiMaterial Plier Iteration

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
  <img src="/assets/img/griprender.png" alt="Individual Top-Down Component ~ Phone Grip and Rotation Mechanism" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Individual Top-Down Component ~ Phone Grip and Rotation Mechanism</figcaption>
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
  <img src="/assets/img/mechanism.png" alt="Rotation Mechanism Render" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Rotation Mechanism Render</figcaption>
</figure>

<figure style="text-align:center;">
  <img src="/assets/img/mechanismcrosssection.png" alt="Cross Section View Displaying Rotation Mechanism" style="max-width:100%; height:auto; border:1px solid #eee; padding:6px;">
  <figcaption style="margin-top:8px; font-weight:600;">Cross Section View Displaying Rotation Mechanism</figcaption>
</figure>

---

# How to Operate the MultiMaterial Pliers

1. **Design the Model:** Create the plier assembly in CAD using parametric dimensions to streamline the iterative process.  
2. **Set Clearances:** Apply a 0.05 mm clearance to all interlocking and rotating features to ensure a fit between printed components.  
3. **Prepare for Printing:** Export the design as a multi-body file (STL or 3MF) and import it into SuperSlicer. For each print, delete the components that are not relevant to the selected material (PLA or TPU).  
4. **3D Print:** Print PLA components on one printer for rigid parts and TPU components on a separate printer for flexible parts. For flexible sections, use a grid infill pattern, remove top and bottom layers, and adjust infill percentage to tune flexibility.  
5. **Assemble and Test Fit:** After printing, align the PLA and TPU sections and verify the dovetail interlock and spring fit properly.  
6. **Operate the Pliers:** Compress the PLA handles to close the TPU-tipped jaws, using the TPU square spring to reopen the pliers upon release.
