// 函数: sub_4a8eb0
// 地址: 0x4a8eb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = data_131310c
int32_t ebx = arg1[0xb]
int32_t esi = arg1[0xa]
int32_t edi = arg1[0xc]
arg1[6] = eax_1
arg1[3] = esi
*arg1 = ebx
arg1[1] = esi
arg1[9] = 0

if (edi s< 0)
    edi = neg.d(edi)

arg1[8] = edi
arg1[7] = 0
arg1[4] = ebx
arg1[5] = 0

if (arg2 == 0xff)
    arg1[4] = esi
    arg1[5] = esi
    *arg1 = esi
    arg1[2].b = arg2
    return eax_1

if (arg2 != 1 && arg2 != 2)
    arg1[2].b = arg2
    return eax_1

char eax = arg2

if (ebx == 0)
    eax = 0

arg1[2].b = eax
return eax
