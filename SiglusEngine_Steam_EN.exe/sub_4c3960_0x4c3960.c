// 函数: sub_4c3960
// 地址: 0x4c3960
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg1
int32_t edi = arg2

if (esi == 0)
    return 

arg2.b = 0x5c
int32_t eax_1 = sub_4d1610(arg1, arg2.b)

if (eax_1 != 0xffffffff)
    esi = &esi[1 + eax_1]

arg2.b = 0x2e
int32_t eax = sub_4d1610(esi, arg2.b)

if (eax == 0xffffffff)
    eax = sub_4cfc80(esi)
    esi -= 1

void* esi_2 = &esi[eax]

if (edi != 0)
    int32_t var_c = edi
    sub_4c84d0(esi_2, ".%s")
    return 

*esi_2 = 0
