// 函数: sub_67e790
// 地址: 0x67e790
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
void* edi = data_bac474
int32_t arg_4 = arg_4

if (*(edi + 0x18) != 0)
    int32_t ecx_1 = sub_67f6a0(edi + 0x14, &var_8, &arg_4)
    int32_t* eax_1 = var_8
    
    if (eax_1 != *(edi + 0x14))
        void* esi_1 = eax_1[5]
        
        if (esi_1 != 0)
            int32_t var_18_2 = ecx_1
            int32_t* eax_2
            int32_t ecx_3
            eax_2, ecx_3 = sub_55b0d0(edi + 0x3c, *(esi_1 + 0x18))
            int32_t result
            
            if (eax_2 == 0)
                result = 0
            else
                result = *eax_2
            
            int32_t var_18_3 = ecx_3
            int32_t* eax_3 = sub_55b0d0(edi + 0x3c, *(esi_1 + 0x18))
            
            if (eax_3 != 0)
                *eax_3 = arg2
            
            return result

return 0xffffffff
