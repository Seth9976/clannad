// 函数: sub_5d92d0
// 地址: 0x5d92d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* result = *(arg1 + 0x170)

if (result == 0)
    int32_t var_10_1 = *(arg1 + 0x180)
    int32_t var_c_1 = *(arg1 + 0x184)
    int32_t var_14_1 = 0
    *(arg1 + 0x188) = 0.o
    
    if (sub_5e3a60(arg1 + 0xf28, arg1 + 0x188).b == 0)
    label_5d93f7:
        result.b = 0
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return result
    
    result = *(arg1 + 0x174)
    
    if (result != 0)
        if (result == 1)
            int32_t eax_5
            int32_t edx_2
            edx_2:eax_5 = sx.q(*(arg1 + 0x190) - *(arg1 + 0x188))
            sub_5daab0(arg1 + 0x188, (eax_5 - edx_2) s>> 1, 0)
        else if (result == 2)
            sub_5daab0(arg1 + 0x188, *(arg1 + 0x190) - *(arg1 + 0x188), 0)
else if (result == 1)
    uint128_t xmm1_1 = *(arg1 + 0xcac)
    int32_t ecx_4 = *(arg1 + 0x158)
    int32_t xmm0_3 = _mm_bsrli_si128(xmm1_1, 4)
    *(arg1 + 0x188) = xmm1_1 - *(arg1 + 0x150)
    int32_t xmm0_5 = _mm_bsrli_si128(xmm1_1, 8)
    int32_t xmm1_2 = _mm_bsrli_si128(xmm1_1, 0xc)
    *(arg1 + 0x18c) = xmm0_3 - *(arg1 + 0x154)
    *(arg1 + 0x190) = ecx_4 + xmm0_5
    *(arg1 + 0x194) = *(arg1 + 0x15c) + xmm1_2
    
    if (sub_5e3a60(arg1 + 0xf28, arg1 + 0x188).b == 0)
        goto label_5d93f7

result.b = 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
