// 函数: sub_67dd80
// 地址: 0x67dd80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_67de70(arg1, *(data_bac510 + 0x1c76c))
int32_t esi = 0
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x66666667, arg1[1] - *arg1)
int32_t edx_1 = edx s>> 5
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (result s> 0)
    void* edi_1 = nullptr
    
    do
        sub_67dc10(edi_1 + *arg1, esi)
        edi_1 += 0x50
        int32_t eax_3
        int32_t edx_2
        edx_2:eax_3 = muls.dp.d(0x66666667, arg1[1] - *arg1)
        esi += 1
        int32_t edx_3 = edx_2 s>> 5
        result = (edx_3 u>> 0x1f) + edx_3
    while (esi s< result)

return result
