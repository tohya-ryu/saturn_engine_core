// private
int saten_audio_init(void)
{
    // default frequency = 22050Hz
    if (Mix_OpenAudio(MIX_DEFAULT_FREQUENCY, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
        saten_errhandler(1);
        return -1;
    }
    saten_se_flag = NULL;
    return 0;
}

// public
int saten_audio_set_sfx_vol(Mix_Chunk *sfx, int vol)
{
    // returns previous volume
    return Mix_VolumeChunk(sfx, vol);
}

// public
void saten_audio_sfx_set(int i)
{
    if (i >= 0 && i < saten_asset.sfx_n)
        saten_se_flag[i] = true;
}

// public
void saten_audio_sfx_play(void)
{
    // plays all soundeffects that have been set
    for (int i = 0; i < saten_asset.sfx_n; i++)
        if (saten_se_flag[i])
            Mix_PlayChannel(-1, saten_asset.sfx[i], 0);
}

// public
void saten_audio_sfx_unset(int i)
{
    // unsets a soundeffect. unsets all if i == -1
    if (i == -1)
        memset(saten_se_flag, 0, sizeof(bool)*saten_asset.sfx_n);
    if (i >= 0 && i < saten_asset.sfx_n)
        saten_se_flag[i] = false;
}

// private use after loading/unloading soundeffects
void saten_audio_sfx_reset(void)
{
    saten_se_flag =
        saten_realloc(saten_se_flag, sizeof(bool) * saten_asset.sfx_n);
}
