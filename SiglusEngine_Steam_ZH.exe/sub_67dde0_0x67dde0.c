// 函数: sub_67dde0
// 地址: 0x67dde0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
sub_67df70(arg1, *(data_bac510 + 0x1d370))
int32_t var_8_1 = 0
int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
int32_t edx_1 = edx s>> 1
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (result s> 0)
    void* eax_4 = data_bac510
    void* esi_1 = eax_4 + 0x1c774
    
    do
        int32_t eax_5 = *(esi_1 - 4)
        void* ecx_3 = 0xfffe388c - eax_4 + esi_1 + *arg1
        esi_1 += 0xc
        var_8_1 += 1
        *ecx_3 = eax_5
        *(ecx_3 + 4) = *(esi_1 - 0xc)
        *(ecx_3 + 8) = *(esi_1 - 8)
        int32_t eax_8
        int32_t edx_2
        edx_2:eax_8 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
        int32_t edx_3 = edx_2 s>> 1
        result = (edx_3 u>> 0x1f) + edx_3
    while (var_8_1 s< result)

return result
