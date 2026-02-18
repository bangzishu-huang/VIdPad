# VidPad
A macropad created for more efficient video viewing. There are 6 keys which are lit with LEDs, a rotary encoder for volume control, an OLED screen, and a XIAO RP2040 (microcontroller). 

This roughly took me around 18+ hours because it was my first time designing any type of hardware, but I really enjoyed the process!

<img width="640" height="438" alt="Screenshot 2026-02-18 at 1 46 23 PM Large" src="https://github.com/user-attachments/assets/68898de8-4a6e-4e23-bc28-fbee73443e78" />

# PCB
Everything was done on KiCAD, and I used a JLCPCB plugin for exporting the gerber files.

- Schematic
- <img width="640" height="365" alt="Schematic" src="https://github.com/user-attachments/assets/822bb56c-9bb2-4e10-8350-6eb7d7093aa4" />

- PCB without Zones
- <img width="910" height="621" alt="PCB-no-zones" src="https://github.com/user-attachments/assets/48f0737e-5570-4a7a-bb17-a85ae1d411a6" />

- PCB with Zones
- <img width="640" height="437" alt="PCB-zones" src="https://github.com/user-attachments/assets/1fc3d65b-2e31-4e0b-a9c0-c16215e1a991" />

# Case
The case was made in AutoDesk Inventor due to my prior knowledge in the software. The PCB is held together through a sandwich mount.

- Top
- <img width="663" height="504" alt="Screenshot 2026-02-17 at 8 00 55 PM" src="https://github.com/user-attachments/assets/97c96464-bafe-4f69-8c27-6d1a22a15cf3" />

- Middle
- <img width="663" height="504" alt="Screenshot 2026-02-17 at 8 04 23 PM" src="https://github.com/user-attachments/assets/e97d6b5b-eeff-431b-bbaa-3d9bdbd84f52" />

- Bottom
- <img width="715" height="504" alt="Screenshot 2026-02-17 at 8 05 16 PM" src="https://github.com/user-attachments/assets/1c73b574-435e-4576-91d8-7fca1dfaa9cc" />

# Firmware
VidPad uses QMK for firmware
- VIA supported
- Rotary encoder for volume control
- OLED displaying bongo cat!
- 6 keys for effecient video viewing
- RGB lighting

# BOM (Bill of Materials)
- 1x Seeed XIAO RP2040
- 6x 1N4148 Diodes
- 6x MX-Style switches
- 6x white blank DSA keycaps
- 1x EC11 Rotary encoder
- 1x 0.91 inch OLED display
- 4x M3x16mm screws
