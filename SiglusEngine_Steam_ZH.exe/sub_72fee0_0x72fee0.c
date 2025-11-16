// 函数: sub_72fee0
// 地址: 0x72fee0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
void* edi = esi[0x70]
esi[0x1d] = *(edi + 0x10)
esi[0x1c] = *(edi + 0x14)
int32_t eax_2 = esi[0x13]

if (eax_2 == 0)
    void** (* eax_13)(void* arg1, int32_t* arg2, void** arg3, int32_t arg4) = sub_72f9b0
    
    if (esi[0x19] == 3)
        eax_13 = sub_72fa50
    
    *(edi + 4) = eax_13
    return eax_13

int32_t eax_11

if (eax_2 == 1)
    bool cond:1_1 = esi[0x19] == 3
    eax_11 = sub_72faf0
    *(edi + 0x30) = 0
    
    if (cond:1_1)
        eax_11 = sub_72fbe0
    
    bool cond:2_1 = *(edi + 0x1c) != 0
    *(edi + 4) = eax_11
    
    if (not(cond:2_1))
        eax_11 = sub_72f790(esi)
    
    if (*(edi + 0x34) == 0)
        return sub_72f8d0(esi) __tailcall
else
    if (eax_2 != 2)
        *(*esi + 0x14) = 0x31
        return (**esi)(esi)
    
    *(edi + 4) = sub_72fce0
    *(edi + 0x54) = 0
    void* edi_1 = edi + 0x44
    
    if (*edi_1 == 0)
        sub_72fe90(esi)
    
    int32_t i = 0
    eax_11 = (esi[0x17] << 1) + 4
    arg1 = eax_11
    
    if (esi[0x19] s> 0)
        do
            _memset(*edi_1, 0, eax_11)
            eax_11 = arg1
            edi_1 += 4
            i += 1
        while (i s< esi[0x19])

return eax_11
