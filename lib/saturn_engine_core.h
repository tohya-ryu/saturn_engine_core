#ifndef SATURN_ENGINE_CORE
#define SATEN_ENGINE_CORE

#ifdef WIN
#define SATEN_PATH_SEP "\\" 
#define SATEN_ERROR_LOG "error.txt"
#else
#define SATEN_PATH_SEP "/"
#define SATEN_ERROR_LOG "error.log"
#endif

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "saturn_engine_core_structs.h"
#include "saturn_engine_core_declarations.h"
#include "saturn_engine_core_list.h"
#include "saturn_engine_core_fps_control.h"
#include "saturn_engine_core_main.h"
#include "saturn_engine_core_getset.h"
#include "saturn_engine_core_bitop.h"
#include "saturn_engine_core_util.h"
#include "saturn_engine_core_error.h"
#include "saturn_engine_core_input.h"
#include "saturn_engine_core_haptic.h"
#include "saturn_engine_core_draw.h"
#include "saturn_engine_core_layer.h"
#include "saturn_engine_core_sprite.h"
#include "saturn_engine_core_pixel.h"


#endif /* SATEN_ENGINE_CORE */