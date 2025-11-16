// 函数: sub_4b3580
// 地址: 0x4b3580
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1bff848
int32_t edx = data_703000
int32_t ebx = data_702ff8
int32_t ecx_1 = data_702ffc
int32_t edi = data_702ff4
int32_t var_3c
int32_t var_38
int32_t var_34
int32_t var_30
int32_t var_28
int32_t var_18
int32_t var_14
int32_t var_10
int32_t var_c
int32_t var_8
int32_t esi

if (data_703050 - 0xe6 u> 4)
    esi = data_703098
    var_14 = data_70309c
    var_3c = data_7030a0
    var_18 = 0x1b
    var_28 = esi
    var_34 = data_7030a4
    var_10 = 0x1a
    var_c = edi
    var_8 = ebx
    var_38 = ecx_1
    var_30 = edx
else
    esi = edi
    var_c = data_703098
    var_8 = data_70309c
    var_38 = data_7030a0
    var_18 = 0x1a
    var_28 = edi
    var_14 = ebx
    var_3c = ecx_1
    var_34 = edx
    var_10 = 0x1b
    var_30 = data_7030a4

uint32_t result = data_703050 - 0xc8

if (result u<= 0x2c)
    result = zx.d(lookup_table_4b3934[result])
    int32_t var_7c_8
    int32_t ecx
    int32_t esi_3
    int32_t esi_11
    int32_t edi_1
    
    switch (result)
        case 0
            int32_t var_4c_1 = eax
            int32_t var_50_1 = data_703054
            int32_t var_54_1 = 0
        label_4b3666:
            int32_t var_58_1 = ecx
            int32_t var_5c_1 = edx
            int32_t var_60_1 = ecx_1
            int32_t var_64_1 = ebx
            int32_t var_68_1 = edi
            int32_t var_74_1 = var_8
            int32_t var_78_1 = var_c
            var_7c_8 = var_10
            return sub_4b2e40(result, esi, var_18, var_14)
        case 1
            int32_t var_4c_2 = eax
            int32_t var_50_2 = data_703054
            int32_t var_54_2 = 1
            goto label_4b3666
        case 2
            int32_t var_4c_3 = eax
            
            if (data_703054 u<= 1)
                int32_t var_50_3 = 0
                int32_t var_54_3 = 0
                int32_t var_58_2 = ecx
                int32_t eax_14
                int32_t edx_2
                edx_2:eax_14 = sx.q(edx - ebx + 1)
                int32_t eax_15 = eax_14 - edx_2
                esi_3 = (eax_15 s>> 1) + ebx
                int32_t var_5c_2 = esi_3
                int32_t var_60_2 = ecx_1
                int32_t var_64_2 = ebx
                int32_t var_68_2 = edi
                int32_t var_74_2 = var_8
                int32_t var_78_2 = var_c
                int32_t var_7c_1 = var_10
                sub_4b2e40(eax_15, var_28, var_18, var_14)
                int32_t var_4c_4 = eax
                int32_t var_50_4 = 1
            label_4b36d8:
                int32_t var_54_4 = 0
                goto label_4b36da
            
            int32_t var_50_5 = 2
            int32_t var_54_5 = 0
            int32_t var_58_4 = ecx
            int32_t var_5c_4 = edx
            int32_t eax_35
            int32_t edx_7
            edx_7:eax_35 = sx.q(ecx_1 - edi + 1)
            int32_t eax_36 = eax_35 - edx_7
            int32_t esi_6 = (eax_36 s>> 1) + edi
            int32_t var_60_4 = esi_6
            int32_t var_64_4 = ebx
            int32_t var_68_4 = edi
            edi_1 = var_28
            int32_t var_74_4 = var_8
            int32_t var_78_4 = var_c
            int32_t var_7c_3 = var_10
            sub_4b2e40(eax_36, edi_1, var_18, var_14)
            int32_t var_4c_5 = eax
            int32_t var_50_6 = 3
            int32_t var_54_6 = 0
            int32_t var_58_5 = ecx
            int32_t var_5c_5 = edx
            int32_t var_60_5 = ecx_1
            int32_t var_64_5 = ebx
            int32_t var_68_5 = esi_6 + 1
            int32_t eax_41
            int32_t edx_9
            edx_9:eax_41 = sx.q(var_38 - var_c + 1)
            int32_t var_74_5 = var_8
            int32_t var_78_5 = var_c + 1 + ((eax_41 - edx_9) s>> 1)
        label_4b38f5:
            int32_t eax_75
            int32_t edx_19
            edx_19:eax_75 = sx.q(var_3c - edi_1 + 1)
            result = (eax_75 - edx_19) s>> 1
            var_7c_8 = var_10
            return sub_4b2e40(result, edi_1 + 1 + result, var_18, var_14)
        case 3
            int32_t var_4c_6 = eax
            
            if (data_703054 u<= 1)
                int32_t var_50_7 = 1
                int32_t var_54_7 = 0
                int32_t var_58_6 = ecx
                int32_t eax_47
                int32_t edx_10
                edx_10:eax_47 = sx.q(edx - ebx + 1)
                int32_t eax_48 = eax_47 - edx_10
                esi_3 = (eax_48 s>> 1) + ebx
                int32_t var_5c_6 = esi_3
                int32_t var_60_6 = ecx_1
                int32_t var_64_6 = ebx
                int32_t var_68_6 = edi
                int32_t var_74_6 = var_8
                int32_t var_78_6 = var_c
                int32_t var_7c_4 = var_10
                sub_4b2e40(eax_48, var_28, var_18, var_14)
                int32_t var_4c_7 = eax
                int32_t var_50_8 = 0
                goto label_4b36d8
            
            int32_t var_50_9 = 3
            int32_t var_54_8 = 0
            int32_t var_58_7 = ecx
            int32_t var_5c_7 = edx
            int32_t eax_52
            int32_t edx_12
            edx_12:eax_52 = sx.q(ecx_1 - edi + 1)
            int32_t eax_53 = eax_52 - edx_12
            esi_11 = (eax_53 s>> 1) + edi
            int32_t var_60_7 = esi_11
            int32_t var_64_7 = ebx
            int32_t var_68_7 = edi
            edi_1 = var_28
            int32_t var_74_7 = var_8
            int32_t var_78_7 = var_c
            int32_t var_7c_5 = var_10
            sub_4b2e40(eax_53, edi_1, var_18, var_14)
            int32_t var_4c_8 = eax
            int32_t var_50_10 = 2
            int32_t var_54_9 = 0
        label_4b38c9:
            int32_t var_58_10 = ecx
            int32_t var_5c_10 = edx
            int32_t var_60_10 = ecx_1
            int32_t var_64_10 = ebx
            int32_t var_68_10 = esi_11 + 1
            int32_t eax_68
            int32_t edx_18
            edx_18:eax_68 = sx.q(var_38 - var_c + 1)
            int32_t var_74_10 = var_8
            int32_t var_78_10 = ((eax_68 - edx_18) s>> 1) + var_c + 1
            goto label_4b38f5
        case 4
            int32_t var_4c_9 = eax
            
            if (data_703054 u> 1)
                int32_t var_50_13 = 2
                int32_t var_54_12 = 1
                int32_t var_58_9 = ecx
                int32_t var_5c_9 = edx
                int32_t eax_62
                int32_t edx_16
                edx_16:eax_62 = sx.q(ecx_1 - edi + 1)
                int32_t eax_63 = eax_62 - edx_16
                esi_11 = (eax_63 s>> 1) + edi
                int32_t var_60_9 = esi_11
                int32_t var_64_9 = ebx
                int32_t var_68_9 = edi
                edi_1 = var_28
                int32_t var_74_9 = var_8
                int32_t var_78_9 = var_c
                int32_t var_7c_7 = var_10
                sub_4b2e40(eax_63, edi_1, var_18, var_14)
                int32_t var_4c_11 = eax
                int32_t var_50_14 = 3
                int32_t var_54_13 = 1
                goto label_4b38c9
            
            int32_t var_50_11 = 0
            int32_t var_54_10 = 1
            int32_t var_58_8 = ecx
            int32_t eax_57
            int32_t edx_14
            edx_14:eax_57 = sx.q(edx - ebx + 1)
            int32_t eax_58 = eax_57 - edx_14
            esi_3 = (eax_58 s>> 1) + ebx
            int32_t var_5c_8 = esi_3
            int32_t var_60_8 = ecx_1
            int32_t var_64_8 = ebx
            int32_t var_68_8 = edi
            int32_t var_74_8 = var_8
            int32_t var_78_8 = var_c
            int32_t var_7c_6 = var_10
            sub_4b2e40(eax_58, var_28, var_18, var_14)
            int32_t var_4c_10 = eax
            int32_t var_50_12 = 1
            int32_t var_54_11 = 1
        label_4b36da:
            int32_t var_58_3 = ecx
            int32_t var_5c_3 = edx
            int32_t var_60_3 = ecx_1
            int32_t var_64_3 = esi_3 + 1
            int32_t eax_20
            int32_t edx_4
            edx_4:eax_20 = sx.q(var_30 - var_8 + 1)
            int32_t var_68_3 = edi
            int32_t var_74_3 = ((eax_20 - edx_4) s>> 1) + var_8 + 1
            int32_t var_78_3 = var_c
            int32_t var_7c_2 = var_10
            int32_t eax_27
            int32_t edx_5
            edx_5:eax_27 = sx.q(var_34 - var_14 + 1)
            int32_t eax_30 = ((eax_27 - edx_5) s>> 1) + var_14 + 1
            return sub_4b2e40(eax_30, var_28, var_18, eax_30)

return result
