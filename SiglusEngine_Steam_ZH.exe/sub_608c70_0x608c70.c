// 函数: sub_608c70
// 地址: 0x608c70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_1 = *(arg1 + 0x304) - *(arg1 + 0x300)
int32_t result
int32_t edx
edx:result = muls.dp.d(0x8c08c08d, esi_1)
int32_t i_1 = esi_1 s/ 0x1d4

if (i_1 s> 0)
    result = 0
    int32_t i
    
    do
        void* edx_4 = *(arg1 + 0x300) + result
        result += 0x1d4
        *(edx_4 + 0x1cc) = *(edx_4 + 0x1c4)
        *(edx_4 + 0x1d0) = *(edx_4 + 0x1c8)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
