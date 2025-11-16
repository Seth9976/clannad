// 函数: sub_4ab8e0
// 地址: 0x4ab8e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_703050
int32_t ecx_1

if (eax == 0x23)
    ecx_1.b = data_703054 != 0
label_4ab924:
    data_7030bc
    int32_t var_14_1 = data_703060
    data_1bfe2b4 = data_7030ac
    int32_t var_18_1 = data_70305c
    int32_t var_1c_1 = data_703058
    data_1bfe2b8 = data_7030b0
    sub_455e60(data_7030c0, ecx_1, var_1c_1, var_18_1, var_14_1, 3)
else
    if (eax == 0x25)
        ecx_1.b = data_703054 == 0
        goto label_4ab924
    
    if (eax != 0x27)
        int32_t var_8
        ecx_1 = var_8
        
        if (ecx_1 != 0x1869f)
            goto label_4ab924
bool cond:0 = data_703054 != 0
data_1bffc14 = 0
data_1bffc7c = 0
data_1bffc48 = 0
data_1bffcb0 = 0

if (cond:0)
    int32_t ecx_4 = data_7030bc
    data_1bffc80 = ecx_4
    data_1bffc18 = neg.d(ecx_4)
    int32_t eax_10 = data_7030c4
    data_1bffc1c = eax_10
    data_1bffc84 = eax_10
    data_1bffc4c = 0
    data_1bffc50 = eax_10
    data_1bffcb4 = 0
    data_1bffcb8 = eax_10
    return eax_10

int32_t ecx_3 = data_7030c0
int32_t edx_2 = data_7030c4
int32_t eax_7 = neg.d(ecx_3)
data_1bffc18 = 0
data_1bffc1c = edx_2
data_1bffc80 = 0
data_1bffc84 = edx_2
data_1bffc4c = eax_7
data_1bffc50 = edx_2
data_1bffcb4 = ecx_3
data_1bffcb8 = edx_2
return eax_7
