// 函数: sub_4e0e20
// 地址: 0x4e0e20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t edx = arg2
int32_t edi
int32_t var_c = edi
int32_t ecx

if (*(edx + 0x28) u> 0x10)
    int32_t eax_1 = arg1[0x4f]
    int32_t esi_1 = 0
    
    if (eax_1 s> 0)
        do
            if ((arg3[esi_1].b & 7) != 0)
                void* eax_2 = *arg1
                *(eax_2 + 0x14) = 2
                ecx = (*(eax_2 + 4))(arg1, 0xffffffff)
                edx = arg2
                break
            
            esi_1 += 1
        while (esi_1 s< eax_1)
    
    if (esi_1 == arg1[0x4f])
        int32_t eax_3 = arg1[0x12]
        
        if (eax_3 == 5 || eax_3 == 6)
            return sub_4e07d0(ecx, edx, arg4, arg1, arg3)

return sub_4e06a0(ecx, arg1, arg4, edx, arg3)
