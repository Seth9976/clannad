// 函数: sub_5e44e0
// 地址: 0x5e44e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t esi_1 = *(arg1 + 0x4c0) - *(arg1 + 0x4bc)
void* result
int32_t edx
edx:result = muls.dp.d(0xba506bb7, esi_1)
void* var_8_1 = arg1
int32_t i_1 = esi_1 s/ 0x15fc

if (i_1 s> 0)
    int32_t edi_1 = 0
    int32_t i
    
    do
        void* esi_3 = *(arg1 + 0x4bc) + edi_1
        sub_5e4fc0(esi_3)
        sub_5e5260(esi_3, 1)
        sub_5f1730(esi_3 + 0x1390)
        *(esi_3 + 0x1b0) = 0
        *(esi_3 + 0x1b4) = 0
        sub_5e5060(esi_3, 0)
        result = sub_5e5540(esi_3, 0)
        arg1 = var_8_1
        edi_1 += 0x15fc
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
