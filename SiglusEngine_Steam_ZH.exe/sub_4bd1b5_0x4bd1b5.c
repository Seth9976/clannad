// 函数: sub_4bd1b5
// 地址: 0x4bd1b5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg1[0x40]
int32_t* ecx = eax[2]
int32_t edi
int32_t var_20 = edi
int32_t ebx_1 = *eax & 0xfffff
int32_t edi_2 = ebx_1 - eax[1]
int32_t edi_3 = neg.d(edi_2)
int32_t* edi_5 = sbb.d(edi_3, edi_3, edi_2 != 0) & &ecx[ebx_1]
int32_t eax_2 = ebx_1 * 2
int32_t* eax_4 = sbb.d(eax_2, eax_2, eax_2 u< *(arg1[0x40] + 4)) & &ecx[ebx_1 * 2]
int32_t result = sub_4d7429(arg1, arg2)

if (result s>= 0)
    uint32_t eax_8 = zx.d(*(*(arg1[5] + (*ecx << 2)) + 0x6d))
    int32_t edx_1 = *arg1
    arg2 = eax_8
    int32_t eax_10 = (eax_8 & 0x7ff) | 0xb0000000
    int32_t var_8 = eax_10
    result = (*(edx_1 + 0x64))(eax_10, 0xf0000, 0)
    
    if (result s>= 0)
        int32_t var_c
        
        if (edi_5 == 0)
        label_4bd292:
            
            if (eax_4 == 0)
            label_4bd2df:
                result = (*(*arg1 + 0x60))()
                
                if (result s>= 0)
                    result = sub_4d25aa(arg1)
                    
                    if (result s>= 0)
                        return 0
            else
                result = (*(*arg1 + 0x74))(*(arg1[5] + (*eax_4 << 2)), &var_8, &arg2)
                
                if (result s>= 0)
                    result = (*(*arg1 + 0x78))(eax_4, ebx_1, 0xf0000, &var_c)
                    
                    if (result s>= 0)
                        result = (*(*arg1 + 0x68))(var_8, var_c, arg2)
                        
                        if (result s>= 0)
                            goto label_4bd2df
        else
            result = (*(*arg1 + 0x74))(*(arg1[5] + (*edi_5 << 2)), &var_8, &arg2)
            
            if (result s>= 0)
                result = (*(*arg1 + 0x78))(edi_5, ebx_1, 0xf0000, &var_c)
                
                if (result s>= 0)
                    result = (*(*arg1 + 0x68))(var_8, var_c, arg2)
                    
                    if (result s>= 0)
                        goto label_4bd292

return result
