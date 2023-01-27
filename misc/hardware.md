# MiniDisc player models

# Bluetooth transmitter modules

## Scosche FlyTunes


# Voltage regulators

- Started with Pololu S7V8F3 3.3V Step-up/down converter -> Vin min = 2.7V,
- Switched to Pololu U1V11F3 3.3V step-up converter -> Vin min = 0.5V, can tap battery directly! maybe less noise?

- Isolated DC/DC Converters
  - Murata... bulky
  - NVE ILDC11-15E -> https://www.nve.com/Downloads/ILDC11-15e.pdf
  - Silicon Labs App Note: https://www.silabs.com/documents/public/application-notes/AN614.pdf
  - Recom https://recom-power.com/en/products/dc-dc-converters/rec-s-R1SX.html?0
    - Looks great but only 3.3V up, not 1.5v

- Audio transformers
  - Actually Ethernet and others
    - https://www.mouser.de/ProductDetail/Wurth-Elektronik/74930000?qs=xZ%2FP%252Ba9zWqYWK9cm4pFG3w%3D%3D
    - https://www.mouser.de/ProductDetail/Murata-Electronics/DXP18BN7514TL?qs=%2F%252BYoplLUB5hZMCUwEqiCUw%3D%3D
    - https://www.mouser.de/ProductDetail/iNRCORE/100B-1049NL?qs=BZBei1rCqCASggXRX%252BmJow%3D%3D
  - Using 56k modem transformer? https://forum.allaboutcircuits.com/threads/audio-optocoupler.102434/
  - Vishay IL300 https://www.elektormagazine.com/labs/optically-isolated-unbalanced-audio-line-level-amplifier
  - Using opto isolators
    - http://loopgain.net/opto_line_driver/
    - https://learnabout-electronics.org/Semiconductors/opto_53.php
    - HCNR200 https://www.digikey.com/en/products/detail/broadcom-limited/HCNR200/637400
