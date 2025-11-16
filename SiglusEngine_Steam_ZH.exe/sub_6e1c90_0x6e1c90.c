// 函数: sub_6e1c90
// 地址: 0x6e1c90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = Ordinal_DSOUND_1(0, &data_4ebe48c, 0)
int16_t* var_3c
void var_38
void* ecx

if (esi s>= 0)
    int32_t* eax_2 = data_4ebe48c
    esi = (*(*eax_2 + 0x28))(eax_2, 0)
    
    if (esi s>= 0 || esi == 0x88780082)
        int32_t* eax_4 = data_4ebe48c
        esi = (*(*eax_4 + 0x18))(eax_4, arg1, 2)
        
        if (esi s>= 0)
            int32_t* eax_6 = data_4ebe48c
            int32_t var_24_3 = 0
            int128_t var_18
            __builtin_memset(&var_18, 0, 0x14)
            var_18.d = 0x14
            var_18:4.d = 0xc1
            var_18:8.d = 0
            int32_t var_8_1 = 0
            esi = (*(*eax_6 + 0xc))(eax_6, &var_18, &data_4ebe490, var_24_3)
            
            if (esi s>= 0)
                return sub_6e1d90() != 0
            
            ecx = &var_38
            var_3c = u"IDirectSound::CreateSoundBuffer"
        else
            ecx = &var_38
            var_3c = u"IDirectSound::SetCooperativeLevel"
    else
        ecx = &var_38
        var_3c = u"IDirectSound::Initialize"
else
    ecx = &var_38
    var_3c = &NT3::C_sound_stream::`vftable'{for `NT3::C_sound_stream_base'}.vFunc_7

int16_t* eax_1
int32_t edx
eax_1, edx = sub_52e820(ecx, var_3c)
sub_6e2330(eax_1, edx, esi, var_38)
int32_t result
result.b = 0
return result
