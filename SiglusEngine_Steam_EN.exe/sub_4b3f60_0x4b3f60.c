// 函数: sub_4b3f60
// 地址: 0x4b3f60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_1bff87c

if (ecx s> 0xff)
    ecx = 0xff
else if (ecx s< 0)
    ecx = 0

int32_t edx = data_702ff4
int32_t esi = data_702ff8
int32_t edi_1 = data_703050 - 0xaa
int32_t var_18
int32_t var_14
int32_t var_10
int32_t var_c
int32_t var_8
int32_t eax_4
int32_t ebx

switch (edi_1)
    case 0, 1
        eax_4 = data_703098
        
        if (data_1bfe2a0 == 1)
            goto label_4b4006
        
        var_c = eax_4
        ebx = 0x1a
        var_18 = edx
        var_14 = esi
        var_10 = 0x1b
        var_8 = data_70309c
    case 0x19, 0x1b
        ebx = 0x1a
        var_c = data_703098
        var_18 = edx
        var_14 = esi
        var_10 = 0x1b
        var_8 = data_70309c
    default
        eax_4 = data_703098
    label_4b4006:
        var_18 = eax_4
        ebx = 0x1b
        var_8 = esi
        var_c = edx
        var_10 = 0x1a
        var_14 = data_70309c

int32_t eax_8 = data_703050 - 0xaa
uint32_t result = sbb.d(eax_8, eax_8, 1 u< eax_8) + 1
uint32_t result_1 = result

if (edi_1 u<= 0x1b)
    result = zx.d(lookup_table_4b40ec[edi_1])
    
    switch (result)
        case 0
            int32_t var_2c_1 = ecx
            int32_t var_30_1 = data_1bff918
            int32_t var_34_1 = data_1bff8e4
            uint32_t result_2 = result_1
            int32_t var_3c_1 = data_703054
            int32_t var_40_1 = 0
        label_4b4089:
            int32_t var_44_1 = data_703000
            int32_t eax_15 = data_702ffc
            int32_t var_48_1 = eax_15
            int32_t var_4c_1 = esi
            int32_t var_50_1 = edx
            int32_t var_5c_1 = var_8
            int32_t var_60_1 = var_c
            int32_t var_64_1 = var_10
            return sub_4b3970(eax_15, var_18, ebx, var_14)
        case 1
            int32_t var_2c_2 = ecx
            int32_t var_30_2 = data_1bff918
            int32_t var_34_2 = data_1bff8e4
            uint32_t result_3 = result_1
            int32_t var_3c_2 = data_703054
            int32_t var_40_2 = 1
            goto label_4b4089

return result
