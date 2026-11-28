# M472 Equalizer Module · Filters

Ward-Beck Systems M472, 1977|10. Wiki page: [M472 on WBSps.ca](https://wardbecksystems.github.io/WBSps.ca/PAGES/M472.html)

| Folder | What is in it | Files |
|---|---|---|
| [SCHEMATICS/](SCHEMATICS/) | electrical drawings: schematics, functional diagrams, component layouts, wiring | 52 |
| [MECHANICAL/](MECHANICAL/) | front panels, cover plates, metalwork, assemblies; the front panel as vectors | 11 |
| [PINOUTS/](PINOUTS/) | the RTO-144 connector: connection sheets, connector layouts, rear views | 20 |
| [MANUALS/](MANUALS/) | manuals, manual pages, price lists, brochures, documents | 89 |
| [PHOTOS/](PHOTOS/) | photographs of the module | 13 |
| [SOFTWARE/](SOFTWARE/) | program listings, firmware, the plugin | 1 |
| [KICAD/](KICAD/) | KiCad schematics traced from the drawings, the symbol, PCB projects | 15 |
| [OCR/](OCR/) | the note of every file: date, origin, title block, OCR text | 44 |

<!-- module data: tools/module_specs.py, tools/forum_quotes.py -->

**On the WBSps forum (2006|39 - 2014|47):** [33 topics](FORUM.md): what owners and technicians said about it.

## Specifications

From the technical data sheet: [1977 - M472 - Equalizer (2).pdf](MANUALS/1977%20-%20M472%20-%20Equalizer%20(2).pdf) page 2 (read by OCR; check against the page). As data: [`Specifications.json`](Specifications.json).

| | |
|---|---|
| **Gain** | Unity. |
| **Frequency response** | to.25 dB from 20 Hz to 20 kHz (all e qua H zing controls in FLAT position). |
| **Noise** | - BO dBDl absolute. (20 Hz to 20 kHz). |
| **Harmonic distortion** | Less thin 0.251 THD fro lll 30 Hz to 20 kHz at. 18 dB. output or less. Less than 0.11 at 1 kHz at +18 dB. output. |
| **Source impedance** | Less thin 10 oh., unbalanced. |
| **Input impedance** | Approx tMa tel &quot;. 2k oh., unbalanced. |
| **Input level** | -8 dB. no.l na l. +18 dB• •axl.UM. (v ol t age level equivalent t o 6 00 ohM). |
| **Output impedance** | Less than 50 oh., unbalanced. |
| **Load impedance** | 10k Ohlll,. t nhlu•. |
| **Output level** | -8 dBm nominal.. 18 dBm ma ltfll ulll. (voltage level e q u iva lent to 600 ohlll). |
| **Phasing** | Input and output are i n phase with equal1zfng controls in FLAT position. |
| **Power requirements** | :!:2S volts e c, 2 5 iliA. AM b h n t re epere t ure: o t o 60 degrees Celsius. |
| **Dt . en s lon s** | 1.6&quot; wide X 7&quot; high X 6.5&quot; deep. 141 •• I 178 _ X 165 _). |

## Circuit description

From [1977 - M472 - Equalizer (2).pdf](MANUALS/1977%20-%20M472%20-%20Equalizer%20(2).pdf) pages 4-7 (read by OCR; check against the pages). As data: [`CircuitDescription.json`](CircuitDescription.json).

<details><summary>Read it</summary>

**144 72 EQUALIZER MODULE**

INSERT Switch and Output Illt h the EQUALIZER INSERT swftch Sill depressed, the equalized signal 15 fed t o pin 6 oft he. o du1e edge connector. I n addition, as Sill 15 deprused. the associated LED indicator 15 activate d. Vhe n SVI 15 released. the equalizer 15 bypassed. Power Supply Decoupllnq Cl7 th rOl,lgh C20 together wfth R34 and R35 for. I passfv e. on· board power supply decou pl 1 ng circuit. CRl and CR2 prevent lIIodul e dallage i nth e event of acct dental polarity reversal.

**-, II 1**

1r-, &lt;:

MID FREQUENCY section aOOST/ CUT: t IS ea. I I-:T

**FREQUENCY: I**

0.4 &amp; 6.4 kHz.- · _15_ 1'1 I I

IHGH FREQUENCY section -,

**FREQUENCY:**

tIS dB.

10kH z. -. ---;-.,..11 &quot;l '&quot; \:+ I'II'VI

:: 11:\ \ -------J II

. _ _ &quot; \ 1..(

/ 11 1/1.11:

LOW FREQUENCY sect t c n

BOOST/C&quot;,T: t l S dB.

**FREQUENCY: III'**

SO &amp; 200 Hz.

**11472 EOUALIZER 110DUL E**

PART DESCRIPTION MFG I1FG PART NUI16ER

C1 Capa~ i tor 1 uF/3S Y Ke~et T3906 10S1103SAS C2 4.7 ~F/lO Y T3 90 6 4 7 SI101 0 AS

C4 6.6pF Philips 2222 ·638 ·096 6 6 CS/ 6 8000 pF combined &quot;$ WBS 13 ·006

C7 33 u F/l O Y xee e t T390 033 61101QAS C8 33 u F/lO Y T3900336 11010AS C9 UOO pF Ase l co CQ92· I1C·2 2211 Cl0/11 8000 pF combined WBS W6S 1 3 · 00 6 C12 15 pF Philips 2222 -638 -10 1 5 9

C1J 33 uF/lO Y Ke~e t T3900336 MOIOAS C14 4.7 uF/lO Y T3 9 0 6 4 7 5110 10AS C15 0.01,F As e l co CQ92 - I1C·I0311 C16 0.04 7 u F CQ92 ·I1C· 47311 C17 U u F/2S Y Siemens B4 1 3 1 3 -ASU6 ·Z

C21 220 pF Philips 222 2 -638 ·70221 COl Olod~ l10~o ro 1a JN 4~03

0 $1 LEO. cod Fair child FLY11 7

Resi! tor W 51

lOOK

Ph! ll ps

R5 Potent iom ete r '&quot; AlB W6S 10· 0 0 6

R6 Resistor 51 '&quot; Philips

Po tentiomete r AlB W6 S 10 -0 2 6

R9 Resi!tor ~W 51 1M Ph,~ J ips

</details>

<!-- /module data -->

## Photos

_Photographs of the module itself: front, back, inside, racked._

<table>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKUTRLZ2FWVVc0VGs/view?resourcekey=0-rRY28XRTswQYdNDCMIL4Yg" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKUTRLZ2FWVVc0VGs&resourcekey=0-rRY28XRTswQYdNDCMIL4Yg" width="240" alt="1977 - M472 - EQ Back open side_4.jpg"></a><br><sub>1977|10 · EQ Back open side_4</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKMmRFRnhRb0wzN1k/view?resourcekey=0-VFb6H_Bc_gqaZljQqeDGiQ" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKMmRFRnhRb0wzN1k&resourcekey=0-VFb6H_Bc_gqaZljQqeDGiQ" width="240" alt="1977 - M472 - EQ.jpg"></a><br><sub>1977|10 · EQ</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKYklkZk1US0tJT28/view?resourcekey=0-DLQzY3CaUDpZ4Z_jSOGyug" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKYklkZk1US0tJT28&resourcekey=0-DLQzY3CaUDpZ4Z_jSOGyug" width="240" alt="1977 - M472 - EQ_1.jpg"></a><br><sub>1977|10 · EQ_1</sub></td></tr>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKVUQtc3RlYkF4Q1k/view?resourcekey=0-n6HWHbLnTRbojjqLd14Sjw" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKVUQtc3RlYkF4Q1k&resourcekey=0-n6HWHbLnTRbojjqLd14Sjw" width="240" alt="1977 - M472 - EQ_2.jpg"></a><br><sub>1977|10 · EQ_2</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKTVY5emFLX1Y0eEk/view?resourcekey=0-4l97Fs_2mUhi5SmT3Bixew" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKTVY5emFLX1Y0eEk&resourcekey=0-4l97Fs_2mUhi5SmT3Bixew" width="240" alt="1977 - M472 - WardBeckM472_3.jpg"></a><br><sub>1977|10 · WardBeckM472_3</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKWldNSUh6NXJYRms/view?resourcekey=0-_ncTj9iwggHV1zp7pywy-g" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKWldNSUh6NXJYRms&resourcekey=0-_ncTj9iwggHV1zp7pywy-g" width="240" alt="1977 - M472 - eq equalizer.jpg"></a><br><sub>1977|10 · eq equalizer</sub></td></tr>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKc01zUlhOX09iUWs/view?resourcekey=0-YjFKHyJzbJko8w88liQ4tQ" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKc01zUlhOX09iUWs&resourcekey=0-YjFKHyJzbJko8w88liQ4tQ" width="240" alt="1977 - M472 - file.jpg"></a><br><sub>1977|10 · file</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKYUQzYjAtMl93XzQ/view?resourcekey=0-rA18ztnPbPU2IfKJjKiGBQ" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKYUQzYjAtMl93XzQ&resourcekey=0-rA18ztnPbPU2IfKJjKiGBQ" width="240" alt="1977 - M472 - wbM472.jpg"></a><br><sub>1977|10 · wbM472</sub></td></tr>
</table>

## Mechanical

_Mechanical drawings: front panels, cover plates, metalwork and hardware (-03- drawings), AutoCAD files, each with its `(EXTRACTED).svg` vectors; `<module> - front panel.svg` is the front panel as vectors._

<table>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKWjhRRmRMYUlkQUk/view?resourcekey=0-5b-5tL_JPYvmd3LMV36uDg" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKWjhRRmRMYUlkQUk&resourcekey=0-5b-5tL_JPYvmd3LMV36uDg" width="240" alt="1977 - M472 - 472-04-003 - THE OUTPUT IOLZZ REDRAWN.jpg"></a><br><sub>1977|10 · 472-04-003 - THE OUTPUT IOLZZ REDRAWN · <a href="MECHANICAL/1977%20-%20M472%20-%20472-04-003%20-%20THE%20OUTPUT%20IOLZZ%20REDRAWN%20(EXTRACTED).svg">vectors</a></sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKRXVvVElhNFJJRXM/view?resourcekey=0-jPWrTIWy0nuBnqvagBxBQg" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKRXVvVElhNFJJRXM&resourcekey=0-jPWrTIWy0nuBnqvagBxBQg" width="240" alt="1977 - M472 - Front Panel.jpg"></a><br><sub>1977|10 · Front Panel · <a href="MECHANICAL/1977%20-%20M472%20-%20Front%20Panel%20(EXTRACTED).svg">vectors</a></sub></td></tr>
</table>

## 3-D model

[`MECHANICAL/M472.stl`](MECHANICAL/M472.stl) (GitHub turns it in 3-D) · [view, change and generate it on WBSps.ca](https://wardbecksystems.github.io/WBSps.ca/2026/stl.html?m=M472)

- **Size:** 57.43 × 211.8 mm panel, 165 mm deep, 3.2 mm plate (the drawing sheet, taken as drawn 1:1)
- **From the drawing:** 9 holes and cut-outs, 0 knobs (front panel: `MECHANICAL/M472 - front panel.svg`)
- the drawn panel is 0.21 wide to high, the size 0.27: placed by its height
- Made by `tools/module_models.py` (→ `MECHANICAL/M472.model.json`) and `tools/stl/make_stl.mjs` in [WBSps.ca](https://github.com/WardBeckSystems/WBSps.ca); the site makes the same STL from the same JSON.

## Schematics

_Electrical drawings: schematics (-02-), functional diagrams (-01-), component layouts (-06-), wiring (-09-), PCB files (.pcb .dsn), and beside each scan its `(EXTRACTED).svg`: the vectors traced from it._

<table>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKbFRvWE9LUEhxck0/view?resourcekey=0-nhPKkl3BZPtJEE8u1lurqg" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKbFRvWE9LUEhxck0&resourcekey=0-nhPKkl3BZPtJEE8u1lurqg" width="240" alt="1977 - M472 - 472-01-001 - TERMINOLOGY UPDATED AAS.jpg"></a><br><sub>1977|10 · 472-01-001 - TERMINOLOGY UPDATED AAS · <a href="SCHEMATICS/1977%20-%20M472%20-%20472-01-001%20-%20TERMINOLOGY%20UPDATED%20AAS%20(EXTRACTED).svg">vectors</a></sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/16jY1vZh0TBCXidF40Dp0N1YaxeF2KIOQ/view" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=16jY1vZh0TBCXidF40Dp0N1YaxeF2KIOQ" width="240" alt="1977 - M472 - DOC - 472-02-001 - WAAD-BECK BYBTEMB.png"></a><br><sub>1977|10 · DOC - 472-02-001 - WAAD-BECK BYBTEMB · <a href="SCHEMATICS/1977%20-%20M472%20-%20DOC%20-%20472-02-001%20-%20WAAD-BECK%20BYBTEMB%20(EXTRACTED).svg">vectors</a></sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKM0JrVThVUFVfZGc/view?resourcekey=0-mwjlz3tCzgpwrZ8gGEaefQ" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKM0JrVThVUFVfZGc&resourcekey=0-mwjlz3tCzgpwrZ8gGEaefQ" width="240" alt="1977 - M472 - Functional Diagram.jpg"></a><br><sub>1977|10 · Functional Diagram · <a href="SCHEMATICS/1977%20-%20M472%20-%20Functional%20Diagram%20(EXTRACTED).svg">vectors</a></sub></td></tr>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/1IC6eoMkCmGTEPVGZQNmyRk72JzlNcbUu/view" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=1IC6eoMkCmGTEPVGZQNmyRk72JzlNcbUu" width="240" alt="19xx - M472 - DOC - 701-02-101 - RLIG IOOK SWIOZ LINE-MIC LINE.jpg"></a><br><sub>19xx - M472 - DOC - 701-02-101 - RLIG IOOK SWIOZ LINE-MIC LINE · <a href="SCHEMATICS/19xx%20-%20M472%20-%20DOC%20-%20701-02-101%20-%20RLIG%20IOOK%20SWIOZ%20LINE-MIC%20LINE%20(EXTRACTED).svg">vectors</a></sub></td></tr>
</table>

## Pinouts

_Pinouts: the RTO-144 edge connector (connection sheets, connector layouts and rear views, strapping), and the pinout / connections drawings made from them. The module root `RTO.json` lists every contact._

<table>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKSkkwMTduZEdGV2s/view?resourcekey=0-bIMYGalQeDj8keq-7ZUrXA" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKSkkwMTduZEdGV2s&resourcekey=0-bIMYGalQeDj8keq-7ZUrXA" width="240" alt="1977 - M472 - 472-04-002 - CONNECTOR REAR VIEW CALE.jpg"></a><br><sub>1977|10 · 472-04-002 - CONNECTOR REAR VIEW CALE · <a href="PINOUTS/1977%20-%20M472%20-%20472-04-002%20-%20CONNECTOR%20REAR%20VIEW%20CALE%20(EXTRACTED).svg">vectors</a></sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKVldzT3RfeGw3dkE/view?resourcekey=0-LD-e1QojQoGO5hIjfZ6Eww" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKVldzT3RfeGw3dkE&resourcekey=0-LD-e1QojQoGO5hIjfZ6Eww" width="240" alt="1977 - M472 - Pin Out (2).jpg"></a><br><sub>1977|10 · Pin Out (2) · <a href="PINOUTS/1977%20-%20M472%20-%20Pin%20Out%20(2)%20(EXTRACTED).svg">vectors</a></sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKZ2VoMnBvTlZ0NE0/view?resourcekey=0-CpA3cXDzruO5nPtkalgKUw" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKZ2VoMnBvTlZ0NE0&resourcekey=0-CpA3cXDzruO5nPtkalgKUw" width="240" alt="1977 - M472 - Pin Out.jpg"></a><br><sub>1977|10 · Pin Out · <a href="PINOUTS/1977%20-%20M472%20-%20Pin%20Out%20(EXTRACTED).svg">vectors</a></sub></td></tr>
</table>

## RTO-144 pinout

Read from 2 pinout pictures (each its own `.pinout.json` beside it); the RTO-144 sheet agrees on 2 of 2 contacts. Every contact, with where it was read: [`RTO.json`](RTO.json). How a picture becomes this table: [the pinout decision tree](https://github.com/WardBeckSystems/WBSps.ca/blob/main/2026/Engineering/PINOUTS.md).

**To check:**

- polarity assumed: 2 contacts given + / − that the drawing does not mark (e.g. P1-4 INPUT) (M472: 1977 - M472 - 472-04-002 - CONNECTOR REAR VIEW CALE.jpg)
- polarity assumed: 2 contacts given + / − that the drawing does not mark (e.g. P1-4 INPUT) (M472: 1977 - M472 - Pin Out.jpg)

| Pin | Signal | Kind | Port | Confidence |
|---|---|---|---|---|
| 1 | IC (INTERNALLY CONNECTED) | other |  | high |
| 2 | IC (INTERNALLY CONNECTED) | other |  | high |
| 3 | INPUT SHIELD | shield | INPUT shield | high |
| 4 | INPUT | in | INPUT + | high |
| 5 | N/C | nc |  | high |
| 6 | OUTPUT | out | OUTPUT + | high |
| 7 | N/C | nc |  | high |
| 8 | N/C | nc |  | high |
| 9 | N/C | nc |  | high |
| 10 | N/C | nc |  | high |
| 11 | N/C | nc |  | high |
| 12 | N/C | nc |  | high |
| 13 | N/C | nc |  | high |
| 14 | N/C | nc |  | high |
| 15 | IC (INTERNALLY CONNECTED) | other |  | high |
| 16 | IC (INTERNALLY CONNECTED) | other |  | high |
| 17 | N/C | nc |  | high |
| 18 | N/C | nc |  | high |
| 19 | -25 V | power |  | high |
| 20 | 25V COM | ground |  | high |
| 21 | +25 V | power |  | high |
| 22 | CHASSIS | ground |  | high |

## Manuals and documents

_Manuals and manual pages, price lists, RTO-144 connection sheets, brochures, ads and other document scans._

<table>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKR0pRYXpodE55SjA/view?resourcekey=0-0GK6nzJWiuoAdC8DEb6LSg" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKR0pRYXpodE55SjA&resourcekey=0-0GK6nzJWiuoAdC8DEb6LSg" width="240" alt="1977 - M472 - Equalizer (2).pdf"></a><br><sub>1977|10 · Equalizer (2)</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKUk1PYy11TlgzQjA/view?resourcekey=0-QuBUrGgvEOlF1RAXXiG2Fg" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKUk1PYy11TlgzQjA&resourcekey=0-QuBUrGgvEOlF1RAXXiG2Fg" width="240" alt="1977 - M472 - Equalizer.pdf"></a><br><sub>1977|10 · Equalizer</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKSWlkTGVnemdqVm8/view?resourcekey=0-np7X9HyoiAdl4trt60EwCg" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKSWlkTGVnemdqVm8&resourcekey=0-np7X9HyoiAdl4trt60EwCg" width="240" alt="1977 - M472 - P001 - Title Page.jpg"></a><br><sub>1977|10 · P001 - Title Page</sub></td></tr>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKeXU5dXoxY2YtMkk/view?resourcekey=0-ZDiHVNr2l8OnUaVSJN3V7g" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKeXU5dXoxY2YtMkk&resourcekey=0-ZDiHVNr2l8OnUaVSJN3V7g" width="240" alt="1977 - M472 - P002 - 1-1.jpg"></a><br><sub>1977|10 · P002 - 1-1</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKNnZ0MTdqNVItRTA/view?resourcekey=0-ktkxm2g5A2sEjyepCK-TrA" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKNnZ0MTdqNVItRTA&resourcekey=0-ktkxm2g5A2sEjyepCK-TrA" width="240" alt="1977 - M472 - P003 - 2-1.jpg"></a><br><sub>1977|10 · P003 - 2-1</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKNGc4YjJCczg2Tjg/view?resourcekey=0-5rRG5YrPYR2D2WoqpdmuUw" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKNGc4YjJCczg2Tjg&resourcekey=0-5rRG5YrPYR2D2WoqpdmuUw" width="240" alt="1977 - M472 - P004 - 2-2.jpg"></a><br><sub>1977|10 · P004 - 2-2</sub></td></tr>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKeERjSy1xTnp3V28/view?resourcekey=0-rvvFAehIk6t5lMzynVaYGg" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKeERjSy1xTnp3V28&resourcekey=0-rvvFAehIk6t5lMzynVaYGg" width="240" alt="1977 - M472 - P005 - 3-1.jpg"></a><br><sub>1977|10 · P005 - 3-1</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKYzhINDMzTjgtNkE/view?resourcekey=0-Pg9j8-slmazwXq9oecuhcA" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKYzhINDMzTjgtNkE&resourcekey=0-Pg9j8-slmazwXq9oecuhcA" width="240" alt="1977 - M472 - P006 - 4-1.jpg"></a><br><sub>1977|10 · P006 - 4-1</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKcC1DYWpLcFBtU0U/view?resourcekey=0-6LxS2hm5Raj8tsHtfSLhAQ" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKcC1DYWpLcFBtU0U&resourcekey=0-6LxS2hm5Raj8tsHtfSLhAQ" width="240" alt="1977 - M472 - P007 - 4-2.jpg"></a><br><sub>1977|10 · P007 - 4-2</sub></td></tr>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKZ3RULXRvZFdSRmM/view?resourcekey=0--wOP1K_0d9SZJQJBUD6e8w" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKZ3RULXRvZFdSRmM&resourcekey=0--wOP1K_0d9SZJQJBUD6e8w" width="240" alt="19xx - M472 - DOC - K2942S - P15 - 1-1.jpg"></a><br><sub>19xx - M472 - DOC - K2942S - P15 - 1-1</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKOWNKTFN3U3VVTEk/view?resourcekey=0-Du7JyIgbm2QVeaD4xSiSlQ" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKOWNKTFN3U3VVTEk&resourcekey=0-Du7JyIgbm2QVeaD4xSiSlQ" width="240" alt="19xx - M472 - DOC - K2942S - P17 - 2-2.jpg"></a><br><sub>19xx - M472 - DOC - K2942S - P17 - 2-2</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKWkhXLWEwUTljVXM/view?resourcekey=0-b9n2IVef2O4jjW76Rkhzkg" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKWkhXLWEwUTljVXM&resourcekey=0-b9n2IVef2O4jjW76Rkhzkg" width="240" alt="19xx - M472 - DOC - L2042 - P04.jpg"></a><br><sub>19xx - M472 - DOC - L2042 - P04</sub></td></tr>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKVmR0clQtQlpSN3c/view?resourcekey=0-3GkYKGfG792avDr5LAeZQA" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKVmR0clQtQlpSN3c&resourcekey=0-3GkYKGfG792avDr5LAeZQA" width="240" alt="19xx - M472 - DOC - L2042 - P07.jpg"></a><br><sub>19xx - M472 - DOC - L2042 - P07</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKcHVHUmtneU5XbkU/view?resourcekey=0-_y4Es9ii9nClwwD5IfNsfA" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKcHVHUmtneU5XbkU&resourcekey=0-_y4Es9ii9nClwwD5IfNsfA" width="240" alt="19xx - M472 - DOC - L2042 - P16.jpg"></a><br><sub>19xx - M472 - DOC - L2042 - P16</sub></td><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKa1RnVXFCRU9UeDA/view?resourcekey=0-HstK7E0Mu-VZp59Y7Wdh1w" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKa1RnVXFCRU9UeDA&resourcekey=0-HstK7E0Mu-VZp59Y7Wdh1w" width="240" alt="19xx - M472 - DOC - L3242 - P04.jpg"></a><br><sub>19xx - M472 - DOC - L3242 - P04</sub></td></tr>
<tr><td align="center" valign="top" width="33%"><a href="https://drive.google.com/file/d/0B0yR0b5T78SKZnoxZ0ozLUxUZm8/view?resourcekey=0-AdeOyhhwuMTIboFRqO38Hg" title="Open on Google Drive"><img src="https://drive.google.com/thumbnail?sz=w480&id=0B0yR0b5T78SKZnoxZ0ozLUxUZm8&resourcekey=0-AdeOyhhwuMTIboFRqO38Hg" width="240" alt="19xx - M472 - DOC - L3242 - P07.jpg"></a><br><sub>19xx - M472 - DOC - L3242 - P07</sub></td></tr>
</table>

Shared privately on Google Drive (opens after sign-in): [19xx - M472 - DOC - What a manual Looks like](https://drive.google.com/file/d/0B0yR0b5T78SKYy1IcVVxMEdQRm8/view?resourcekey=0-tAeADiEovMwhvmCFQ2fw6w)

## KiCad

_KiCad: a schematic (`.kicad_sch`) traced from each electrical drawing, the module symbol (`.kicad_sym`) and its PCB projects. Traced schematics are the line work only: redraw with symbols over them._

- [1977 - 472-01-001 - EQUALIZER MODULE FUNCTIONAL DIAGRAM - DRN MRW - ENG RKB - ISS 3.kicad_sch](KICAD/1977%20-%20472-01-001%20-%20EQUALIZER%20MODULE%20FUNCTIONAL%20DIAGRAM%20-%20DRN%20MRW%20-%20ENG%20RKB%20-%20ISS%203.kicad_sch)
- [1977 - 472-02-001 - EQUALIZER MODULE SCHEMATIC - DRN MRW - ISS 1.kicad_sch](KICAD/1977%20-%20472-02-001%20-%20EQUALIZER%20MODULE%20SCHEMATIC%20-%20DRN%20MRW%20-%20ISS%201.kicad_sch)
- [1977 - 472-02-001 - EQUALIZER MODULE SCHEMATIC - DRN MRW - ISS 6.kicad_sch](KICAD/1977%20-%20472-02-001%20-%20EQUALIZER%20MODULE%20SCHEMATIC%20-%20DRN%20MRW%20-%20ISS%206.kicad_sch)
- [1977 - M472 - 472-01-001 - TERMINOLOGY UPDATED AAS.kicad_sch](KICAD/1977%20-%20M472%20-%20472-01-001%20-%20TERMINOLOGY%20UPDATED%20AAS.kicad_sch)
- [1977 - M472 - 472-02-001 - LAST COMPONENT DESIGNATIONS CZI.kicad_sch](KICAD/1977%20-%20M472%20-%20472-02-001%20-%20LAST%20COMPONENT%20DESIGNATIONS%20CZI.kicad_sch)
- [1977 - M472 - DOC - 472-02-001 - WAAD-BECK BYBTEMB.kicad_sch](KICAD/1977%20-%20M472%20-%20DOC%20-%20472-02-001%20-%20WAAD-BECK%20BYBTEMB.kicad_sch)
- [1977 - M472 - Equalizer (2) p9.kicad_sch](KICAD/1977%20-%20M472%20-%20Equalizer%20(2)%20p9.kicad_sch)
- [1977 - M472 - Equalizer p10.kicad_sch](KICAD/1977%20-%20M472%20-%20Equalizer%20p10.kicad_sch)
- [1977 - M472 - Equalizer p9.kicad_sch](KICAD/1977%20-%20M472%20-%20Equalizer%20p9.kicad_sch)
- [1977 - M472 - Functional Diagram.kicad_sch](KICAD/1977%20-%20M472%20-%20Functional%20Diagram.kicad_sch)
- [19xx - 472-01-001.kicad_sch](KICAD/19xx%20-%20472-01-001.kicad_sch)
- [19xx - 472-01-002 - EQUALIZER MODULE FUNCTIONAL - ISS 1.kicad_sch](KICAD/19xx%20-%20472-01-002%20-%20EQUALIZER%20MODULE%20FUNCTIONAL%20-%20ISS%201.kicad_sch)
- [19xx - 472-02-002 - EQUALIZER MODULE SCHEMATIC - ISS 1.kicad_sch](KICAD/19xx%20-%20472-02-002%20-%20EQUALIZER%20MODULE%20SCHEMATIC%20-%20ISS%201.kicad_sch)
- [19xx - M472 - DOC - 701-02-101 - RLIG IOOK SWIOZ LINE-MIC LINE.kicad_sch](KICAD/19xx%20-%20M472%20-%20DOC%20-%20701-02-101%20-%20RLIG%20IOOK%20SWIOZ%20LINE-MIC%20LINE.kicad_sch)
- [M472.kicad_sym](KICAD/M472.kicad_sym)

## Software

- [cpp](SOFTWARE/cpp)

---
Archive: Anthony Peter Kuzub · [WBSps.ca](https://WBSps.ca) · [WBSps.Kuzub.com](https://WBSps.Kuzub.com)
