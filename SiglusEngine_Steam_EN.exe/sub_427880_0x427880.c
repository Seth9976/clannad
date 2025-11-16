// 函数: sub_427880
// 地址: 0x427880
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL eax
sub_4d1c30(eax, arg2, arg1, 0x18)
*arg1 = 0
arg1[1] = 0

if (*arg2 == 0)
    return 

eax = arg2[5]

if (eax == 0 || eax == 1)
    int32_t edi_4 = (arg2[4] * arg2[3]) << 2
    sub_4d1c30(sub_4d6960(eax, &arg1[1], arg1, edi_4, "AVG_CAPTURE_MOUSE_CURSOR"), arg2[1], 
        arg1[1], edi_4)
    return 

uint32_t eax_1
uint32_t esi_2
int32_t* edi_1

if (eax == 2)
    edi_1 = arg2[1]
    eax_1 = *edi_1
    esi_2 = edi_1[eax_1 * 2] + edi_1[eax_1 * 2 - 1]
    sub_4d1c30(sub_4d6960(eax_1, &arg1[1], arg1, esi_2, "AVG_CAPTURE_MOUSE_CURSOR"), edi_1, 
        arg1[1], esi_2)
    return 

if (eax != 3)
    return 

edi_1 = arg2[1]
eax_1 = zx.d(*edi_1)
esi_2 = arg2[4] * arg2[3] + (eax_1 << 2)
sub_4d1c30(sub_4d6960(eax_1, &arg1[1], arg1, esi_2, "AVG_CAPTURE_MOUSE_CURSOR"), edi_1, arg1[1], 
    esi_2)
