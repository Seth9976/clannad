// 函数: sub_44e2f3
// 地址: 0x44e2f3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
int32_t var_8 = 0
int32_t* eax = sub_745f3f(0x1c)
int32_t* ebx

if (eax == 0)
    ebx = nullptr
else
    ebx = sub_446745(eax)

if (ebx == 0)
    return 0x8007000e

if (arg4 u<= 0)
label_44e350:
    int32_t eax_5 = 0
    
    if (arg4 u> 0)
        int32_t edx_1 = var_8
        int32_t edi
        int32_t var_1c_1 = edi
        
        do
            int32_t esi_2 = *(arg3 + (eax_5 << 2))
            int32_t edi_1 = edx_1
            eax_5 += 1
            edx_1 += 0x40
            __builtin_memcpy(edi_1, esi_2, 0x40)
        while (eax_5 u< arg4)
    
    ebx[1] = arg2
    ebx[2] = arg4
    ebx[3] = var_8
    *ebx = 0xa
    (*(arg1 + 0xfc))[6] = ebx
    *(arg1 + 0xfc) = ebx
    ebx = nullptr
else
    int32_t eax_4 = sub_745f3f(arg4 << 6)
    var_8 = eax_4
    
    if (eax_4 != 0)
        goto label_44e350
    
    result = 0x8007000e

if (ebx != 0)
    sub_44ce0e(ebx, 1)

return result
