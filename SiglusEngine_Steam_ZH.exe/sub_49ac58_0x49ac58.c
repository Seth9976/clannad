// 函数: sub_49ac58
// 地址: 0x49ac58
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = *(arg1 + 0x18)
int32_t edi
int32_t var_c = edi
int32_t edi_1 = arg2
arg2 = 0
*(arg1 + 0x20) = edi_1

if (*(eax + 0xa) u> 0)
    int32_t* ecx = *(arg1 + 0x38)
    
    do
        ecx[arg2]
        sub_49ac58(edi_1)
        ecx = *(arg1 + 0x38)
        void* eax_1 = ecx[arg2]
        int32_t edx_1
        edx_1.w = *(eax_1 + 8)
        int16_t temp1_1 = edx_1.w
        edx_1.w = neg.w(edx_1.w)
        arg2 += 1
        edi_1 += (((sbb.d(edx_1, edx_1, temp1_1 != 0) & 3) + 1) * zx.d(*(*(eax_1 + 0x18) + 8)) *
            *(eax_1 + 0x2c)) << 2
    while (arg2 u< zx.d(*(*(arg1 + 0x18) + 0xa)))

return 0
