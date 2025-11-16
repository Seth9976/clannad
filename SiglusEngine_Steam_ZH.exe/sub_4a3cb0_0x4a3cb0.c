// 函数: sub_4a3cb0
// 地址: 0x4a3cb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg3
int32_t edi
int32_t var_10 = edi
int32_t ecx = arg2
int32_t result

while (true)
    void* eax_2 = *(*(arg1 + 0x18) + (ebx << 2))
    void* esi_1 = *(*(arg1 + 0x14) + (ecx << 2))
    
    if (arg4 != 0 && (*(*(*(arg1 + 0x10) + (*(esi_1 + 4) << 2)) + 4) & 2) != 0)
        int32_t ecx_3 = *(eax_2 + 0x18)
        
        if (ecx_3 != 0)
            *(ecx_3 + (*(eax_2 + 0x14) << 2)) = *(esi_1 + 0x48)
            ebx = arg3
        
        *(eax_2 + 0x14) += 1
        void* eax_4 = *(*(arg1 + 0x18) + (*(esi_1 + 0x48) << 2))
        int32_t ecx_5 = *(eax_4 + 0x20)
        
        if (ecx_5 != 0)
            *(ecx_5 + (*(eax_4 + 0x1c) << 2)) = ebx
        
        *(eax_4 + 0x1c) += 1
    
    result = *(esi_1 + 8)
    
    if (result != 0xffffffff)
        result = sub_4a3cb0(result, ebx, 1)
    
    int32_t esi_2 = *(esi_1 + 0x14)
    
    if (esi_2 == 0xffffffff)
        break
    
    arg4 = 1
    ecx = esi_2

return result
