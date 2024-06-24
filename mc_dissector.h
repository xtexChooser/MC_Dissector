//
// Created by Nickid2018 on 2023/7/12.
//

#ifndef MC_DISSECTOR_MC_DISSECTOR_H
#define MC_DISSECTOR_MC_DISSECTOR_H

#include <epan/prefs.h>

#define MCJE_PORT "25565"
#define MCBE_PORT "19132"
#define MCJE_NAME "Minecraft Java Edition"
#define MCBE_NAME "Minecraft Bedrock Edition"
#define MCJE_SHORT_NAME "MCJE"
#define MCBE_SHORT_NAME "MCBE"
#define MCJE_FILTER "mcje"
#define MCBE_FILTER "mcbe"

#define DATA_FILE_PATH "mc_dissector"
#define DATA_FILE_PATH_JE_DATA "mc_dissector/je"
#define DATA_FILE_PATH_BE_DATA "mc_dissector/be"
#define DATA_FILE_PATH_PROTOCOL_VERSIONS "protocol_versions.json"

#if defined(DEBUG)
#define WS_LOG(format, ...) ws_log("", LOG_LEVEL_CRITICAL, format, ##__VA_ARGS__)
#else
#define WS_LOG(format, ...)
#endif

extern int proto_mcje;
extern int proto_mcbe;

extern module_t *pref_mcje;
extern gchar *pref_ignore_packets_je;
extern gchar *pref_secret_key;
extern gboolean pref_do_nbt_decode;

extern module_t *pref_mcbe;


#endif //MC_DISSECTOR_MC_DISSECTOR_H
