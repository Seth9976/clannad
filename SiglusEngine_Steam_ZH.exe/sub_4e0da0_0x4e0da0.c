// 函数: sub_4e0da0
// 地址: 0x4e0da0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = arg2
int32_t edi
int32_t var_c = edi

if (*(ecx + 0x28) u> 0x10)
    int32_t eax_1 = arg1[0x4f]
    int32_t esi_1 = 0
    
    if (eax_1 s> 0)
        do
            if ((*(arg3 + (esi_1 << 2)) & 7) != 0)
                void* eax_2 = *arg1
                *(eax_2 + 0x14) = 2
                (*(eax_2 + 4))(arg1, 0xffffffff)
                ecx = arg2
                break
            
            esi_1 += 1
        while (esi_1 s< eax_1)
    
    if (esi_1 == arg1[0x4f])
        int32_t eax_3 = arg1[0x12]
        
        if (eax_3 == 5 || eax_3 == 6)
            return sub_4e0410(ecx, arg4, arg1, arg3)

return sub_4e0350(arg1, ecx, arg4, arg3)
