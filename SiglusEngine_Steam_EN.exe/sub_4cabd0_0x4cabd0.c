// 函数: sub_4cabd0
// 地址: 0x4cabd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = arg8.b == 0
int32_t var_c = 0
int32_t var_14 = 0
BOOL var_8 = 0
BOOL var_10 = 0

if (not(cond:0))
    int32_t i_2 = arg2 * arg4
    
    if (i_2 s> 0)
        arg1 = &arg3[3]
        int32_t i
        
        do
            *arg1 = 0xff
            arg1 = &arg1[4]
            i = i_2
            i_2 -= 1
        while (i != 1)

int32_t arg_8
int32_t edi = arg_8

if (edi == arg2 && arg5 == arg4)
    int32_t edi_2 = (edi * arg5) << 2
    BOOL eax = sub_4d6960(arg1, &var_8, &var_c, edi_2, arg10)
    BOOL esi_1 = var_8
    sub_4d1c30(eax, arg3, esi_1, edi_2)
    *arg6 = var_c
    *arg7 = esi_1
    return arg7

int32_t eax_4
int32_t edx_2
edx_2:eax_4 = sx.q(arg2)
int32_t eax_6 = (eax_4 - edx_2) s>> 1
arg_8 = eax_6
int32_t eax_8
int32_t edx_3
edx_3:eax_8 = sx.q(arg4)
int32_t esi_3 = (eax_8 - edx_3) s>> 1
arg8 = esi_3
int32_t ebx_1
int32_t edi_3

if (edi != eax_6 || arg5 != esi_3)
    int32_t eax_16
    int32_t edx_8
    edx_8:eax_16 = sx.q(eax_6)
    int32_t eax_18 = (eax_16 - edx_8) s>> 1
    arg_8 = eax_18
    int32_t eax_20
    int32_t edx_9
    edx_9:eax_20 = sx.q(esi_3)
    int32_t esi_7 = (eax_20 - edx_9) s>> 1
    arg8 = esi_7
    
    if (edi != eax_18 || arg5 != esi_7)
        int32_t eax_27
        int32_t edx_14
        edx_14:eax_27 = sx.q(eax_18)
        int32_t eax_30
        int32_t edx_15
        edx_15:eax_30 = sx.q(esi_7)
        int32_t ecx_15 = (eax_27 - edx_14) s>> 1
        int32_t eax_32 = (eax_30 - edx_15) s>> 1
        arg_8 = ecx_15
        arg8 = eax_32
        
        if (edi != ecx_15 || arg5 != eax_32)
            int32_t i_3 = edi * arg5
            int32_t eax_39 = i_3 << 2
            int32_t ecx_23 = sub_4d6960(eax_39, &var_8, &var_c, eax_39, arg10)
            int32_t var_30_7 = 0
            int32_t var_34_6 = 0xff
            int32_t var_38_5 = 0
            int32_t var_3c_4 = 0
            int32_t var_40_3 = 0
            int32_t var_44_3 = 0
            BOOL edi_4 = var_8
            int32_t var_54
            sub_5856e0(edi - 1, edi, edi_4, arg5, 0, 0, edi - 1, arg5 - 1, arg3, arg2, arg4, 0, 0, 
                0, arg2 - 1, arg4 - 1, 0, 0, arg2, arg4, 0xff, 0xffffffff, 0xffffffff, 0xffffffff, 
                ecx_23, 0, var_54)
            
            if (arg9 != 0)
                BOOL eax_44 = edi_4
                
                if (i_3 s> 0)
                    int32_t i_1
                    
                    do
                        *eax_44 &= 0xfc
                        eax_44 += 4
                        *(eax_44 - 3) &= 0xfc
                        *(eax_44 - 2) &= 0xfc
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
            
            *arg6 = var_c
            *arg7 = edi_4
            return arg7
        
        sub_4c9cd0(&var_c, arg2, arg3, arg4, &var_c, &var_8, &arg_8, &arg8, arg10)
        sub_4c9cd0(&var_14, arg_8, var_8, arg8, &var_14, &var_10, &arg_8, &arg8, arg10)
        sub_4d6c40(&var_c, &var_8)
        int32_t edx_19 = arg_8
        char* ecx_19 = var_10
        var_c = var_14
        sub_4c9cd0(&var_14, edx_19, ecx_19, arg8, &var_14, &var_10, &arg_8, &arg8, arg10)
        sub_4d6c40(&var_c, &var_8)
        edi_3 = arg8
        ebx_1 = arg_8
        char* ecx_21 = var_10
        var_c = var_14
        sub_4caa50(&var_14, ebx_1, ecx_21, edi_3, &var_14, &var_10, arg10)
    else
        sub_4c9cd0(&var_c, arg2, arg3, arg4, &var_c, &var_8, &arg_8, &arg8, arg10)
        sub_4c9cd0(&var_14, arg_8, var_8, arg8, &var_14, &var_10, &arg_8, &arg8, arg10)
        sub_4d6c40(&var_c, &var_8)
        edi_3 = arg8
        ebx_1 = arg_8
        char* ecx_13 = var_10
        var_c = var_14
        sub_4caa50(&var_14, ebx_1, ecx_13, edi_3, &var_14, &var_10, arg10)
else
    sub_4c9cd0(&var_c, arg2, arg3, arg4, &var_c, &var_8, &arg_8, &arg8, arg10)
    edi_3 = arg8
    ebx_1 = arg_8
    sub_4caa50(&var_14, ebx_1, var_8, edi_3, &var_14, &var_10, arg10)

int32_t eax_13 = sub_4d6c40(&var_c, &var_8)
BOOL esi_5 = var_10

if (arg9 != 0)
    sub_4c9ca0(eax_13, ebx_1, esi_5, edi_3)

*arg6 = var_14
*arg7 = esi_5
return arg7
