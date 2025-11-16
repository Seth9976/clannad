// 函数: sub_44e503
// 地址: 0x44e503
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
int32_t result = 0
int32_t var_8 = 0
int32_t* eax = sub_745f3f(0x1c)
int32_t* esi

if (eax == 0)
    esi = nullptr
else
    esi = sub_446745(eax)

if (esi == 0)
    return 0x8007000e

int32_t edi
int32_t var_1c_1 = edi
int32_t edi_1 = arg4
int32_t eax_4

if (edi_1 u> 0)
    eax_4 = sub_745f3f(edi_1 << 6)
    var_8 = eax_4

if (edi_1 u<= 0 || eax_4 != 0)
    if (edi_1 u> 0)
        arg4 = var_8
        
        do
            j_sub_4023fb(arg4, *(arg3 + (ebx << 2)))
            arg4 += 0x40
            ebx += 1
        while (ebx u< edi_1)
    
    esi[1] = arg2
    esi[3] = var_8
    *esi = 0xa
    esi[2] = edi_1
    (*(arg1 + 0xfc))[6] = esi
    *(arg1 + 0xfc) = esi
    esi = nullptr
else
    result = 0x8007000e

if (esi != 0)
    sub_44ce0e(esi, 1)

return result
