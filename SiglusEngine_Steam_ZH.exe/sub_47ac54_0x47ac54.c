// 函数: sub_47ac54
// 地址: 0x47ac54
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_20 = edi

if (arg3 == 0 || (arg5 == arg3 && (*(arg1[1].d i+ 0x70) & 4) != 0))
    goto label_47ac9b

if (sub_47ad82(arg1, arg3, 0) s< 0 || arg1[0xa].d != 0 || *(arg1 + 0x54) != 0)
    return 

arg3 = nullptr
label_47ac9b:
void* eax_3 = arg1[1].d
int32_t edx_1 = *(eax_3 + 8)
int32_t eax_4 = *(eax_3 + 0xc)
int32_t esi_2 = *(*(arg1 + 4) + 0x18) << 2
int32_t eax_5 = sub_745f3f(esi_2)
int32_t var_8_1

if (eax_5 != 0)
    int32_t esi_4
    int32_t edi_2
    edi_2, esi_4 = __builtin_memcpy(eax_5, arg1[3].d, esi_2 u>> 2 << 2)
    int32_t edi_3 = __builtin_memcpy(edi_2, esi_4, esi_2 & 3)
    
    if (*(arg1[1].d i+ 0x5c) == 0)
        goto label_47ad4e
    
    int32_t ecx_9 = arg1[0xc].d
    int32_t esi_5 = arg1[0xb].d
    edi_3 = *(arg1 + 0x5c)
    arg1[0xb].d = 1
    *(arg1 + 0x5c) = 0
    arg1[0xc].d = 0
    var_8_1 = sub_4729cc(arg1, edi_3, arg2, arg3, arg4, arg5, eax_5)
    *(arg1 + 0x4c) = 0
    arg1[0xa].d = 0
    *(arg1 + 0x54) = 0
    arg1[0xb].d = esi_5
    *(arg1 + 0x5c) = edi_3
    arg1[0xc].d = ecx_9
    
    if (var_8_1 s< 0)
        sub_46e9ba(arg1, edx_1, eax_4, eax_5)
    label_47ad4e:
        int32_t var_28_5 = eax_5
        int32_t eax_9
        int80_t st0_1
        st0_1, eax_9 = sub_47380a(arg1, edi_3, arg2, arg3, arg4, arg5)
        var_8_1 = eax_9
        
        if (eax_9 s>= 0)
            var_8_1 = 0
else
    var_8_1 = 0x8007000e
j__free(eax_5)
