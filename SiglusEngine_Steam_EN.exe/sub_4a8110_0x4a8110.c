// 函数: sub_4a8110
// 地址: 0x4a8110
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = data_12dc5d4 - 1
int32_t* ecx_7

if (eax_1 u> 4)
label_4a81fb:
    ecx_7 = arg1
label_4a8203:
    *arg2 = arg1
    *arg1 = ecx_7
    return 0

switch (eax_1)
    case 0
        int32_t ecx_1 = data_70300c s>> 3
        *arg2 = data_7030dc s>> 3
        *arg1 = ecx_1
        return 1
    case 1
        int32_t ecx_3 = data_70300c s>> 2
        *arg2 = data_7030dc s>> 2
        *arg1 = ecx_3
        return 1
    case 2
        int32_t ecx_5 = data_70300c s>> 1
        *arg2 = data_7030dc s>> 1
        *arg1 = ecx_5
        return 1
    case 3
        int32_t ecx_6 = data_70300c
        *arg2 = data_7030dc
        *arg1 = ecx_6
        return 1
    case 4
        ecx_7 = data_12dc5d8
        
        if (ecx_7 s<= 0)
            goto label_4a81fb
        
        int32_t edx_7 = data_12dc5dc
        
        if (ecx_7 s> data_70300c)
            ecx_7 = data_70300c
        
        if (edx_7 s<= 0)
            goto label_4a8203
        
        bool cond:1 = edx_7 s> data_7030dc
        *arg1 = ecx_7
        
        if (cond:1)
            edx_7 = data_7030dc
        
        *arg2 = edx_7
        return 1
