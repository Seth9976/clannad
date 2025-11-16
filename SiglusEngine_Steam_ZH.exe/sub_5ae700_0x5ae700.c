// 函数: sub_5ae700
// 地址: 0x5ae700
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *arg1

if (ecx s>= 0)
    int32_t eax_1 = data_4ebe33c
    *(eax_1 + (ecx << 2)) -= 1
    
    if (*(data_4ebe33c + (*arg1 << 2)) == 0)
        sub_59a180(&data_4ebe330, arg1)
    
    *arg1 = 0xffffffff

int32_t ecx_1 = *arg2

if (ecx_1 s>= 0)
    *arg1 = ecx_1
    int32_t eax_3 = data_4ebe33c
    *(eax_3 + (ecx_1 << 2)) += 1

*(arg1 + 4) = *(arg2 + 4)
*(arg1 + 0x14) = *(arg2 + 0x14)
arg1[9] = arg2[9]
arg1[0xa] = arg2[0xa]
arg1[0xb] = arg2[0xb]
arg1[0xc] = arg2[0xc]
arg1[0xd] = arg2[0xd]
arg1[0xe].b = arg2[0xe].b
*(arg1 + 0x39) = *(arg2 + 0x39)
*(arg1 + 0x3a) = *(arg2 + 0x3a)
int32_t edi = arg2[0xf]
void* edx_3 = arg2[0x10]

if (edx_3 != 0)
    *(edx_3 + 4)
    *(edx_3 + 4) += 1

arg1[0xf] = edi
int32_t* edi_1 = arg1[0x10]
arg1[0x10] = edx_3

if (edi_1 != 0)
    bool cond:0_1 = edi_1[1] != 1
    edi_1[1]
    edi_1[1] -= 1
    
    if (not(cond:0_1))
        (*(*edi_1 + 4))()
        int32_t ebx_1 = edi_1[2]
        edi_1[2] -= 1
        
        if (ebx_1 == 1)
            (*(*edi_1 + 8))()

return arg1
