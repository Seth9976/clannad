// 函数: sub_5ae420
// 地址: 0x5ae420
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__builtin_memcpy(arg1, arg2, 0x80)
*(arg1 + 0x80) = *(arg2 + 0x80)

if (arg1 + 0x84 != arg2 + 0x84)
    sub_52e3c0(arg1 + 0x84, arg2 + 0x84, 0, 0xffffffff)

*(arg1 + 0x9c) = *(arg2 + 0x9c)
sub_5ae670(arg1 + 0xa0, arg2 + 0xa0)
*(arg1 + 0x25c) = *(arg2 + 0x25c)

if (arg1 + 0x260 != arg2 + 0x260)
    sub_52e3c0(arg1 + 0x260, arg2 + 0x260, 0, 0xffffffff)

if (arg1 + 0x278 != arg2 + 0x278)
    sub_52e3c0(arg1 + 0x278, arg2 + 0x278, 0, 0xffffffff)

if (arg1 + 0x290 != arg2 + 0x290)
    sub_52e3c0(arg1 + 0x290, arg2 + 0x290, 0, 0xffffffff)

*(arg1 + 0x2a8) = *(arg2 + 0x2a8)
*(arg1 + 0x2ac) = *(arg2 + 0x2ac)
*(arg1 + 0x2b0) = *(arg2 + 0x2b0)
*(arg1 + 0x2b4) = *(arg2 + 0x2b4)
*(arg1 + 0x2b8) = *(arg2 + 0x2b8)
*(arg1 + 0x2bc) = *(arg2 + 0x2bc)
sub_5ae700(arg1 + 0x2c0, arg2 + 0x2c0)
sub_5b03a0(arg1 + 0x304, arg2 + 0x304)
void* eax_16 = *(arg2 + 0x314)
int32_t edi_1 = *(arg2 + 0x310)

if (eax_16 != 0)
    *(eax_16 + 4) += 1

*(arg1 + 0x310) = edi_1
int32_t* edi_2 = *(arg1 + 0x314)
*(arg1 + 0x314) = eax_16

if (edi_2 != 0)
    bool cond:0_1 = edi_2[1] != 1
    edi_2[1] -= 1
    
    if (not(cond:0_1))
        (*(*edi_2 + 4))()
        bool cond:1_1 = edi_2[2] != 1
        edi_2[2]
        edi_2[2] -= 1
        
        if (not(cond:1_1))
            (*(*edi_2 + 8))()

void* eax_23 = *(arg2 + 0x31c)
int32_t edi_3 = *(arg2 + 0x318)

if (eax_23 != 0)
    *(eax_23 + 4)
    *(eax_23 + 4) += 1

*(arg1 + 0x318) = edi_3
int32_t* edi_4 = *(arg1 + 0x31c)
*(arg1 + 0x31c) = eax_23

if (edi_4 != 0)
    bool cond:2_1 = edi_4[1] != 1
    edi_4[1]
    edi_4[1] -= 1
    
    if (not(cond:2_1))
        (*(*edi_4 + 4))()
        int32_t ecx_11 = edi_4[2]
        edi_4[2] -= 1
        
        if (ecx_11 == 1)
            (*(*edi_4 + 8))()

sub_5ae7e0(arg1 + 0x320, arg2 + 0x320)
*(arg1 + 0x440) = *(arg2 + 0x440)
sub_5ae7e0(arg1 + 0x450, arg2 + 0x450)
*(arg1 + 0x570) = *(arg2 + 0x570)
return arg1
