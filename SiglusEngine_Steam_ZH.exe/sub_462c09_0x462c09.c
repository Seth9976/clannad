// 函数: sub_462c09
// 地址: 0x462c09
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
char* ebx = arg1

if (ebx[0x5d] != 0)
    return 0x88760384

int32_t edi
int32_t var_14_1 = edi
int32_t var_8_1 = 0
arg1 = nullptr

if (*(ebx + 0x40) == 1)
    char* esi_1 = __strdup(sub_761a44(4, nullptr))
    arg1 = esi_1
    
    if (esi_1 == 0)
        sub_761a44(4, &data_ab55ec)
    else
        void* const edi_1 = &data_ab55ec
        int32_t i = 2
        bool cond:4_1 = true
        
        while (i != 0)
            char temp1_1 = *esi_1
            char temp2_1 = *edi_1
            cond:4_1 = temp1_1 == temp2_1
            esi_1 = &esi_1[1]
            edi_1 += 1
            i -= 1
            
            if (temp1_1 != temp2_1)
                break
        
        if (not(cond:4_1))
            sub_761a44(4, &data_ab55ec)

int32_t i_1 = 0
int32_t eax_1

if (*(ebx + 0xc) u> 0)
    do
        eax_1 = sub_461ea8(ebx, *(*(ebx + 0x18) + (i_1 << 2)))
        var_8_1 = eax_1
        
        if (eax_1 s< 0)
            return eax_1
        
        i_1 += 1
    while (i_1 u< *(ebx + 0xc))

int32_t i_2 = 0

if (*(ebx + 0x1c) u> 0)
    do
        eax_1 = (*(**(*(ebx + 0x28) + (i_2 << 2)) + 0x28))(ebx)
        var_8_1 = eax_1
        
        if (eax_1 s< 0)
            return eax_1
        
        i_2 += 1
    while (i_2 u< *(ebx + 0x1c))

if (arg1 != 0)
    char* esi_2 = arg1
    void* const edi_2 = &data_ab55ec
    int32_t i_3 = 2
    bool cond:7_1 = true
    
    while (i_3 != 0)
        char temp3_1 = *esi_2
        char temp4_1 = *edi_2
        cond:7_1 = temp3_1 == temp4_1
        esi_2 = &esi_2[1]
        edi_2 += 1
        i_3 -= 1
        
        if (temp3_1 != temp4_1)
            break
    
    if (not(cond:7_1))
        sub_761a44(4, arg1)
    
    _free(arg1)

if (var_8_1 s>= 0)
    ebx[0x5d] = 1

return var_8_1
