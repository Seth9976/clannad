// 函数: sub_4b4fae
// 地址: 0x4b4fae
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0
int32_t var_18 = 0
int32_t edi
int32_t var_100 = edi
int32_t* edx = *(arg1 + 0x100)
int32_t result = 1
int32_t var_14 = 1
int32_t var_10 = 2
int32_t var_c = 3

if ((*edx & 0xfffff) == 3)
    int32_t var_f8
    void var_58
    result = sub_4c73cc(arg1, edx, 0xac9e70, &var_58, &var_8, &var_f8, &var_18, 3, 1)
    
    if (result == 0)
        int32_t* edi_1 = *(*(arg1 + 0x100) + 8)
        *edi_1 = var_f8
        void* edi_2 = &edi_1[1]
        void var_f4
        void* esi_1 = &var_f4
        *edi_2 = *esi_1
        *(edi_2 + 4) = *(esi_1 + 4)
        return 0

return result
