// The platform of fauxmoESP in ESPurna (the `rtos` branch of the fork): <espurna_base.h> of the library espurna-base
// instead of <Arduino.h> (String, byte, constrain, HEX and the calls the firmware implements: the station address, its
// MAC, MD5). The SSDP listener is fauxmoUdp (lwIP raw) on every chip.

#pragma once

#include <espurna_base.h>

namespace fauxmo {

// the station address, a.b.c.d
inline void localIP(uint8_t (&out)[4]) {
    espurna_local_ip(out);
}

// the station MAC, AA:BB:CC:DD:EE:FF (as WiFi.macAddress())
inline String macAddress() {
    uint8_t mac[6] {};
    espurna_mac(mac);

    char out[18];
    snprintf(out, sizeof(out), "%02X:%02X:%02X:%02X:%02X:%02X",
        mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);
    return String(out);
}

// the MD5 of a text
inline void md5(const String& text, uint8_t (&out)[16]) {
    espurna_md5(text.c_str(), text.length(), out);
}

} // namespace fauxmo
