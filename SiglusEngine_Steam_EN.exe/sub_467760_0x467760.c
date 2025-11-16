// 函数: sub_467760
// 地址: 0x467760
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax = *(arg2 + 4)

if (eax != 0)
    int32_t var_8 = 0
    int32_t var_c = 0
    sub_4ebec0(eax, &var_8, &var_c, eax)
    
    if (var_c != 0)
        char* ecx_1 = *(arg2 + 0xc)
        void* eax_1 = arg2 + 0xc
        char* ebx = var_8
        
        if (ecx_1 == 0)
            goto label_4677c3
        
        if (sub_4d0f10(ecx_1, ebx) != 0)
            eax_1 = arg2 + 0xc
        label_4677c3:
            
            if (*(arg2 + 0x10) != 0)
                *(arg4 + 0x74) += 1
            
            sub_4d6c40(arg2 + 8, eax_1)
            sub_4d6c40(arg2 + 0x10, arg2 + 0x14)
            *(arg2 + 0x18) = 0
            *(arg2 + 0x1c) = 0
            
            if (ebx != 0)
                uint32_t eax_3 = sub_4cfc80(ebx)
                sub_4d1c30(sub_4d6960(eax_3, arg2 + 0xc, arg2 + 8, eax_3, "ObjectStr"), ebx, 
                    *(arg2 + 0xc), eax_3)
            
            int32_t var_10
            sub_4676c0(&var_8, ebx, arg3, nullptr, 0, 0, &var_8, &var_10)
            int32_t eax_6 = var_8
            
            if (eax_6 s> 0)
                int32_t esi_2 = var_10
                
                if (esi_2 s> 0)
                    int32_t eax_8 = (eax_6 * esi_2) << 2
                    sub_4d6960(eax_8, arg2 + 0x14, arg2 + 0x10, eax_8, "ObjectStrMem")
                    int32_t eax_9 = var_8
                    *(arg2 + 0x18) = eax_9
                    void* var_3c_1 = *(arg2 + 0x14)
                    *(arg2 + 0x1c) = esi_2
                    sub_4676c0(eax_9, ebx, arg3, var_3c_1, eax_9, esi_2, &var_8, &var_10)
                    *(arg4 + 0x74) += 1
        
        return sub_4d6c40(&var_c, &var_8)

if (*(arg2 + 0x10) != 0)
    *(arg4 + 0x74) += 1

sub_4d6c40(arg2 + 8, arg2 + 0xc)
int32_t result = sub_4d6c40(arg2 + 0x10, arg2 + 0x14)
*(arg2 + 0x1c) = 0
*(arg2 + 0x18) = 0
return result
