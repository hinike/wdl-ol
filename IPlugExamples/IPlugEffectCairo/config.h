#define PLUG_MFR "AcmeInc"
#define PLUG_NAME "IPlugEffectCairo"

#define PLUG_CLASS_NAME IPlugEffectCairo

#define BUNDLE_MFR "AcmeInc"
#define BUNDLE_NAME "IPlugEffectCairo"

#define PLUG_ENTRY IPlugEffectCairo_Entry
//#define PLUG_VIEW_ENTRY IPlugEffectCairo_ViewEntry
#define PLUG_FACTORY IPlugEffectCairo_Factory

#define PLUG_ENTRY_STR "IPlugEffectCairo_Entry"
//#define PLUG_VIEW_ENTRY_STR "IPlugEffectCairo_ViewEntry"

#define VIEW_CLASS IPlugEffectCairo_View
#define VIEW_CLASS_STR "IPlugEffectCairo_View"

// Format        0xMAJR.MN.BG - in HEX! so version 10.1.5 would be 0x000A0105
#define PLUG_VER 0x00010000
#define VST3_VER_STR "1.0.0"

// 4 chars, single quotes. At least one capital letter
#define PLUG_UNIQUE_ID 'Ipef'
// make sure this is not the same as BUNDLE_MFR
#define PLUG_MFR_ID 'Acme'

#define PLUG_COPYRIGHT  "Copyright 2017 Acme Inc"

// ProTools stuff

#if defined(AAX_API) && !defined(_PIDS_)
  #define _PIDS_
  const int PLUG_TYPE_IDS[2] = {'EFN1', 'EFN2'};
  const int PLUG_TYPE_IDS_AS[2] = {'EFA1', 'EFA2'}; // AudioSuite
#endif

#define PLUG_MFR_PT "AcmeInc\nAcmeInc\nAcme"
#define PLUG_NAME_PT "IPlugEffectCairo\nIPEF"
#define PLUG_TYPE_PT "Effect"
#define PLUG_DOES_AUDIOSUITE 1

/* PLUG_TYPE_PT can be "None", "EQ", "Dynamics", "PitchShift", "Reverb", "Delay", "Modulation", 
"Harmonic" "NoiseReduction" "Dither" "SoundField" "Effect" 
instrument determined by PLUG _IS _INST
*/

#define PLUG_CHANNEL_IO "1-1 2-2"

#define PLUG_LATENCY 0
#define PLUG_IS_INST 0

// if this is 0 RTAS can't get tempo info
#define PLUG_DOES_MIDI 0

#define PLUG_DOES_STATE_CHUNKS 0

// Image resource locations for this plug.
#define KNOB_FN "resources/img/knob.png"
#define TIGER_FN "resources/img/23.svg"
// GUI default dimensions
#define GUI_WIDTH 500
#define GUI_HEIGHT 500

// on MSVC, you must define SA_API in the resource editor preprocessor macros as well as the c++ ones
#if defined(SA_API)
#include "app_wrapper/app_resource.h"
#endif

// VST3 stuff
#define MFR_URL "www.olilarkin.co.uk"
#define MFR_EMAIL "spam@me.com"
#define EFFECT_TYPE_VST3 "Fx"

/* "Fx|Analyzer"", "Fx|Delay", "Fx|Distortion", "Fx|Dynamics", "Fx|EQ", "Fx|Filter",
"Fx", "Fx|Instrument", "Fx|InstrumentExternal", "Fx|Spatial", "Fx|Generator",
"Fx|Mastering", "Fx|Modulation", "Fx|PitchShift", "Fx|Restoration", "Fx|Reverb",
"Fx|Surround", "Fx|Tools", "Instrument", "Instrument|Drum", "Instrument|Sampler",
"Instrument|Synth", "Instrument|Synth|Sampler", "Instrument|External", "Spatial",
"Spatial|Fx", "OnlyRT", "OnlyOfflineProcess", "Mono", "Stereo",
"Surround"
*/
