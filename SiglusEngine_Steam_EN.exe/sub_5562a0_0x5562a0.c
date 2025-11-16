// 函数: sub_5562a0
// 地址: 0x5562a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = arg4
int32_t* edx = arg5
int32_t ebx = 0
int32_t ecx = 0
int32_t esi = 0
int32_t edi = 0
int32_t var_410 = 0
int32_t var_40c = 0
int32_t var_414 = 0

if (eax_2 s>= 2)
    int32_t i_1 = ((eax_2 - 2) u>> 1) + 1
    var_414 = i_1 * 2
    int32_t i
    
    do
        int32_t eax_5 = *edx * 9
        ebx += *((eax_5 << 2) + &data_1b8c8a8)
        int32_t eax_6 = edx[1]
        edx = &edx[2]
        var_410 = edi + *((eax_5 << 2) + &data_1b8c8b0)
        int32_t eax_7 = eax_6 * 9
        esi += *((eax_7 << 2) + &data_1b8c8a8)
        var_40c += *((eax_7 << 2) + &data_1b8c8b0)
        edi = var_410
        i = i_1
        i_1 -= 1
    while (i != 1)
    eax_2 = arg4
    int32_t var_41c_1 = esi
    esi = 0
    ecx = var_41c_1
    edi = 0

if (var_414 s< eax_2)
    int32_t eax_9 = *edx * 9
    edi = *((eax_9 << 2) + &data_1b8c8b0)
    esi = *((eax_9 << 2) + &data_1b8c8a8)

int32_t esi_1 = esi + ecx + ebx
int32_t edi_4 = edi + var_410 + var_40c
void var_408

if (esi_1 s<= 0)
    char const* const edx_3 = " Total  0 / 0  ( 100 "
    void* eax_18 = &var_408
    
    do
        int32_t ecx_3
        ecx_3.b = *edx_3
        
        if (ecx_3.b u< 0x80)
        label_5563d6:
            *eax_18 = ecx_3.b
            eax_18 += 1
            edx_3 = &edx_3[1]
        else
            if (ecx_3.b u< 0xa0)
                if (ecx_3.b u>= 0xfe)
                    goto label_5563d6
            else if (ecx_3.b u<= 0xdf || ecx_3.b u>= 0xfe)
                goto label_5563d6
            
            *eax_18 = ecx_3.b
            ecx_3.b = edx_3[1]
            *(eax_18 + 1) = ecx_3.b
            eax_18 += 2
            edx_3 = &edx_3[2]
    while (*edx_3 != 0)
    
    *eax_18 = 0
else
    int32_t var_42c_1 = esi_1 - edi_4
    int32_t var_430_1 = divs.dp.d(sx.q(edi_4 * 0x64), esi_1)
    int32_t var_434_1 = esi_1
    int32_t var_438_1 = edi_4
    sub_4c84d0(&var_408, " Total  %d / %d  ( %d ")

int32_t result = data_1333e38

if (result != 0)
    result = result(arg3, 0x500d, &var_408)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
