// Gaming Navigation between layers

// DF(layer)        - switches the default layer. The default layer is the always-active base layer that other layers stack on top of. See below for more about the default layer. This might be used to switch from QWERTY to Dvorak layout. (Note that this is a temporary switch that only persists until the keyboard loses power. To modify the default layer in a persistent way requires deeper customization, such as calling the set_single_persistent_default_layer function inside of process_record_user.)
// MO(layer)        - momentarily activates layer. As soon as you let go of the key, the layer is deactivated.
// LM(layer, mod)   - Momentarily activates layer (like MO), but with modifier(s) mod active. Only supports layers 0-15 and the left modifiers: MOD_LCTL, MOD_LSFT, MOD_LALT, MOD_LGUI (note the use of MOD_ constants instead of KC_). These modifiers can be combined using bitwise OR, e.g. LM(_RAISE, MOD_LCTL | MOD_LALT).
// LT(layer, kc)    - momentarily activates layer when held, and sends kc when tapped. Only supports layers 0-15.
// OSL(layer)       - momentarily activates layer until the next key is pressed. See One Shot Keys for details and additional functionality.
// TG(layer)        - toggles layer, activating it if it’s inactive and vice versa
// TO(layer)        - activates layer and de-activates all other layers (except your default layer). This function is special, because instead of just adding/removing one layer to your active layer stack, it will completely replace your current active layers, uniquely allowing you to replace higher layers with a lower one. This is activated on keydown (as soon as the key is pressed).
// TT(layer)        - Layer Tap-Toggle. If you hold the key down, layer is activated, and then is de-activated when you let go (like MO). If you repeatedly tap it, the layer will be toggled on or off (like TG). It needs 5 taps by default, but you can change this by defining TAPPING_TOGGLE – for example, #define TAPPING_TOGGLE 2 to toggle on just two taps.

// Switch layer()
#define TO_GAME TO(_GAME)
#ifdef _GAME_FPS_ENABLE
  #define TO_FPS TO(_GAME_FPS)
#else
   #define TO_FPS _______
#endif
#define TO_HOTS TO(_GAME_HOTS)

// Momentary switch while pressed
#define M_GAME M(_GAME)
#define M_FPS M(_GAME_FPS)
#define M_HOTS M(_GAME_HOTS)
