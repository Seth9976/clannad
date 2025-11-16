// 函数: sub_4a29bf
// 地址: 0x4a29bf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t* esi_1 = arg2 + ((arg4 + (arg3 << 2)) << 2)

if (*esi_1 == 0xffffffff)
    int32_t ebx_2 = arg5 << 2
    void* eax_2 = *(ebx_2 + *(arg1 + 0x14))
    int32_t eax_7
    
    if (*(eax_2 + 0xc) != 0xffffffff)
        void* var_14_1 = arg1
        void* var_18_1 = arg1
        var_18_1.q = fconvert.d(fconvert.t(*(eax_2 + 0x20)))
        eax_7 = sub_49f544(arg1, *(arg1 + 0x78), arg3, arg4, var_18_1)
    else
        *(*(ebx_2 + *(arg1 + 0x14)) + 0xc) = arg3
        *(*(ebx_2 + *(arg1 + 0x14)) + 0x10) = arg4
        eax_7 = arg5
    
    *esi_1 = eax_7

return *esi_1
