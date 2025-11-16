// 函数: sub_45f1c3
// 地址: 0x45f1c3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t result = 0
int32_t* var_8_1 = nullptr

if (arg1 != 0)
    int32_t edi
    int32_t var_10_2 = edi
    
    if (arg3 != 0)
        int32_t ebx
        int32_t var_14_2 = ebx
        int32_t eax_3 = (*(*arg1 + 0xc))(arg1)
        int32_t* eax_5 = (*(*arg3 + 0xc))(arg3)
        void* ebx_1 = arg2 + arg4
        int32_t* eax_9 = sub_745f3f(ebx_1 * 0xc)
        var_8_1 = eax_9
        
        if (eax_9 != 0)
            int32_t eax_11 = arg2 * 0xc
            int32_t esi_1
            int32_t edi_4
            edi_4, esi_1 = __builtin_memcpy(var_8_1, eax_3, eax_11 u>> 2 << 2)
            __builtin_memcpy(edi_4, esi_1, eax_11 & 3)
            int32_t ecx_13 = arg4 * 0xc
            int32_t esi_3
            int32_t edi_6
            edi_6, esi_3 = __builtin_memcpy(&var_8_1[arg2 * 3], eax_5, ecx_13 u>> 2 << 2)
            __builtin_memcpy(edi_6, esi_3, ecx_13 & 3)
            result = sub_45efa3(var_8_1, ebx_1, arg5)
        else
            result = 0x8007000e
    else
        *arg5 = arg1
        (*(*arg1 + 4))(arg1)
else if (arg3 != 0)
    *arg5 = arg3
    (*(*arg3 + 4))(arg3)
else
    *arg5 = 0

j__free(var_8_1)
return result
