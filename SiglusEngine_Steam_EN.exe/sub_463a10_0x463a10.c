// 函数: sub_463a10
// 地址: 0x463a10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t i_1 = 0
void* esi_1 = arg1 * 0x650 + &data_72d6b0
void* ebx_1 = arg1 * 0x7a0 + &data_98bf04
void* var_10 = ebx_1

if (data_7031bc s> 0)
    void* ecx = &data_12b9280
    void* edi_1 = ebx_1 + 0x40
    void* var_c_1 = &data_12b9280
    void* var_8_1 = edi_1
    
    do
        int32_t edx = *(esi_1 + 0xc)
        
        if (edx == 5 || edx == 8)
            data_703008 = 1
        
        int32_t var_28_1
        void* eax
        
        if (*ecx != 0 || arg2 != 0 || *((i << 2) + &data_8c16b0) == 2)
            sub_4637f0(esi_1, ebx_1)
            sub_4d6c40(edi_1 - 0xc, edi_1 - 8)
            sub_4d6c40(edi_1 - 4, edi_1)
            sub_4d6c40(edi_1 + 4, edi_1 + 8)
            *(edi_1 + 0xc) = 0
            *(edi_1 + 0x10) = 0
            sub_4d6c40(edi_1 + 0x4c, edi_1 + 0x50)
            *(edi_1 + 0x4c) = 0
            *(edi_1 + 0x50) = 0
            edi_1 = var_8_1
            *(var_8_1 + 0x48) = 0
            eax = sub_4679d0(edi_1 + 0x234)
            sub_4631a0(edi_1 - 0x20)
            ebx_1 = var_10
            var_28_1 = 1
        else
            sub_4637f0(esi_1, ebx_1)
            eax = sub_463250(edi_1 - 0x20)
            var_28_1 = 0
        
        sub_4633c0(eax, ebx_1, esi_1, var_28_1)
        ebx_1 += 0xf40
        i = i_1 + 1
        ecx = var_c_1 + 0x24
        var_10 = ebx_1
        edi_1 += 0xf40
        var_c_1 = ecx
        var_8_1 = edi_1
        esi_1 += 0xca0
        i_1 = i
    while (i s< data_7031bc)

return i
