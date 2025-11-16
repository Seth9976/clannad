// 函数: sub_67f160
// 地址: 0x67f160
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_6422e0(&arg1[5])
int32_t i = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x6bca1af3, arg1[1] - *arg1)
int32_t var_c = 0
int32_t edx_3 = edx_2 s>> 5
int32_t var_8 = 0

if ((edx_3 u>> 0x1f) + edx_3 s> 0)
    int32_t edi_1 = 0
    int32_t edx_5
    
    do
        void* ecx_2 = *arg1 + edi_1
        void* var_8_1 = ecx_2
        var_c = *(ecx_2 + 0x18)
        int32_t* eax_4
        int32_t ecx_4
        eax_4, ecx_4 = sub_67fa50(&var_c)
        int32_t* var_28_2 = eax_4
        void* var_2c_1 = &eax_4[4]
        void** var_14
        sub_67fa80(&arg1[5], &var_14, ecx_4)
        i += 1
        int32_t eax_6
        int32_t edx_4
        edx_4:eax_6 = muls.dp.d(0x6bca1af3, arg1[1] - *arg1)
        edi_1 += 0x4c
        edx_5 = edx_4 s>> 5
    while (i s< (edx_5 u>> 0x1f) + edx_5)

int32_t result
result.b = 1
return result
