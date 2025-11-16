// 函数: sub_620d90
// 地址: 0x620d90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1

if (arg1 s< 0)
    int32_t eax
    eax.b = 1
    return eax

void* ebx = data_bac510
int32_t esi = 0
int32_t* eax_1 = *(ebx + 0x103f0)
int32_t* var_10 = eax_1

if (eax_1 s> 0)
    void* edi_1 = data_bac4e4
    void* var_c_1 = ebx + 0xbc30
    void* ebx_2 = ebx + 0xbc30
    
    do
        eax_1 = *(ebx_2 - 4)
        int32_t edx_1 = 0
        int32_t ebx_5 = (*ebx_2 - eax_1) s>> 2
        
        if (ebx_5 s> 0)
            do
                if (*eax_1 == arg1)
                    if (esi s< (*(edi_1 + 0x164) - *(edi_1 + 0x160)) s>> 3
                            && *(*(edi_1 + 0x160) + (esi << 3)) == 0)
                        eax_1.b = 0
                        return eax_1
                    
                    arg1 = var_8
                
                edx_1 += 1
                eax_1 = &eax_1[1]
            while (edx_1 s< ebx_5)
        
        esi += 1
        ebx_2 = var_c_1 + 0x48
        var_c_1 = ebx_2
    while (esi s< var_10)

eax_1.b = 1
return eax_1
