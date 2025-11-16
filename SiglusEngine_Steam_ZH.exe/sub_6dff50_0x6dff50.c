// 函数: sub_6dff50
// 地址: 0x6dff50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HMMIO hmmio = arg1[5]
*arg1 = &NT3::C_wave_stream::`vftable'{for `NT3::C_sound_stream_base'}

if (hmmio != 0)
    mmioClose(hmmio, 0)
    arg1[5] = 0

sub_6dfff0(arg1)
int32_t eax = arg1[0x27]

if (eax != 0)
    j__free(eax)
    arg1[0x27] = 0
    arg1[0x28] = 0
    arg1[0x29] = 0

int32_t result = arg1[0x24]

if (result != 0)
    result = j__free(result)
    arg1[0x24] = 0
    arg1[0x25] = 0
    arg1[0x26] = 0

*arg1 = &NT3::C_sound_stream_base::`vftable'
return result
