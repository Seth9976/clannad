// 函数: sub_4acb00
// 地址: 0x4acb00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_24 = data_1bfe300:8
int32_t var_54 = arg3
int32_t ebx = data_7030b0
int32_t var_4c = arg4
int32_t esi = data_703098
int32_t var_48 = arg5
int32_t var_50 = arg2
int32_t edx = data_70309c
int32_t var_c = esi
int32_t var_44 = esi
int32_t var_40 = edx
int32_t var_14 = ebx
int32_t var_30 = ebx
int32_t edi = data_7030ac
int32_t var_10 = edi
int32_t var_34 = edi

if (arg6 - 1 u<= 6)
    switch (arg6 + &jump_table_4accec[1]:3)
        case &lookup_table_4accf4, &lookup_table_4accf4[2], &lookup_table_4accf4[4], 
                &lookup_table_4accf4[6]
            int32_t eax_7 = (arg3 - 1) * arg4
            int32_t esi_1 = esi + eax_7
            int32_t edi_1 = edi + eax_7
            var_c = esi_1
            int32_t var_44_1 = esi_1
            var_10 = edi_1
            int32_t var_34_1 = edi_1

if (arg6 - 2 u<= 5)
    switch (arg6 + &jump_table_4accfc[1]:2)
        case &lookup_table_4acd04, &lookup_table_4acd04[1], &lookup_table_4acd04[4], 
                &lookup_table_4acd04[5]
            int32_t eax_12 = (arg2 - 1) * arg5
            edx += eax_12
            int32_t ebx_1 = ebx + eax_12
            int32_t var_40_1 = edx
            var_14 = ebx_1
            int32_t var_30_1 = ebx_1

int32_t ebx_2
int32_t esi_2
int32_t edi_2

if (arg6 u> 7)
    esi_2 = arg4
    edi_2 = arg4
    ebx_2 = arg4
    arg6 = arg4
else
    switch (arg6)
        case 0
            esi_2 = 0
            arg6 = 3
            edi_2 = 1
            ebx_2 = 2
        case 1
            esi_2 = 1
            arg6 = 0
            edi_2 = 2
            ebx_2 = 3
        case 2
            esi_2 = 3
            arg6 = 2
            edi_2 = 0
            ebx_2 = 1
        case 3
            esi_2 = 2
            arg6 = 1
            ebx_2 = 0
            edi_2 = 3
        case 4
            esi_2 = 4
            arg6 = 7
            edi_2 = 5
            ebx_2 = 6
        case 5
            esi_2 = 7
            arg6 = 6
            edi_2 = 4
            ebx_2 = 5
        case 6
            esi_2 = 5
            arg6 = 4
            edi_2 = 6
            ebx_2 = 7
        case 7
            esi_2 = 6
            arg6 = 5
            edi_2 = 7
            ebx_2 = 4

int32_t var_20 = 0
int32_t var_3c = var_c + arg4 - 1
int32_t var_38 = arg5 - 1 + edx
int32_t var_2c = var_10 + arg4 - 1
int32_t var_28 = var_14 + arg5 - 1
int32_t i
int32_t* ecx_6

for (i = sub_4ac940(&var_54, esi_2); i == 0; i = sub_4ac940(ecx_6, esi_2))
    ecx_6 = &var_54
    i = sub_4ac940(ecx_6, edi_2)
    
    if (i != 0)
        break
    
    i = sub_4ac940(ecx_6, ebx_2)
    
    if (i != 0)
        break
    
    i = sub_4ac940(ecx_6, arg6)
    
    if (i != 0)
        break

return i
