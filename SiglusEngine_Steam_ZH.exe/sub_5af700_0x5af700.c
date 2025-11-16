// 函数: sub_5af700
// 地址: 0x5af700
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1

if (*(arg1 + 0x1c8) == 0 || *(arg1 + 0x19c) s> 0 || *(arg1 + 0x1b4) s> 0 || *(arg1 + 0x1f4) != 0)
    return 

int32_t eax_1
int32_t edx_1
edx_1:eax_1 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa8) - *(arg1 + 0xa4))
int32_t edx_2 = edx_1 s>> 8
int32_t i = 0

if ((edx_2 u>> 0x1f) + edx_2 s<= 0)
    return 

int32_t edi_1 = 0
int32_t edx_4

do
    void* eax_5 = *(arg1 + 0xa4) + edi_1
    
    if (*(eax_5 + 0x2a8) == 1)
        void* ecx_2 = data_bac4e8
        var_8 = eax_5 + 0x2c0
        sub_530ba0(ecx_2 + 0x2c, &var_8)
    
    i += 1
    int32_t eax_7
    int32_t edx_3
    edx_3:eax_7 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa8) - *(arg1 + 0xa4))
    edi_1 += 0x580
    edx_4 = edx_3 s>> 8
while (i s< (edx_4 u>> 0x1f) + edx_4)
