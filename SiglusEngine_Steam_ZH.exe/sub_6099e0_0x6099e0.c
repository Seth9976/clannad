// 函数: sub_6099e0
// 地址: 0x6099e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1
int32_t result = arg2
void* var_c_1 = arg1

if (result s< arg3)
    int32_t ebx_1 = result * 0x8ec
    int32_t i_1 = arg3 - result
    int32_t i
    
    do
        void* esi_2 = *(arg1 + 0xa4) + ebx_1
        sub_609ea0(esi_2 + 0x25c)
        sub_5b4ff0(esi_2 + 0xa0, arg4)
        sub_60a0f0(esi_2 + 0x394, arg4)
        sub_5ada90(esi_2 + 0x4cc)
        sub_609c60(esi_2 + 0x6c4)
        sub_5fcfe0(esi_2 + 0x77c)
        result = sub_5fcd10(esi_2 + 0x834)
        arg1 = var_c_1
        ebx_1 += 0x8ec
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
