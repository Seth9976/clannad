// 函数: sub_44e0f6
// 地址: 0x44e0f6
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
label_44e159:
    int32_t ecx_4 = arg4 << 4
    int32_t edi
    int32_t var_1c_2 = edi
    int32_t esi_2
    int32_t edi_2
    edi_2, esi_2 = __builtin_memcpy(var_8, arg3, ecx_4 u>> 2 << 2)
    __builtin_memcpy(edi_2, esi_2, ecx_4 & 3)
    ebx[1] = arg2
    ebx[2] = arg4
    ebx[3] = var_8
    *ebx = 8
    (*(arg1 + 0xfc))[6] = ebx
    *(arg1 + 0xfc) = ebx
    ebx = nullptr
else
    int32_t eax_4 = sub_745f3f(arg4 << 4)
    var_8 = eax_4
    
    if (eax_4 != 0)
        goto label_44e159
    
    result = 0x8007000e

if (ebx != 0)
    sub_44ce0e(ebx, 1)

return result
