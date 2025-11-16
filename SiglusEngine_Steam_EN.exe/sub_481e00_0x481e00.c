// 函数: sub_481e00
// 地址: 0x481e00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg3
void* eax = *(edi + 0x3c)
int32_t ebx = *(edi + 0x38)
int32_t esi = *(edi + 0x34)
int32_t var_8 = ebx
void* var_c = eax
arg3 = eax

if (arg2 u<= 0xff)
    void* edx_1 = arg2 * 0x58 + &data_1b16490
    void* var_10_1 = edx_1
    
    if (esi s>= 0)
        eax = *(edx_1 + 0x30)
        
        if (esi s< *(eax + 0x94))
            int32_t esi_1 = 0
            int32_t* eax_2 = *(edx_1 + 0x3c) + esi * 0x78
            int32_t* var_14 = eax_2
            int32_t var_18
            
            while (true)
                if (sub_481670(eax_2, edx_1, edi, eax_2, &var_8, &arg3, &var_18) == 0)
                    void* eax_6 = arg3
                    
                    if (esi_1 == 0)
                        ebx = var_8
                        esi_1 = 1
                        var_c = eax_6
                    
                    edx_1 = var_10_1
                    arg3 = eax_6 + 1
                    eax_2 = var_14
                else
                    if (var_18 != 0)
                        break
                    
                    void* eax_4 = arg3
                    
                    if (esi_1 == 0)
                        ebx = var_8
                        var_c = eax_4
                    
                    edx_1 = var_10_1
                    esi_1 = 0
                    arg3 = eax_4 + 1
                    eax_2 = var_14
            *(edi + 0x38) = ebx
            *(edi + 0x3c) = var_c
            return var_c

*edi = 1
return eax
