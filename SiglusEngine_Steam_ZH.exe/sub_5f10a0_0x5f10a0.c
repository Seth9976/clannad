// 函数: sub_5f10a0
// 地址: 0x5f10a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1
void* result = arg2
void* var_c_1 = arg1

if (result s< arg3)
    int32_t ebx_1 = result * 0x15fc
    void* i_1 = arg3 - result
    void* i
    
    do
        void* esi_2 = *(arg1 + 0xa4) + ebx_1
        sub_5e4fc0(esi_2)
        sub_5e5260(esi_2, 1)
        sub_5f1730(esi_2 + 0x1390)
        *(esi_2 + 0x1b0) = 0
        *(esi_2 + 0x1b4) = 0
        sub_5e5060(esi_2, 0)
        result = sub_5e5540(esi_2, 0)
        arg1 = var_c_1
        ebx_1 += 0x15fc
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
