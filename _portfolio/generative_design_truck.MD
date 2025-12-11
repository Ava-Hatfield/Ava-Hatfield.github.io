---
title: "Generative Design SLS Truck Hangar"
excerpt: "Generative-design SLS truck hanger with integrated motor mount optimized for lightweighting, load-bearing performance, and consolidation of longboard drivetrain components."
layout: single
classes: full
header:
  image: /assets/img/ufluidic.png
  teaser: /assets/img/ufluidic.png
---

The generative-design truck hanger is a structural longboard component engineered to support wheels, transmit motor torque, and integrate the motor mount into a single lightweight geometry.

# Generative Design

## Generative Design and Powder Bed Fusion

The pairing of generative design with powder bed fusion is uniquely effective because both technologies remove traditional manufacturing constraints and allow engineers to create parts that prioritize performance rather than manufacturability. Generative design uses simulation-driven optimization to create geometries that route loads efficiently, minimize mass, and consolidate multi-piece assemblies into a single component. These organic, lattice-like shapes are often impossible or very difficult to fabricate using subtractive machining or molding.

Powder bed fusion, whether polymer SLS or metal SLS, complements this by enabling the production of precise, highly complex geometries without support structures embedded inside the part. Since powder bed fusion builds parts layer by layer within a powder bed, it can fabricate the irregular internal channels, filleted load paths, and organic material networks that generative design commonly produces. This allows designers to unify multiple components into one structure, reduce assembly weight, and optimize stiffness/mass ratios in ways that conventional manufacturing cannot achieve.

For applications in industry, the generative design and powder bed fusion paired workflow supports rapid iteration, functional prototyping, and production of structurally efficient components with specific mechanical behavior. This makes the combination especially valuable for projects like the longboard truck hanger, where the goal is to minimize mass, maintain strength under loads in multiple directions, and reduce the number of parts required for assembly.

## Applications of Generative Design and Powder Bed Fusion in Industry

Generative design paired with powder bed fusion is increasingly adopted in industries where high strength-to-weight ratios, complex geometry, and material efficiency directly affect performance and cost. These technologies are especially valuable in sectors producing large quantities of components, where reducing material use or improving thermal performance can increase profit margins and decrease production time.

In aerospace, generative design has enabled part consolidation and lightweighting, such as Airbus’s optimized A23 aircraft bracket that achieved more than 50% weight reduction through GD and metal additive manufacturing ([source](https://www.numberanalytics.com/blog/mastering-generative-design-3d-printing)). In the medical sector, Zimmer Biomet uses generative design to fabricate patient-specific implants that better match anatomical geometry ([source](https://www.numberanalytics.com/blog/mastering-generative-design-3d-printing)).

Thermal management applications also benefit from this pairing. Cold plates designed with generative microchannel routing have demonstrated 55% reductions in thermal resistance when produced using laser powder bed fusion, improving system-level power usage effectiveness ([source](https://www.gknpm.com/en/technologies/metal-additive-manufacturing/)).
Consumer goods companies have leveraged generative design and additive manufacturing to optimize comfort and performance. 

New Balance developed a 3D-printed cushioned midsole that tailors stiffness according to pressure-map data from individual runners, enhancing both support and comfort ([source](https://www.tek4s.com/post/solidworks-generative-design)).

In architecture and infrastructure, generative design enables structurally efficient, visually distinctive forms. The Qatar National Convention Centre’s entrance structure uses generative principles to achieve both functional support and aesthetic reference to culturally significant trees ([source](https://digitaldesignnetwork.org/news/modern-uses-of-generative-design/)). Finally, the stainless-steel pedestrian bridge installed over a canal in Amsterdam was generatively optimized to be as lightweight as possible while withstanding predicted loads, then produced using large-scale metal additive manufacturing ([source](https://digitaldesignnetwork.org/news/modern-uses-of-generative-design/)).

---

# CAD Generative Design of Light-weighted Truck Hangar

## Importance of Load Cases

xx

## How to Improve the Process of Applying Proper Load Cases

xx

## Determining the Applied Forces

| Force Name | Reason for Application | Points of Contact | Direction of Force | Magnitude of Force | Verbal Calculation of Force | Numerical Calculation of Force |
|------------|------------------------|-------------------|-------------------|-------------------|----------------------------|--------------------------------|
| Gravity | Force of gravity | N/A | Normal force perpendicular to the ground | 9.807 m/s² | Gravitational acceleration | 9.807 m/s² |
| Force3 | Force of board + person on top (landing impact) | 4 contact points on truck hangars | Normal force to skateboard | 200 N per contact | (mass rider + mass board) × impact factor × gravity / 2 truck hangars / 4 contact points | (75 + 5) kg × 2 × 9.81 m/s² / (2 × 4) = 200 N per contact |
| Moment2 | Motor torque | Motor mount | Opposing moment force opposite to motor rotation direction | 8 N·m | From motor specification sheet | 8 N·m |
| Force5 | Lateral steering/turning reaction force at each wheel end | Wheel axle ends | Parallel to ground, perpendicular to rod in opposite directions at either end | 20 N and 20 N | Estimated from side load during normal rider steering input and wheel-ground interaction in typical carving/turning | ~20 N per wheel axle end |
| Remote Force2 | Motor tangential force | Pulley location (~18 mm from motor mount) | Tangential to perimeter of motor mount | 560 N | Torque of motor / radius of motor | 8 N·m / 0.0143239 m = 560 N |
| Remote Force3 | Weight of motor | Center of gravity of motor (~37 mm from motor mount) | Downward (gravity) | 9 N | Weight of motor × force of gravity | 0.85 kg × 9.8 m/s² ≈ 9 N |

## Structural Constraint Placement and Affect

---

# Comparing Generative Design Results for Different Materials

## Aluminum

### Interactive CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811af936bc1b7a61644?mode=embed" width="640" height="480" allowfullscreen frameborder="0"></iframe>

### Rendering of Truck Assembly

<div style="display:block;">
  <figure style="margin:0 0 1.5rem 0; text-align:center;">
    <img src="/assets/img/Aluminum Assembly Front Render.png" alt="Aluminum Assembly Render"
         style="width:100%; height:400px; object-fit:cover; border:1px solid #eee; padding:6px;">
    <figcaption style="margin-top:8px; font-weight:600;">Aluminum Assembly Render</figcaption>
  </figure>
</div>

<div style="display:block;">
  <figure style="margin:0 0 1.5rem 0; text-align:center;">
    <img src="/assets/img/Aluminum Design Front Render.png" alt="Aluminum Front Render"
         style="width:100%; height:400px; object-fit:cover; border:1px solid #eee; padding:6px;">
    <figcaption style="margin-top:8px; font-weight:600;">Aluminum Front Render</figcaption>
  </figure>
</div>

<div style="display:block;">
  <figure style="margin:0 0 1.5rem 0; text-align:center;">
    <img src="/assets/img/Aluminum Design Render Back.png" alt="Aluminum Back Render"
         style="width:100%; height:400px; object-fit:cover; border:1px solid #eee; padding:6px;">
    <figcaption style="margin-top:8px; font-weight:600;">Aluminum Back Render</figcaption>
  </figure>
</div>

## Nylon

### Interactive CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811734ec732e30cb436?mode=embed" width="640" height="480" allowfullscreen frameborder="0"></iframe>

### Rendering of Truck Assembly

<div style="display:block;">
  <figure style="margin:0 0 1.5rem 0; text-align:center;">
    <img src="/assets/img/Nylon Assembly Render.png" alt="Nylon Assembly Render"
         style="width:100%; height:400px; object-fit:cover; border:1px solid #eee; padding:6px;">
    <figcaption style="margin-top:8px; font-weight:600;">Nylon Assembly Render</figcaption>
  </figure>
</div>

<div style="display:block;">
  <figure style="margin:0 0 1.5rem 0; text-align:center;">
    <img src="/assets/img/Nylon Final Design Front Render.png" alt="Nylon Front Render"
         style="width:100%; height:400px; object-fit:cover; border:1px solid #eee; padding:6px;">
    <figcaption style="margin-top:8px; font-weight:600;">Nylon Front Render</figcaption>
  </figure>
</div>

<div style="display:block;">
  <figure style="margin:0 0 1.5rem 0; text-align:center;">
    <img src="/assets/img/Nylon Final Design Back Render.png" alt="Nylon Back Render"
         style="width:100%; height:400px; object-fit:cover; border:1px solid #eee; padding:6px;">
    <figcaption style="margin-top:8px; font-weight:600;">Nylon Back Render</figcaption>
  </figure>
</div>

## Steel

### Interactive CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811c597e1b39a3e8b09?mode=embed" width="640" height="480" allowfullscreen frameborder="0"></iframe>

### Rendering of Truck Assembly

<div style="display:block;">
  <figure style="margin:0 0 1.5rem 0; text-align:center;">
    <img src="/assets/img/Steel Assembly Render.png" alt="Steel Assembly Render"
         style="width:100%; height:400px; object-fit:cover; border:1px solid #eee; padding:6px;">
    <figcaption style="margin-top:8px; font-weight:600;">Steel Assembly Render</figcaption>
  </figure>
</div>

<div style="display:block;">
  <figure style="margin:0 0 1.5rem 0; text-align:center;">
    <img src="/assets/img/Steel Final Design Front Render.png" alt="Steel Front Render"
         style="width:100%; height:400px; object-fit:cover; border:1px solid #eee; padding:6px;">
    <figcaption style="margin-top:8px; font-weight:600;">Steel Front Render</figcaption>
  </figure>
</div>

<div style="display:block;">
  <figure style="margin:0 0 1.5rem 0; text-align:center;">
    <img src="/assets/img/Steel Final Design Back Render.png" alt="Steel Back Render"
         style="width:100%; height:400px; object-fit:cover; border:1px solid #eee; padding:6px;">
    <figcaption style="margin-top:8px; font-weight:600;">Steel Back Render</figcaption>
  </figure>
</div>

---

# Generative Design Critique

## How is Generative Design Really Useful

## Drawbacks of Generative Design

## Most Useful Applications of Generative Design

---

# Generative Design Truck Hangar Gallery

<div style="display:block;">
  <figure style="margin:0 0 1.5rem 0; text-align:center;">
    <img src="/assets/img/ufluidic.png" alt="Resin Printed Mold"
         style="width:100%; height:400px; object-fit:cover; border:1px solid #eee; padding:6px;">
    <figcaption style="margin-top:8px; font-weight:600;">Resin Printed Mold</figcaption>
  </figure>
</div>

---
