// M472: its block of 2030.env/vst/core/ModuleGuiLayouts.hpp (176 x 770 = the faceplate).

        case 20: { // M472 Console Equalizer (176 x 770, authentic photo match)
            m.title = "M472 Console Equalizer";
            m.subtitle = "3-Band Inductor-Based Console Channel Equalizer";
            m.modelCode = "M472";
            m.width = 176.0f;
            m.height = 770.0f;

            // 1. High Frequency (HF) Band - Red Cap Fluted Knob (Center: 115, 148, r: 21)
            m.knobs.push_back({ 0, "HF GAIN", "dB", 115.0f, 148.0f, 21.0f, -15.0, 15.0, 0.0, false, KnobStyle::WbsElmaRegular, Palette::ElmaRed });

            // 2. Mid Frequency (MF) Band
            // 2a. Stepped Frequency Selector - Yellow Cap Fluted Knob (Center: 48, 252, r: 18)
            m.knobs.push_back({ 1, "MF FREQ", "kHz", 48.0f, 252.0f, 18.0f, 0.8, 6.4, 1.6, true, KnobStyle::WbsElmaRegular, Palette::ElmaYellow });
            // 2b. MF Gain - Yellow Cap Fluted Knob (Center: 126, 350, r: 21)
            m.knobs.push_back({ 2, "MF GAIN", "dB", 126.0f, 350.0f, 21.0f, -15.0, 15.0, 0.0, false, KnobStyle::WbsElmaRegular, Palette::ElmaYellow });
            // 2c. Q Switch (H - Q - L) - White Pushbutton (Center: 48, 350)
            m.buttons.push_back({ 3, "Q SWITCH", { 36.0f, 340.0f, 24.0f, 20.0f }, false, ButtonStyle::LatchingPush, Palette::TextWhite });

            // 3. Low Frequency (LF) Band
            // 3a. Stepped Frequency Selector - Green Cap Fluted Knob (Center: 48, 460, r: 18)
            m.knobs.push_back({ 4, "LF FREQ", "Hz", 48.0f, 460.0f, 18.0f, 100.0, 200.0, 140.0, true, KnobStyle::WbsElmaRegular, Palette::ElmaGreen });
            // 3b. LF Gain - Green Cap Fluted Knob (Center: 126, 558, r: 21)
            m.knobs.push_back({ 5, "LF GAIN", "dB", 126.0f, 558.0f, 21.0f, -15.0, 15.0, 0.0, false, KnobStyle::WbsElmaRegular, Palette::ElmaGreen });

            // 4. Master EQ In / Bypass - Red Pushbutton (Center: 48, 650)
            m.buttons.push_back({ 6, "EQ IN", { 36.0f, 638.0f, 24.0f, 24.0f }, true, ButtonStyle::LatchingPush, Palette::ElmaRed });

            m.themeToggleRect = { 25.0f, 726.0f, 126.0f, 22.0f };
            m.webRemoteRect = { 10.0f, 698.0f, 156.0f, 20.0f };
            m.bottomScrewRect = { 88.0f - 14.0f, 756.0f - 14.0f, 28.0f, 28.0f };
            break;
        }
