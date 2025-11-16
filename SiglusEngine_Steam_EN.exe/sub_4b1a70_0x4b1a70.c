// 函数: sub_4b1a70
// 地址: 0x4b1a70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1bffd28
int32_t ebx = data_1bffcf4
int32_t ecx = data_1bffcc0

if (data_1bfe2a0 == 0)
    int32_t ecx_1 = arg5
    int32_t eax_3
    int32_t edx
    edx:eax_3 = sx.q(arg4 - arg3)
    char var_8 = 0
    int32_t eax_6 = ((eax_3 - edx) s>> 1) + arg3
    int32_t eax_9
    int32_t edx_1
    edx_1:eax_9 = sx.q(ecx_1 - arg2)
    int32_t edx_2 = ((eax_9 - edx_1) s>> 1) + arg2
    int32_t eax_12 = data_702ff0
    void* eax_13 = data_702fec
    int32_t eax_14 = data_702fe8
    int32_t eax_15 = data_976e9c
    int32_t* eax_16 = data_976e98
    int32_t var_34 = data_976e94
    
    if (data_108feb4 != 0 && data_137475c != 0 && data_704894 != 0)
        int32_t eax_17
        
        if (data_20f33d9 != 0)
            eax_17.b = data_20f33d8
        else
            eax_17 = sub_45dee0(ecx_1)
            ecx_1 = arg5
            data_20f33d8 = eax_17.b
            data_20f33d9 = 1
        
        var_8 = eax_17.b
    
    int32_t var_60 = 0
    int32_t eax_19 = sub_58e290(eax_6, eax_16, var_34, eax_15, arg3, arg2, arg4, ecx_1, eax_6, 
        edx_2, ecx_1, eax_14, eax_13, eax_12, eax_6, edx_2, arg3, arg2, arg4, ecx_1, ecx, ebx, eax, 
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0xff, 0, var_8.d, nullptr, 
        nullptr, nullptr, 0)
    return eax_19

void* eax_20 = data_7030a0
void* edx_4 = data_703098
int32_t eax_22
int32_t edx_5
edx_5:eax_22 = sx.q(eax_20 - edx_4)
void* ebx_2 = data_702fec
int32_t edx_6 = data_70309c
int32_t eax_26 = data_7030a4
int32_t eax_28
int32_t edx_7
edx_7:eax_28 = sx.q(eax_26 - edx_6)
int32_t ebx_3 = data_702fe8
int32_t ebx_4 = data_976ebc
int32_t eax_34
int32_t edx_8
edx_8:eax_34 = sx.q(arg4 - arg3)
int32_t* ebx_5 = data_976eb8
int32_t ebx_6 = data_976eb4
int32_t eax_40
int32_t edx_9
edx_9:eax_40 = sx.q(arg5 - arg2)
char var_8_1 = 0
int32_t eax_42 = data_702ff0
int32_t var_30_1 = eax_42

if (data_108feb4 != 0 && data_137475c != 0 && data_704894 != 0)
    if (data_20f33d9 != 0)
        eax_42.b = data_20f33d8
    else
        eax_42 = sub_45dee0(ecx)
        data_20f33d8 = eax_42.b
        data_20f33d9 = 1
    
    var_8_1 = eax_42.b
    eax_42 = var_30_1

int32_t var_60_1 = 0
int32_t eax_43 = sub_58e290(eax_42, ebx_5, ebx_6, ebx_4, edx_4, edx_6, eax_20, eax_26, 
    ((eax_22 - edx_5) s>> 1) + edx_4, ((eax_28 - edx_7) s>> 1) + edx_6, ecx, ebx_3, ebx_2, eax_42, 
    ((eax_34 - edx_8) s>> 1) + arg3, ((eax_40 - edx_9) s>> 1) + arg2, arg3, arg2, arg4, arg5, ecx, 
    ebx, eax, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0xff, 0, var_8_1.d, 
    nullptr, nullptr, nullptr, 0)
return eax_43
