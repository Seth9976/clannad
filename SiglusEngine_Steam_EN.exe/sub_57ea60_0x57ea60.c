// 函数: sub_57ea60
// 地址: 0x57ea60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* edi = arg2

if (arg3 u> 0x3f)
    return 

void* eax_2 = arg3 * 0x3920
void* ecx_2 = arg7 - arg6 + 1
int32_t eax_6 = arg4 * arg5
void* var_c_1
void* esi_4

if (eax_6 + 4 s> ecx_2)
    var_c_1 = arg5
    int32_t eax_31
    int32_t edx_10
    edx_10:eax_31 = sx.q(eax_6 - ecx_2)
    esi_4 = arg6 - ((eax_31 - edx_10) s>> 1)
else
    void* eax_8 = ecx_2 - (eax_6 + 4)
    
    if (arg4 s> 1)
        int32_t eax_12
        int32_t edx_2
        edx_2:eax_12 = sx.q(eax_8)
        int32_t temp0_1 = divs.dp.d(edx_2:eax_12, arg4 - 1)
        int32_t eax_15
        int32_t edx_4
        edx_4:eax_15 = sx.q(arg5)
        
        if (temp0_1 s>= (eax_15 - edx_4) s>> 1)
            int32_t eax_24
            int32_t edx_7
            edx_7:eax_24 = sx.q(eax_8)
            int32_t temp0_2 = divs.dp.d(edx_7:eax_24, arg4)
            int32_t eax_27
            int32_t edx_9
            edx_9:eax_27 = sx.q(temp0_2 + mods.dp.d(edx_7:eax_24, arg4))
            var_c_1 = arg5 + temp0_2
            esi_4 = arg6 + 2 + ((eax_27 - edx_9) s>> 1)
        else
            var_c_1 = temp0_1 + arg5
            int32_t eax_20
            int32_t edx_6
            edx_6:eax_20 = sx.q(mods.dp.d(edx_2:eax_12, arg4 - 1))
            esi_4 = arg6 + 2 + ((eax_20 - edx_6) s>> 1)
    else
        var_c_1 = arg5
        int32_t eax_9
        int32_t edx_1
        edx_1:eax_9 = sx.q(eax_8)
        esi_4 = arg6 + 2 + ((eax_9 - edx_1) s>> 1)

int32_t edx_11 = esi_4 + ecx_2
arg8 -= arg5
int32_t ecx_8 = *(eax_2 + 0xf89b0c)

if (edx_11 s> ecx_8)
    ecx_8 -= edx_11
    esi_4 += ecx_8

int32_t var_34_1 = 1

if (esi_4 s< 0)
    esi_4 = nullptr

arg6 = esi_4
int32_t var_40_1
int32_t var_3c_1
int32_t var_38_1

if (data_131923c == 0)
    var_38_1 = 0xffffffff
    var_3c_1 = 0xffffffff
    var_40_1 = 0xffffffff
else
    var_38_1 = 0
    var_3c_1 = 0
    var_40_1 = 0

sub_4c6e40(arg5, arg5, ecx_8, var_40_1, var_3c_1, var_38_1)
int32_t ecx_9 = data_1313c88
int32_t esi_7 = *(arg3 * 0x2d0 + 0x8fcb04)
int16_t var_20_3 = esi_7.w

if (esi_7 == 0xffffffff || ecx_9 == 0)
    esi_7 = *(arg3 * 0x2d0 + 0x8fcae8)
    var_20_3 = esi_7.w

int16_t var_18_2
int32_t edx_14

if (*(arg3 * 0x1d4 + 0x1090c08) == 0)
    edx_14 = 0xffffffff
    var_18_2 = edx_14.w
else
    edx_14 = *(arg3 * 0x2d0 + &data_8fcb08)
    var_18_2 = edx_14.w
    
    if (edx_14 == 0xffffffff || ecx_9 == 0)
        edx_14 = *(arg3 * 0x2d0 + &data_8fcaec)
        var_18_2 = edx_14.w

char* var_14_2

if (esi_7 u> 0xff)
    var_14_2 = &data_12a2990
else
    var_14_2 = &(&data_12a2990)[esi_7 * 2]

char* var_10_2

if (edx_14 u> 0xff)
    var_10_2 = nullptr
else
    var_10_2 = &(&data_12a2990)[edx_14 * 2]

if (arg4 s<= 0)
    return 

int32_t* ecx_10 = eax_2 + 0xf89b1c
int32_t* var_1c_2 = ecx_10
int32_t i

do
    arg1.b = *edi
    uint32_t esi_10
    
    if (arg1.b u< 0x80)
        esi_10 = zx.d(arg1.b)
        edi = &edi[1]
    else if (arg1.b u< 0xa0)
        if (arg1.b u< 0xfe)
            goto label_57ec22
        
        esi_10 = zx.d(arg1.b)
        edi = &edi[1]
    else if (arg1.b u<= 0xdf || arg1.b u>= 0xfe)
        esi_10 = zx.d(arg1.b)
        edi = &edi[1]
    else
    label_57ec22:
        uint32_t esi_8 = zx.d(arg1.b)
        arg1 = zx.d(edi[1])
        esi_10 = esi_8 << 8 | arg1
        edi = &edi[2]
    
    int32_t* eax_36 = sub_45e020(arg1, arg5, ecx_10, arg6, arg8, 0xffffffff, 0)
    void* edx_17
    
    if (eax_36[8].b == 0)
        edx_17 = nullptr
    else
        edx_17 = eax_36[7] + &eax_36[0x19]
    
    sub_4c7f10(eax_36, edx_17, &eax_36[0x19], eax_36[1], eax_36[2], esi_10, 0, 0, var_14_2, 
        var_10_2, var_14_2, var_10_2, 1)
    int32_t eax_38 = *eax_36
    var_1c_2[1] += eax_38
    var_1c_2[4] += 1
    sub_460e20(eax_38, arg6.w, eax_2 + &data_f8d35c, arg8.w, 0, arg5.b, esi_10.w, 0, var_20_3, 
        var_18_2, 0xffffffff, 0)
    i = arg4
    arg4 -= 1
    ecx_10 = var_1c_2
    arg6 += var_c_1
while (i != 1)
