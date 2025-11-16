// 函数: sub_6da070
// 地址: 0x6da070
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
char ecx = (*(arg3 + 0x74)).b

if ((ecx & 1) == 0)
    sub_6d47a0(arg3, "missing IHDR")
    noreturn

if ((ecx & 4) != 0)
    int32_t eax_2 = sub_6d8610(arg3, arg4)
    
    if ((*(arg3 + 0x78) & 0x100000) == 0)
        sub_6d47a0(arg3, "out of place")
        noreturn
    
    char var_e8[0xd8]
    sub_6d4690(eax_2, &var_e8, arg3, "out of place")
    int32_t* eax_3 = sub_6d4470(arg3, &var_e8)
    sub_745f2b(var_8 ^ &__saved_ebp)
    return eax_3

if (arg2 != 0 && (*(arg2 + 8) & 0x10) != 0)
    sub_6d8610(arg3, arg4)
    int32_t* eax_4 = sub_6d4840(arg3, "duplicate")
    sub_745f2b(var_8 ^ &__saved_ebp)
    return eax_4

int32_t eax_1
eax_1.b = *(arg3 + 0x14f)
void var_1e8
int32_t ecx_10
int32_t edx_4

if (eax_1.b == 0)
    edx_4 = arg4
    ecx_10 = arg3
    
    if (edx_4 != 2)
        goto label_6da290
    
    int16_t var_1ec
    sub_6d85d0(eax_1, &var_1ec, ecx_10, edx_4)
    *(arg3 + 0x148) = 1
    int16_t eax_5 = var_1ec
    *(arg3 + 0x1b8) = zx.w(eax_5.b) * 0x100 + zx.w(eax_5:1.b)
else if (eax_1.b != 2)
    char const* const edx_8
    
    if (eax_1.b != 3)
        sub_6d8610(arg3, arg4)
        edx_8 = "invalid with alpha channel"
    label_6da2ad:
        int32_t* eax_16 = sub_6d4840(arg3, edx_8)
        sub_745f2b(var_8 ^ &__saved_ebp)
        return eax_16
    
    if ((ecx & 2) == 0)
        sub_6d8610(arg3, arg4)
        edx_8 = "out of place"
        goto label_6da2ad
    
    int32_t eax_10 = zx.d(*(arg3 + 0x140))
    
    if (arg4 u> eax_10 || arg4 u> 0x100 || arg4 == 0)
        edx_4 = arg4
        ecx_10 = arg3
    label_6da290:
        sub_6d8610(ecx_10, edx_4)
        edx_8 = "invalid"
        goto label_6da2ad
    
    sub_6d85d0(eax_10, &var_1e8, arg3, arg4)
    *(arg3 + 0x148) = arg4.w
else
    edx_4 = arg4
    ecx_10 = arg3
    
    if (edx_4 != 6)
        goto label_6da290
    
    char var_10
    sub_6d85d0(eax_1, &var_10, ecx_10, edx_4)
    uint16_t ecx_12 = zx.w(var_10) * 0x100
    *(arg3 + 0x148) = 1
    char var_f
    *(arg3 + 0x1b2) = ecx_12 + zx.w(var_f)
    char var_e
    char var_d
    *(arg3 + 0x1b4) = zx.w(var_e) * 0x100 + zx.w(var_d)
    char var_c
    char var_b
    *(arg3 + 0x1b6) = zx.w(var_c) * 0x100 + zx.w(var_b)

if (sub_6d8610(arg3, 0) == 0)
    int32_t eax_15 = sub_6ceb30(&var_1e8, arg2, arg3, &var_1e8, zx.d(*(arg3 + 0x148)), arg3 + 0x1b0)
    sub_745f2b(var_8 ^ &__saved_ebp)
    return eax_15

*(arg3 + 0x148) = 0
sub_745f2b(var_8 ^ &__saved_ebp)
return 0
