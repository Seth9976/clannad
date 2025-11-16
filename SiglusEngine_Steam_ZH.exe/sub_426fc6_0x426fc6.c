// 函数: sub_426fc6
// 地址: 0x426fc6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* esi = arg4
int32_t edi
int32_t var_c = edi
void* edi_1 = arg1
char* edx_3 = *(edi_1 + 0x60) * arg2 + *(edi_1 + 0x64) * arg3 + *(edi_1 + 0x20)
int32_t eax_3 = &edx_3[*(edi_1 + 0x68) << 1]
arg2 = eax_3

if (edx_3 u< eax_3)
    long double x87_r7_1 = fconvert.t(0.00787401572f)
    int32_t ebx
    int32_t var_10_1 = ebx
    
    do
        eax_3.b = *edx_3
        arg1.b = edx_3[1]
        ebx.b = eax_3.b == 0x80
        ebx.b += eax_3.b
        int32_t eax_4
        eax_4.b = arg1.b == 0x80
        eax_4.b += arg1.b
        long double x87_r6_2 = float.t(sx.d(ebx.b)) * x87_r7_1
        *esi = fconvert.s(x87_r6_2)
        long double x87_r5_2 = float.t(sx.d(eax_4.b)) * x87_r7_1
        esi[1] = fconvert.s(x87_r5_2)
        x87_r7_1 = fconvert.t(1f) - x87_r6_2 * x87_r6_2 - x87_r5_2 * x87_r5_2
        long double temp1_1 = fconvert.t(0f)
        x87_r5_2 - temp1_1
        eax_3.w = (x87_r5_2 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_2, temp1_1) ? 1 : 0) << 0xa
            | (x87_r5_2 == temp1_1 ? 1 : 0) << 0xe | 0x3000
        bool p_1 = unimplemented  {test ah, 0x41}
        long double x87_r6_4
        
        if (p_1)
            x87_r6_4 = sqrt(x87_r5_2)
        else
            x87_r7_1 = x87_r5_2
            x87_r6_4 = float.t(0)
        
        esi[2] = fconvert.s(x87_r6_4)
        edx_3 = &edx_3[2]
        esi[3] = fconvert.s(float.t(1))
        esi = &esi[4]
    while (edx_3 u< arg2)

if (*(edi_1 + 0x18) != 0)
    sub_41eede(edi_1, esi - (*(edi_1 + 0x68) << 4))

int16_t x87control

if (*(edi_1 + 0x10) != 0)
    sub_41f14b(edi_1, x87control, esi - (*(edi_1 + 0x68) << 4))
