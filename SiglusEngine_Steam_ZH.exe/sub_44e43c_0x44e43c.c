// 函数: sub_44e43c
// 地址: 0x44e43c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

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

int32_t ebx_1 = arg4

if (ebx_1 u<= 0)
label_44e4ca:
    esi[1] = arg2
    esi[3] = var_8
    *esi = 0xa
    esi[2] = ebx_1
    (*(arg1 + 0xfc))[6] = esi
    *(arg1 + 0xfc) = esi
    esi = nullptr
else
    int32_t eax_4 = sub_745f3f(ebx_1 << 6)
    var_8 = eax_4
    
    if (eax_4 != 0)
        if (ebx_1 u> 0)
            int32_t edi
            int32_t var_1c_2 = edi
            arg4 = var_8
            int32_t edi_2 = arg3 - var_8
            arg3 = ebx_1
            int32_t i
            
            do
                j_sub_4023fb(arg4, edi_2 + arg4)
                arg4 += 0x40
                i = arg3
                arg3 -= 1
            while (i != 1)
        
        goto label_44e4ca
    
    result = 0x8007000e

if (esi != 0)
    sub_44ce0e(esi, 1)

return result
