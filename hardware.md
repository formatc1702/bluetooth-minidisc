# MiniDisc player models

## MZ-R500

- [Minidisc.org page](https://www.minidisc.org/part_Sony_MZ-R500.html)

## MZ-N505

- [Minidisc.org page](https://www.minidisc.org/part_Sony_MZ-N505.html)


# Bluetooth transmitter modules

## KCX_BT_Transmitter

### Links

- [GitHub repo](https://github.com/Mark-MDO47/BluetoothAudioTransmitter_KCX_BT_EMITTER)
- [AliExpress link](https://www.aliexpress.com/item/33058710334.html)
- [TaoBao link](https://item.taobao.com/item.htm?spm=a21wu.12321156-tw.0.0.7e76d1c7xEOcFZ&id=570274835710)
- [Electro-Tech-Online forum thread](https://www.electro-tech-online.com/threads/kcx_bt_emitter-low-cost-bluetooth-bt-audio-module.158156/)

### Notes

- Does not seem to work with Apple AirPods --> to be tested

### AT Commants

9600 bps 8N1
no EOL char

```
AT+ // Just to make sure transmission is good
AT+REST // Reset - and this will start scanning
AT+DISCON // even though you are not connected
AT+DELVMLINK // erase saved memory of prior connection
AT+VMLINK? // view VM Links in saved memory (should be none)

AT+SCAN

AT+CONADD=0x08ebed1d110c // Anker SoundCore 2
AT+CONADD=0x0c3b50a0e8aa // Apple AirPods Pro
```

#### Setting the volume?

- AT+CLVL=50 to set volume maybe? (https://m2msupport.net/m2msupport/audio-at-commands-to-configure-device-audio-features/)
- AT+LVL=N (https://m2msupport.net/m2msupport/atlvl-loudspeaker-volume-level/)
- L0 ~ L3 (https://en.wikipedia.org/wiki/Hayes_command_set)
- AT+CMUT (mute? https://www.youtube.com/watch?v=q5bVo-mh2Ig)
- AT+CRSL

## TaoTronics TT-BA07

### Links

- [Manufacturer website](https://de.taotronics.com/TT-BA07-Bluetooth-Adapter.html)

### Notes

- Bluetooth version...
  5.0? 4.1?
- Supposedly works with Apple AirPods --> to be tested

## Scosche FlyTunes

- TL-BC5-16 Bluetooth module
  - https://wenku.baidu.com/view/ff4f81d99fc3d5bbfd0a79563c1ec5da50e2d638.html?re=view
  - https://wenku.baidu.com/view/0b3e195f33d4b14e84246841.html
  - Macronix MX29LV160D
    Flash Memory
    https://www.macronix.com/Lists/Datasheet/Attachments/7263/MX29LV160D%20T-B,%203V,%2016Mb,%20v1.2.pdf
  - CSR57E6
    Bluetooth Stereo Audio Transmitter Module
    http://ecksteinimg.de/Datasheet/CP12009/BTA-TX-A%20CSR57E6.pdf

## iLuv AirFree

- https://www.iluv.com/products/airfree
- AirPods compatible (claimed by manufacturer)

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
