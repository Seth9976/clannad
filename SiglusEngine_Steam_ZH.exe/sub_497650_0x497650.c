// 函数: sub_497650
// 地址: 0x497650
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* entry_ebx
int32_t i = entry_ebx[0x53]
int32_t i_1 = 0

if (i s> 0)
    void* var_8_1 = &entry_ebx[0x54]
    int32_t edi
    int32_t var_18_1 = edi
    
    do
        void* eax_1 = *var_8_1
        
        if (*(eax_1 + 0x4c) == 0)
            int32_t esi_1 = *(eax_1 + 0x10)
            
            if (esi_1 s< 0 || esi_1 s>= 4 || entry_ebx[esi_1 + 0x2a] == 0)
                void* eax_3 = *entry_ebx
                *(eax_3 + 0x14) = 0x34
                *(eax_3 + 0x18) = esi_1
                (*eax_3)(entry_ebx)
            
            int32_t eax_4 = (*entry_ebx[1])(entry_ebx, 1, 0x84)
            __builtin_memcpy(eax_4, entry_ebx[esi_1 + 0x2a], 0x84)
            *(eax_1 + 0x4c) = eax_4
        
        i = i_1 + 1
        i_1 = i
        var_8_1 += 4
    while (i s< entry_ebx[0x53])

return i
