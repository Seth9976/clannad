// 函数: sub_406490
// 地址: 0x406490
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_4_1 = ecx
float ebx = arg4
int32_t* esi = arg1
int32_t edi = 0
int32_t eax = *esi
float edx = esi[0xc]
arg4 = fconvert.s(fconvert.t(*(esi[1] + (ebx << 2) + 0xc)))

if (eax s<= 0)
    return 

float* ecx_2 = arg3
arg3 = arg5 - ecx_2
void* ebp_2 = arg2 - ecx_2
void* eax_4 = arg7 - ecx_2
void* eax_6 = arg6 - ecx_2

do
    long double x87_r7_2 =
        fconvert.t(*(*(esi[3] + (ebx << 2)) + (edi << 2))) + fconvert.t(*(ecx_2 + ebp_2))
    void* edx_2 = esi[1]
    long double temp0_1 = fconvert.t(*(edx_2 + 0x6c))
    x87_r7_2 - temp0_1
    int32_t eax_7
    eax_7.w = (x87_r7_2 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, temp0_1) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp0_1 ? 1 : 0) << 0xe | 0x3800
    
    if ((eax_7:1.b & 0x41) == 0)
        x87_r7_2 = fconvert.t(*(edx_2 + 0x6c))
    
    long double x87_r6_2 = fconvert.t(arg4) + fconvert.t(*ecx_2)
    x87_r7_2 - x87_r6_2
    eax_7.w = (x87_r7_2 < x87_r6_2 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_2, x87_r6_2) ? 1 : 0) << 0xa
        | (x87_r7_2 == x87_r6_2 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_7:1.b & 0x41) == 0)
        x87_r7_2 = x87_r6_2
        x87_r6_2 = x87_r7_2
    
    *(arg3 + ecx_2) = fconvert.s(x87_r6_2)
    
    if (ebx == 1)
        long double x87_r7_3 = x87_r7_2 - fconvert.t(*(eax_4 + ecx_2))
        long double temp1_1 = fconvert.t(-17.2000008f)
        x87_r7_3 - temp1_1
        long double x87_r7_5 = (x87_r7_3 - fconvert.t(-17.2000008f)) * fconvert.t(edx)
        bool c1_1 = unimplemented  {fmul st0, dword [esp+0x18]}
        float* eax_8
        eax_8.w = (x87_r7_3 < temp1_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
            | (is_unordered.t(x87_r7_3, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp1_1 ? 1 : 0) << 0xe | 0x3800
        
        if ((eax_8:1.b & 0x41) != 0)
            *(eax_6 + ecx_2) = fconvert.s((fconvert.t(1.0)
                - x87_r7_5 * fconvert.t(0.00029999999999999997)) * fconvert.t(*(eax_6 + ecx_2)))
        else
            long double x87_r7_7 = fconvert.t(1.0) - x87_r7_5 * fconvert.t(0.0050000000000000001)
            long double temp4_1 = fconvert.t(0f)
            x87_r7_7 - temp4_1
            eax_8.w = (x87_r7_7 < temp4_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_7, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == temp4_1 ? 1 : 0) << 0xe | 0x3800
            
            if ((ebx.b & eax_8:1.b) == 0)
                *(eax_6 + ecx_2) = fconvert.s(x87_r7_7 * fconvert.t(*(eax_6 + ecx_2)))
            else
                float* eax_9 = eax_6
                *(eax_9 + ecx_2) =
                    fconvert.s(fconvert.t(9.99999975e-05f) * fconvert.t(*(eax_9 + ecx_2)))
    
    edi += 1
    ecx_2 = &ecx_2[1]
while (edi s< eax)
