// 函数: sub_70b8a0
// 地址: 0x70b8a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_70b9b0(arg1, arg2)
int32_t edi = *(arg2 + 0x24)
void* ebx_1 = *(arg2 + 0x28)

if (ebx_1 != 0)
    *(ebx_1 + 4)
    *(ebx_1 + 4) += 1

*(arg1 + 0x24) = edi
int32_t* edi_1 = *(arg1 + 0x28)
*(arg1 + 0x28) = ebx_1

if (edi_1 != 0)
    bool cond:0_1 = edi_1[1] != 1
    edi_1[1]
    edi_1[1] -= 1
    
    if (not(cond:0_1))
        (*(*edi_1 + 4))()
        bool cond:1_1 = edi_1[2] != 1
        edi_1[2]
        edi_1[2] -= 1
        
        if (not(cond:1_1))
            (*(*edi_1 + 8))()

int32_t edi_2 = *(arg2 + 0x2c)
void* eax_7 = *(arg2 + 0x30)

if (eax_7 != 0)
    *(eax_7 + 4)
    *(eax_7 + 4) += 1

*(arg1 + 0x2c) = edi_2
int32_t* edi_3 = *(arg1 + 0x30)
*(arg1 + 0x30) = eax_7

if (edi_3 != 0)
    bool cond:2_1 = edi_3[1] != 1
    edi_3[1]
    edi_3[1] -= 1
    
    if (not(cond:2_1))
        (*(*edi_3 + 4))()
        bool cond:3_1 = edi_3[2] != 1
        edi_3[2]
        edi_3[2] -= 1
        
        if (not(cond:3_1))
            (*(*edi_3 + 8))()

void* edx_3 = *(arg2 + 0x38)
int32_t edi_4 = *(arg2 + 0x34)

if (edx_3 != 0)
    *(edx_3 + 4)
    *(edx_3 + 4) += 1

*(arg1 + 0x34) = edi_4
int32_t* edi_5 = *(arg1 + 0x38)
*(arg1 + 0x38) = edx_3

if (edi_5 != 0)
    bool cond:4_1 = edi_5[1] != 1
    edi_5[1]
    edi_5[1] -= 1
    
    if (not(cond:4_1))
        (*(*edi_5 + 4))()
        int32_t ebx_2 = edi_5[2]
        edi_5[2] -= 1
        
        if (ebx_2 == 1)
            (*(*edi_5 + 8))()

return arg1
