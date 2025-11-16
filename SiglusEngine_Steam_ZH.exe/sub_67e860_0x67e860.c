// 函数: sub_67e860
// 地址: 0x67e860
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = data_bac474
arg1 = arg1
int32_t* eax

if (*(edi + 0x18) != 0)
    int32_t* var_8
    int32_t ecx_2 = sub_67f6a0(edi + 0x14, &var_8, &arg1)
    eax = var_8
    
    if (eax != *(edi + 0x14))
        eax = eax[5]
        
        if (eax != 0)
            int32_t var_18_2 = ecx_2
            int32_t* eax_1 = sub_55b0d0(edi + 0x3c, eax[6])
            
            if (eax_1 == 0)
                *arg2 = 0
                int32_t* eax_3
                eax_3.b = 1
                return eax_3
            
            *arg2 = *eax_1
            int32_t* eax_2
            eax_2.b = 1
            return eax_2

eax.b = 0
return eax
