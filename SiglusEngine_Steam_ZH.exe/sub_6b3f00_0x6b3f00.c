// 函数: sub_6b3f00
// 地址: 0x6b3f00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* var_8 = arg1
int32_t eax = arg2[4]
int32_t eax_1 = eax - 1
int32_t var_8_1 = 0

if (eax - 1 s>= 0)
    int32_t edi_1 = arg2[5]
    int32_t temp1_1
    
    do
        void** ecx
        
        if (edi_1 u< 8)
            ecx = arg2
        else
            ecx = *arg2
        
        if (*(ecx + (eax_1 << 1)) == 0x5c)
            break
        
        void** ecx_1
        
        if (edi_1 u< 8)
            ecx_1 = arg2
        else
            ecx_1 = *arg2
        
        if (*(ecx_1 + (eax_1 << 1)) == 0x2e)
            *(arg1 + 0x14) = 7
            *(arg1 + 0x10) = 0
            *arg1 = 0
            sub_52e3c0(arg1, arg2, eax_1 + 1, 0xffffffff)
            return arg1
        
        temp1_1 = eax_1
        eax_1 -= 1
    while (temp1_1 - 1 s>= 0)

*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
*arg1 = 0
sub_52e720(arg1, &data_ad7c90, nullptr)
return arg1
