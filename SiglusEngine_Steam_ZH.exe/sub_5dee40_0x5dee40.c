// 函数: sub_5dee40
// 地址: 0x5dee40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t esi_1 = *(arg1 + 0x1b0) - *(arg1 + 0x1ac)
int32_t ebx_1 = *(arg1 + 0x20) + *(arg1 + 0x18)
int32_t result
int32_t edx
edx:result = muls.dp.d(0x8a42f871, esi_1)
int32_t i_1 = esi_1 s/ 0x3b4

if (i_1 s> 0)
    int32_t ecx = 0
    int32_t var_8_1 = 0
    int32_t i
    
    do
        void* edx_4 = *(arg1 + 0x1ac) + ecx
        ecx = var_8_1 + 0x3b4
        var_8_1 = ecx
        result = *(edx_4 + 0x18)
        *(edx_4 + 0x1c) -= ebx_1
        *(edx_4 + 0x18) = result
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0xe4) -= ebx_1
return result
