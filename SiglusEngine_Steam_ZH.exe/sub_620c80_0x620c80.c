// 函数: sub_620c80
// 地址: 0x620c80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
char* eax

if (data_bac484[0x138] == 0)
    void* edx_1 = data_bac458
    
    if (*(edx_1 + 0x351) == 0)
        if (data_bac4a0[0xcd] != 0)
            eax.b = 0
            return eax
        
        if (*(edx_1 + 0x350) == 0)
            eax.b = *data_bac498
            
            if (eax.b != 0)
                eax.b = 0
                return eax

void* edi = data_bac4e4

if (*(edi + 0xec) == 0 || *(edi + 0xee) == 0 || *(edi + 0x15c) == 1)
    eax.b = 0
    return eax

if (arg1 s< 0)
    eax.b = 1
    return eax

void* ebx = data_bac510
int32_t esi = 0
int32_t* eax_1 = *(ebx + 0x103f0)
int32_t* var_10 = eax_1

if (eax_1 s> 0)
    void* ebx_1 = ebx + 0xbc30
    void* var_c_1 = ebx_1
    
    do
        eax_1 = *(ebx_1 - 4)
        int32_t edx_2 = 0
        int32_t ebx_4 = (*ebx_1 - eax_1) s>> 2
        
        if (ebx_4 s> 0)
            do
                if (*eax_1 == arg1)
                    if (esi s< (*(edi + 0x164) - *(edi + 0x160)) s>> 3
                            && *(*(edi + 0x160) + (esi << 3)) == 0)
                        eax_1.b = 0
                        return eax_1
                    
                    arg1 = var_8
                
                edx_2 += 1
                eax_1 = &eax_1[1]
            while (edx_2 s< ebx_4)
        
        esi += 1
        ebx_1 = var_c_1 + 0x48
        var_c_1 = ebx_1
    while (esi s< var_10)

eax_1.b = 1
return eax_1
