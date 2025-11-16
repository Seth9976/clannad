// 函数: sub_422bda
// 地址: 0x422bda
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
void* eax
long double st0_1

if (*(arg1 + 0x54) == 0)
    eax = arg4
else
    st0_1, eax = sub_41da34(arg1, arg4)
int16_t x87control

if (*(arg1 + 0x10) != 0)
    eax = sub_41ef58(arg1, x87control, eax)
char* ecx_4 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) i* arg3 + *(arg1 + 0x20)
arg2 = nullptr

if (*(arg1 + 0x68) u<= 0)
    return 

void* edi_1 = eax + 8

do
    void* edx_2 = *(arg1 + 0x38)
    char ebx_1 = 0
    arg4 = nullptr
    arg3 = 3.40282347e+38f
    
    do
        fconvert.t(*(edi_1 - 8)) - fconvert.t(*edx_2)
        fconvert.t(*(edi_1 - 4)) - fconvert.t(*(edx_2 + 4))
        fconvert.t(*edi_1) - fconvert.t(*(edx_2 + 8))
        long double x87_r4_2 = fconvert.t(*(edi_1 + 4)) - fconvert.t(*(edx_2 + 0xc))
        long double temp1_1 = fconvert.t(arg3)
        x87_r4_2 - temp1_1
        eax.w = (x87_r4_2 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_2, temp1_1) ? 1 : 0) << 0xa
            | (x87_r4_2 == temp1_1 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            ebx_1 = arg4.b
            arg3 = fconvert.s(x87_r4_2)
        
        arg4 += 1
        edx_2 += 0x10
    while (arg4 u< 0x100)
    
    *ecx_4 = ebx_1
    ecx_4 = &ecx_4[1]
    arg2 += 1
    edi_1 += 0x10
while (arg2 u< *(arg1 + 0x68))
