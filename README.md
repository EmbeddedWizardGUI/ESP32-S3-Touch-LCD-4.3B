# Embedded Wizard Build Environment for Waveshare ESP32-S3-Touch-LCD-4.3B

![Screenshots](https://doc.embedded-wizard.de/data/Other/GitHub/ESP32-S3-Touch-LCD-4.3B/screenshots_v2.jpg)

## About Embedded Wizard

![Embedded Wizard](https://doc.embedded-wizard.de/data/Other/GitHub/emwi-logo-header-github-plugin.png)

[Embedded Wizard](https://www.embedded-wizard.de) is a professional GUI framework developed by [TARA Systems GmbH](https://www.embedded-wizard.de) for creating sophisticated graphical user interfaces on embedded systems. It provides a visual design tool (Embedded Wizard Studio) combined with a powerful code generator that produces highly optimized C code for a wide range of embedded targets, from resource-constrained microcontrollers to Linux-based platforms such as Raspberry Pi.

This repository contains a **maker-oriented Build Environment** for the Waveshare ESP32-S3-Touch-LCD-4.3B board. It is maintained independently from the official Embedded Wizard release cycle to provide quick access to community-supported target platforms. For officially supported platforms and regular releases, please visit the [Embedded Wizard download page](https://get.embedded-wizard.de/data/15.00/EmbeddedWizard_Studio_x64-V15.02.msi).

> **Looking for an officially supported Espressif board?** Embedded Wizard ships ready-to-use Build Environments for selected Espressif evaluation kits with full official support. See the [list of officially supported Espressif devices](https://www.embedded-wizard.de/get-started?search=espressif) on the Get Started page.

**Embedded Wizard is free of charge for private projects.** The Community License allows you to develop, build, and deploy applications on your target hardware at no cost, with no feature restrictions.

> **Note:** This project is provided as-is for makers. For production use, commercial licensing, and official support, please refer to [embedded-wizard.de](https://www.embedded-wizard.de).

## Target Hardware

- **Board:** Waveshare ESP32-S3-Touch-LCD-4.3B
- **MCU:** ESP32-S3 (dual-core Xtensa LX7, 240 MHz)
- **Display:** 800 x 480 pixel 4.3" capacitive touch display (landscape)
- **Color Format:** RGB565
- **Build Environment Version:** V15.00.00.00

## Project Structure

```
├── CMakeLists.txt                   # Top-level ESP-IDF project file
├── partitions.csv                   # Flash partition table
├── sdkconfig                        # ESP-IDF configuration
└── main/
    ├── Application/
    │   ├── GeneratedCode/           # Output from Embedded Wizard Studio code generator
    │   │                            # (do not edit manually)
    │   └── Source/
    │       ├── main.c               # Application entry point
    │       ├── ewmain.c             # Embedded Wizard main loop initialization
    │       ├── ewconfig.h           # Target configuration (display size, memory, caches)
    │       ├── DeviceDriver.c/h     # Device driver interface (connect HW to GUI)
    │       └── ewdef.h              # Platform definitions
    ├── Examples/
    │   └── 800x480/
    │       ├── GraphicsAccelerator/ # Graphics rendering and performance demo (.ewp)
    │       ├── HelloWorld/          # Minimal "hello world" starter project (.ewp)
    │       ├── HomeBackupControl/   # Home power backup control panel demo (.ewp)
    │       └── WifiScanner/         # Wi-Fi scanner UI demo (.ewp)
    ├── PlatformPackage/             # Embedded Wizard platform libraries
    │   ├── RGB565/                  #   Graphics Engine (GFX), rendering, compositing, surface/glyph caches
    │   └── RTE/                     #   Runtime Environment (RTE), object runtime, garbage collector, string handling
    └── TargetSpecific/              # Board support package (BSP)
        ├── ew_bsp_clock.c/h         # System clock configuration
        ├── ew_bsp_display.c/h       # Display controller initialization and framebuffer management
        ├── ew_bsp_event.c/h         # OS event handling for GUI thread synchronization
        ├── ew_bsp_inout.c/h         # GPIO and peripheral I/O abstraction
        ├── ew_bsp_os.c/h            # RTOS abstraction (task creation, timing)
        ├── ew_bsp_system.c/h        # System initialization and memory setup
        └── ew_bsp_touch.c/h         # Touch controller driver (GT911)
```

## Getting Started

### Prerequisites

- **Embedded Wizard Studio V15.00** - [Download free of charge](https://get.embedded-wizard.de/data/15.00/EmbeddedWizard_Studio_x64-V15.02.msi)
- **Waveshare ESP32-S3-Touch-LCD-4.3B** board with USB cable
- **Espressif ESP-IDF v5.5.2**: the exact version this project was built and verified against. Installing a newer ESP-IDF release is at your own responsibility, as toolchain, component-manager, or API changes between releases may break the build. Install via the **VSCode extension** (recommended) or the **command-line toolchain**.

Before getting started with Embedded Wizard, make sure your board and ESP-IDF toolchain are fully working. Follow the [Waveshare Wiki & Setup Guide](http://www.waveshare.com/wiki/ESP32-S3-Touch-LCD-4.3B) to set up the hardware and verify that you can build and flash a basic ESP-IDF example project successfully.

> **Important:** Ensure that your ESP-IDF installation path (`IDF_PATH`) does not contain any space characters.

### Setting Up the ESP-IDF Toolchain

#### Option A: VSCode with ESP-IDF Extension (Recommended)

1. Install [Visual Studio Code](https://code.visualstudio.com/)
2. Install the **Espressif IDF** extension from the VSCode marketplace
3. Follow the extension's setup wizard to install ESP-IDF V5.5.2
4. Open this project folder in VSCode
5. In the VSCode status bar, configure the following:
   - **Set target:** select `esp32s3`
   - **Select COM port:** choose the port shown in your Device Manager for the connected board
   - **Flash method:** UART (default)

The VSCode status bar provides one-click access to build, flash, and monitor. You can also use the combined **Build, Flash and Monitor** button (flame icon) to run all three steps at once.

#### Option B: Command-Line ESP-IDF

1. Install ESP-IDF V5.5.2 following the [official installation guide](http://www.waveshare.com/wiki/ESP32-S3-Touch-LCD-4.3B)
2. Open an ESP-IDF terminal (or source the `export.sh` / `export.bat` script)
3. Set the target: `idf.py set-target esp32s3`

### Build and Flash

1. **Generate code** from your Embedded Wizard Studio project:
   - Open one of the example projects (`.ewp`) in Embedded Wizard Studio
   - Select **Build > Build this profile** (or press **F8**)
   - The generated code is written to `main/Application/GeneratedCode/`

   > **Tip:** For a quick first start you can skip this step. The repo ships with the generated code of one of the example projects already committed to `main/Application/GeneratedCode/`, so you can go straight to building and flashing the firmware to see something on the display. Run the generator (F8) yourself once you want to switch to a different example or after you change a `.ewp` project in Embedded Wizard Studio.

2. **Build, flash, and monitor:**

   **VSCode:** Click the **Build, Flash and Monitor** button (flame icon) in the status bar.

   **Command line:**
   ```bash
   idf.py build
   idf.py flash
   idf.py monitor
   ```

### Creating Your Own GUI Application

To build your own UI from scratch, follow the [Embedded Wizard Quick Tour](https://doc.embedded-wizard.de/quick-tour). It walks you through Embedded Wizard Studio, the project structure, and the design workflow step by step.

## Included Example Projects

| Example | Description |
|---------|-------------|
| **HelloWorld** | A minimal "hello world" starter project, the simplest possible Embedded Wizard application to verify your toolchain |
| **GraphicsAccelerator** | Demonstrates 2D graphics operations including image transformations and blending |
| **HomeBackupControl** | A home power backup control panel UI with status indicators and control widgets |
| **WifiScanner** | A Wi-Fi network scanner UI showing nearby SSIDs and signal strengths |

Each example is a complete Embedded Wizard project (`.ewp`) that can be opened in Embedded Wizard Studio, modified, and re-generated.

## Documentation and Resources

- [Embedded Wizard Documentation](https://doc.embedded-wizard.de)

## License

The example application code is provided under the Embedded Wizard license terms. The Platform Package (Graphics Engine and Runtime Environment) is intellectual property of TARA Systems GmbH. Your use is governed by either a commercial license agreement (EWLA/EWTC) or the [Embedded Wizard Community License (EWCL)](https://www.embedded-wizard.de/legal/ewcl).

See [License Information](https://www.embedded-wizard.de/legal) for details.
