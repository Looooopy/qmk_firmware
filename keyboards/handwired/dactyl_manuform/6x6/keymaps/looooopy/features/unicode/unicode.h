//TODO: Not in use

#ifdef UNICODEMAP_ENABLE

enum unicode_names {
    BANG,
    IRONY,
    SNAKE
};

const uint32_t PROGMEM unicode_map[] = {
    [BANG]  = 0x203D,  // ‽
    [IRONY] = 0x2E2E,  // ⸮
    [SNAKE] = 0x1F40D, // 🐍
};

#endif
