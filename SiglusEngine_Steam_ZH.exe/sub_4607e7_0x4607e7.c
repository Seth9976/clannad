// 函数: sub_4607e7
// 地址: 0x4607e7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = *arg1
int32_t* result

if (arg2 - esi u>= 0x10)
    int32_t edi
    int32_t var_c_1 = edi
    *arg3 = *esi
    void* edi_2 = &arg3[1]
    void* esi_1 = &esi[1]
    *edi_2 = *esi_1
    void* edi_3 = edi_2 + 4
    void* esi_2 = esi_1 + 4
    *edi_3 = *esi_2
    *(edi_3 + 4) = *(esi_2 + 4)
    *arg1 += 0x10
    result.b = 1
else
    result.b = 0

return result
