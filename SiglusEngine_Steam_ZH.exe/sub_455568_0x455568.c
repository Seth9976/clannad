// 函数: sub_455568
// 地址: 0x455568
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi

if (arg3 == 0)
    return 0x8876086c

int32_t eax_1 = sub_4538a9(arg1, arg2, 1, 0)

if (eax_1 != 0)
    int32_t* ecx_2 = *(eax_1 + 4)
    
    if (ecx_2[4] == 0 || *(eax_1 + 8) != 0xffffffff)
        int32_t edx_1 = *ecx_2
        
        if (ecx_2[1] == 4 && (edx_1 == 5 || edx_1 == 6 || edx_1 == 7 || edx_1 == 8 || edx_1 == 9))
            void* ecx_5 = *(*(*(arg1 + 0xb0) + (*(eax_1 + 0x14) << 2)) + 0x40)
            int32_t eax_3 = **eax_1
            
            if (ecx_5 != 0)
                eax_3 = *(*(ecx_5 + 8) + (eax_3 << 2))
            
            int32_t* eax_5 = *(*(arg1 + 0x18) + eax_3 * 0x18 + 4)
            *arg3 = eax_5
            
            if (eax_5 != 0)
                (*(*eax_5 + 4))(eax_5)
            
            return 0

return 0x8876086c
