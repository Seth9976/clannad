// 函数: sub_42f3df
// 地址: 0x42f3df
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 + 4)

if (result != 0)
    result = j__free(result)
    *(arg1 + 4) = 0

if (*(arg1 + 8) != 0)
    int32_t edi
    int32_t var_8_2 = edi
    
    do
        void* edi_1 = *(arg1 + 8)
        *(arg1 + 8) = *(edi_1 + 8)
        *(edi_1 + 8) = 0
        sub_42f3df()
        result = j__free(edi_1)
    while (*(arg1 + 8) != 0)

return result
